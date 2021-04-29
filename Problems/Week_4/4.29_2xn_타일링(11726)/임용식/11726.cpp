#include <iostream>
#include <algorithm>

int Tiling(int n)
{
	static int memo[1001];
	if (n == 0 || n == 1 || n == 2)
	{
		return n;
	}
	if (memo[n])
	{
		return memo[n];
	}
	else
	{
		memo[n] = (Tiling(n - 1) % 10007 + Tiling(n - 2) % 10007) % 10007;
	}
	return memo[n];
}

int main()
{
	int n;

	std::cin >> n;
	
	std::cout << Tiling(n);

	return 0;
}