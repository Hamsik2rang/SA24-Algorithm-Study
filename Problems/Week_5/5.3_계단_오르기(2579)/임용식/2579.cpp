#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int Floor(const int& n, const std::vector<int>& score, bool hasStep)
{
	static int memo[301][2]{ 0 };
	if (n < 1)
	{
		return 0;
	}
	if (memo[n][hasStep])
	{
		return memo[n][hasStep];
	}
	else if (hasStep)
	{
		memo[n][hasStep] = std::max(Floor(n - 2, score, false), Floor(n - 2, score, true)) + score[n];
	}
	else
	{
		memo[n][hasStep] = Floor(n - 1, score, true) + score[n];
	}
	return memo[n][hasStep];
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> score(n + 1);

	for (int i = 1; i <= n; i++)
	{
		std::cin >> score[i];
	}

	std::cout << std::max(Floor(n, score, false), Floor(n, score, true));

	return 0;
}