#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[101];
bool check[101];

void DFS(int x, int& count)
{
	check[x] = true;
	count++;
	for (int i = 0; i < graph[x].size(); i++)
	{
		int next = graph[x][i];
		if (!check[next])
		{
			DFS(next, count);
		}
	}
}

int main()
{
	int v, e;
	int count = 0;
	cin >> v >> e;

	for (int i = 0; i < e; i++)
	{
		int from, to;
		cin >> from >> to;
		graph[from].push_back(to);
		graph[to].push_back(from);
	}

	DFS(1, count);

	cout << count - 1;

	return 0;
}