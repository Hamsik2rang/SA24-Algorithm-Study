#include <iostream>
#include <vector>

int main()
{
	int n, k;
	int count = 0;
	std::cin >> n >> k;

	std::vector<uint16_t> bulb(n + 1);
	std::vector<uint16_t> xorBulb(n + 1);

	for (int i = 1; i <= n; i++)
	{
		std::cin >> bulb[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		xorBulb[i] = bulb[i - 1] ^ bulb[i];
	}

	for (int i = 1; i <= n - k + 2; ++i)
	{
		if (xorBulb[i])
		{
			xorBulb[i] ^= 1, xorBulb[i + k] ^= 1;
			++count;
		}
	}

	for (int i = n - k + 2; i <= n; ++i)
	{
		if (xorBulb[i])
		{
			std::cout << "Insomnia";
			return 0;
		}
	}		
	std::cout << count;

	return 0;
}