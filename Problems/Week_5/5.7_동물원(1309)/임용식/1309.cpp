#include <iostream>

#define MOD 9901

int memo[1000001][3]{ {0}, { 1,1,1 } };

int main()
{
	int n;
	std::cin >> n;

	for (int i = 2; i <= n; i++)
	{
		memo[i][0] = (memo[i - 1][0] + memo[i - 1][1] + memo[i - 1][2]) % MOD;
		memo[i][1] = (memo[i - 1][0] + memo[i - 1][2]) % MOD;
		memo[i][2] = (memo[i - 1][0] + memo[i - 1][1]) % MOD;
	}
	std::cout << (memo[n][0] + memo[n][1] + memo[n][2]) % MOD;

	return 0;
}