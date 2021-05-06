#include <iostream>
#include <vector>
#include <algorithm>

int memo[1001][1001];

int main()
{
	int m, w;
	std::cin >> m >> w;
	std::vector<int> man(m);
	std::vector<int> woman(w);

	for (auto& elem : man)
	{
		std::cin >> elem;
	}
	for (auto& elem : woman)
	{
		std::cin >> elem;
	}

	std::sort(man.begin(), man.end(), std::less<int>());
	std::sort(woman.begin(), woman.end(), std::less<int>());

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			auto abs = std::abs(man[i - 1] - woman[j - 1]);
			if (i == j)
			{
				memo[i][j] = abs + memo[i - 1][j - 1];
			}
			else if (i < j)
			{
				memo[i][j] = std::min(abs + memo[i - 1][j - 1], memo[i][j - 1]);
			}
			else
			{
				memo[i][j] = std::min(abs + memo[i - 1][j - 1], memo[i - 1][j]);
			}
		}
	}
	std::cout << memo[m][w];

	return 0;
}