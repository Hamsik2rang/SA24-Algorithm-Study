#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> seq(n);
	std::vector<int> memo(n);
	for (auto& elem : seq)
	{
		std::cin >> elem;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (seq[i] > seq[j] && memo[i] < memo[j])
			{
				memo[i] = memo[j];
			}
		}
		memo[i]++;
	}

	std::cout << *std::max_element(memo.begin(), memo.end());

	return 0;
}