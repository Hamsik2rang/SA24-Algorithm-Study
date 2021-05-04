#include <iostream>

uint64_t Solution(const int& size, const int& start, const int& index, uint64_t memo[][10])
{
	if (size == index)
	{
		return 1;
	}
	if (memo[index][start])
	{
		return memo[index][start];
	}
	for (int i = start; i < 10; i++)
	{
		memo[index][start] += Solution(size, i, index + 1, memo);
	}

	return memo[index][start];
}

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		uint64_t memo[65][10]{ 0 };
		std::cin >> n;
		std::cout << Solution(n, 0, 0, memo) << std::endl;
	}

	return 0;
}