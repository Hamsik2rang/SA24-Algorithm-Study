#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> num(n);
	std::vector<int> memo(n);

	for (auto& elem : num)
	{
		std::cin >> elem;
	}
	*(memo.end() - 1) = *(num.end() - 1);

	for (int i = num.size() - 2; i >= 0; i--)
	{
		memo[i] = memo[i] > memo[i + 1] ? num[i] : memo[i + 1] + num[i];
	}
	std::cout << *std::max_element(memo.begin(), memo.end());

	return 0;
}