#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int k, n;
	std::cin >> k >> n;

	std::vector<int64_t> lan(k);

	for (auto& i : lan)
	{
		std::cin >> i;
	}

	int64_t minLength = 1, maxLength = *max_element(lan.begin(), lan.end());

	while (minLength <= maxLength)
	{
		int64_t cuttedLanCount = 0;
		int64_t cutPoint = (minLength + maxLength) / 2;

		for (const auto& i : lan)
		{
			cuttedLanCount += i/cutPoint;
		}

		if (cuttedLanCount >= n)
		{
			minLength = cutPoint + 1;
		}
		else
		{
			maxLength = cutPoint - 1;
		}
	}
	std::cout << maxLength;

	return 0;
}