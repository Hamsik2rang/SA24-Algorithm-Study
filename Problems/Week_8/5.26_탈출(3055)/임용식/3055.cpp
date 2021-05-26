#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int dochi[50][50];
int water[50][50];
int rock[50][50];
int beaver[50][50];

void BFS(int target[][50], int r, int c, int maxR, int maxC)
{
	queue<pair<int, int>> q;
	q.push(make_pair(r, c));
	target[r][c] = 1;
	while (!q.empty())
	{
		int curRow = q.front().first, curColumn = q.front().second;
		int curMinute = target[curRow][curColumn] + 1;
		q.pop();

		if (curRow > 0 && !rock[curRow - 1][curColumn] && !beaver[curRow - 1][curColumn] && (!target[curRow - 1][curColumn] || (target[curRow - 1][curColumn] != 0 && target[curRow - 1][curColumn] > curMinute)))
		{
			target[curRow - 1][curColumn] = curMinute;
			q.push(make_pair(curRow - 1, curColumn));
		}
		if (curRow < maxR - 1 && !rock[curRow + 1][curColumn] && !beaver[curRow + 1][curColumn] && (!target[curRow + 1][curColumn] || (target[curRow + 1][curColumn] != 0 && target[curRow - 1][curColumn] > curMinute)))
		{
			target[curRow + 1][curColumn] = curMinute;
			q.push(make_pair(curRow + 1, curColumn));
		}
		if (curColumn > 0 && !rock[curRow][curColumn - 1] && !beaver[curRow][curColumn - 1] && (!target[curRow][curColumn - 1] || (target[curRow][curColumn - 1] != 0 && target[curRow][curColumn - 1] > curMinute)))
		{
			target[curRow][curColumn - 1] = curMinute;
			q.push(make_pair(curRow, curColumn - 1));
		}
		if (curColumn < maxC - 1 && !rock[curRow][curColumn + 1] && !beaver[curRow][curColumn + 1] && (!target[curRow][curColumn + 1] || (target[curRow][curColumn + 1] != 0 && target[curRow][curColumn + 1] > curMinute)))
		{
			target[curRow][curColumn + 1] = curMinute;
			q.push(make_pair(curRow, curColumn + 1));
		}
	}
}

int main()
{
	queue<pair<int, int>> dochiPos;
	queue<pair<int, int>> waterPos;
	int r, c;
	cin >> r >> c;

	for (int i = 0; i < r; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'D')
			{
				beaver[i][j] = 1;
			}
			else if (s[j] == 'S')
			{
				dochiPos.push(make_pair(i, j));
			}
			else if (s[j] == 'X')
			{
				rock[i][j] = 1;
			}
			else if (s[j] == '*')
			{
				waterPos.push(make_pair(i, j));
			}
		}
	}

	while (!dochiPos.empty())
	{
		BFS(dochi, dochiPos.front().first, dochiPos.front().second, r, c);
		dochiPos.pop();
	}
	while (!waterPos.empty())
	{
		BFS(water, waterPos.front().first, waterPos.front().second, r, c);
		waterPos.pop();
	}

	int answer = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (beaver[i][j])
			{
				if (i > 0)
				{
					if (dochi[i - 1][j] < water[i - 1][j])
					{
						(answer == 0 || answer > dochi[i - 1][j]) ? answer = dochi[i - 1][j] : false;
					}
				}
				if (i < r - 1)
				{
					if (dochi[i + 1][j] < water[i + 1][j])
					{
						(answer == 0 || answer > dochi[i + 1][j]) ? answer = dochi[i + 1][j] : false;
					}
				}
				if (j > 0)
				{
					if (dochi[i][j - 1] < water[i][j - 1])
					{
						(answer == 0 || answer > dochi[i][j - 1]) ? answer = dochi[i][j - 1] : false;
					}
				}
				if (j < c - 1)
				{
					if (dochi[i][j + 1] < water[i][j + 1])
					{
						(answer == 0 || answer > dochi[i][j + 1]) ? answer = dochi[i][j + 1] : false;
					}
				}
			}
		}
	}
	if (answer)
	{
		cout << answer;
	}
	else
	{
		cout << "KAKTUS";
	}

	return 0;
}