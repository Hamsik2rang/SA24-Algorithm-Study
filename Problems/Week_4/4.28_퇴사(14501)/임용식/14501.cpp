#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> task(n);
	std::vector<int> memo(n);

	for (int i = 0; i < n; i++)
	{
		int t, p;
		std::cin >> t >> p;
		if (t + i > n)
		{
			p = 0;
		}
		task[i] = std::make_pair(t, p);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		std::vector<int> temp(1, 0);
		for (int j = i + task[i].first; j < n; j++)
		{
			temp.push_back(memo[j]);
		}
		memo[i] = *std::max_element(temp.begin(), temp.end()) + task[i].second;
	}

	std::cout << *std::max_element(memo.begin(), memo.end());

	return 0;
}