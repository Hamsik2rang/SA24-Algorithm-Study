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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (seq[i] > seq[j] && memo[i] < memo[j])
			{
				memo[i] = memo[j];
			}
		}
		memo[i]++;
	}

	std::cout << *std::max_element(memo.begin(),memo.end());

	return 0;
}