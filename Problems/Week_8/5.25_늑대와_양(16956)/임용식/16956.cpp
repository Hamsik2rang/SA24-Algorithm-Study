#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int wolf[500][500];
string ranch[500];

void BFS(int r, int c, int maxR, int maxC)
{
	queue<pair<int, int>> q;
	wolf[r][c] = 1;
	q.push(make_pair(r, c));

	while (!q.empty())
	{
		int curR = q.front().first;
		int curC = q.front().second;
		q.pop();
		if (curR > 0)
		{
			if (wolf[curR - 1][curC] && wolf[curR - 1][curC] > wolf[curR][curC] + 1 || !wolf[curR - 1][curC])
			{
				wolf[curR - 1][curC] = wolf[curR][curC] + 1;
				q.push(make_pair(curR - 1, curC));
			}
		}
		if (curR < maxR - 1)
		{
			if (wolf[curR + 1][curC] && wolf[curR + 1][curC] > wolf[curR][curC] + 1 || !wolf[curR + 1][curC])
			{
				wolf[curR + 1][curC] = wolf[curR][curC] + 1;
				q.push(make_pair(curR + 1, curC));
			}
		}
		if (curC > 0)
		{
			if (wolf[curR][curC - 1] && wolf[curR][curC - 1] > wolf[curR][curC] + 1 || !wolf[curR][curC - 1])
			{
				wolf[curR][curC - 1] = wolf[curR][curC] + 1;
				q.push(make_pair(curR, curC - 1));
			}
		}
		if (curC < maxC - 1)
		{
			if (wolf[curR][curC + 1] && wolf[curR][curC + 1] > wolf[curR][curC] + 1 || !wolf[curR][curC + 1])
			{
				wolf[curR][curC + 1] = wolf[curR][curC] + 1;
				q.push(make_pair(curR, curC + 1));
			}
		}
	}
}

void SetFence(queue<pair<int,int>>& sheepPos, int maxR, int maxC)
{
	while (!sheepPos.empty())
	{
		if (wolf[sheepPos.front().first][sheepPos.front().second])
		{
			int x = sheepPos.front().second;
			int y = sheepPos.front().first;

			if (y > 0&& ranch[y - 1][x] != 'S')
			{
				ranch[y - 1][x] = 'D';
			}
			if (y < maxR - 1 && ranch[y + 1][x] != 'S')
			{
				ranch[y + 1][x] = 'D';
			}
			if (x > 0 && ranch[y][x - 1] != 'S')
			{
				ranch[y][x - 1] = 'D';
			}
			if (x < maxC - 1 && ranch[y][x + 1] != 'S')
			{
				ranch[y][x + 1] = 'D';
			}
		}
		sheepPos.pop();
	}
}

int main()
{
	int r, c;
	cin >> r >> c;

	queue<pair<int, int>> sheepPos;
	queue<pair<int, int>> wolfPos;

	for (int i = 0; i < r; i++)
	{
		string s;
		cin >> s;
		ranch[i] = s;
		for (int j = 0; j < s.length(); j++)
		{
			if (ranch[i][j] == 'S')
			{
				sheepPos.push(make_pair(i, j));
			}
			else if (ranch[i][j] == 'W')
			{
				wolfPos.push(make_pair(i, j));
			}
		}
	}

	while (!wolfPos.empty())
	{
		BFS(wolfPos.front().first, wolfPos.front().second, r, c);
		wolfPos.pop();
	}
	int count = sheepPos.size();
	while (count--)
	{
		if (wolf[sheepPos.front().first][sheepPos.front().second] && wolf[sheepPos.front().first][sheepPos.front().second] <= 2)
		{
			cout << 0;
			return 0;
		}
		auto temp = sheepPos.front();
		sheepPos.pop();
		sheepPos.push(temp);
	}
	SetFence(sheepPos, r, c);

	cout << 1 << '\n';
	for (int i = 0; i < r; i++)
	{
		cout << ranch[i] << '\n';
	}

	return 0;
}