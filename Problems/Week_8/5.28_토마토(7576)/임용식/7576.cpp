#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

int box[1000][1000];
int dx[]{-1,1,0,0 };
int dy[]{ 0,0,-1,1 };
int m, n;

void BFS (queue<pair<int, int>>& tomatoPos)
{
	while (!tomatoPos.empty())
	{
		for (int i = 0; i < 4; i++)
		{
			int nx = tomatoPos.front().first + dx[i];
			int ny = tomatoPos.front().second + dy[i];
			int day = box[tomatoPos.front().first][tomatoPos.front().second];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				if (box[nx][ny] == 0 || box[nx][ny] > day + 1)
				{
					tomatoPos.push(make_pair(nx, ny));
					box[nx][ny] = day + 1;
				}
			}
		}
		tomatoPos.pop();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	queue<pair<int, int>> q;
	cin >> m >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> box[i][j];
			if (box[i][j] == 1)
			{
				q.push(make_pair(i, j));
			}
		}
	}
	
	BFS(q);

	int answer = 0;
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < m; c++)
		{
			if (!box[r][c])
			{
				cout << -1;
				return 0;
			}
			else if (answer < box[r][c])
			{
				answer = box[r][c];
			}
		}
	}
	cout << answer - 1;

	return 0;
}