#include <iostream>

int Solution(int n)
{
	static int memo[11] = { 0 };

	if (memo[n])
	{
		return memo[n];
	}

	if (n == 1 || n == 2 || n == 3)
	{
		if (!memo[n])
		{
			memo[n] = 1;
			for (int i = 1; n - i > 0; i++)
			{
				memo[n] += Solution(n - i);
			}
		}
		return memo[n];
	}
	else
	{
		memo[n] = Solution(n - 1) + Solution(n - 2) + Solution(n - 3);
	}
	
	return memo[n];
}

int main()
{
	int t;

	std::cin >> t;
	while (t--)
	{
		int n;

		std::cin >> n;

		std::cout << Solution(n) << std::endl;
	}

	return 0;
}