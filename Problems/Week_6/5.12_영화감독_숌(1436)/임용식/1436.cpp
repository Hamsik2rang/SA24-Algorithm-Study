#include <iostream>
#include <vector>

bool IsShowm(int number)
{
	int count = 0;
	while (number > 0)
	{
		auto mod = number % 10;
		if (mod == 6)
		{
			count++;
		}
		else
			if (count < 3)
			{
				count = 0;
			}
			else
			{
				break;
			}
		number /= 10;
	}
	if (count < 3)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int number = 665;
	int n;
	std::cin >> n;

	int showm = 0;
	while (showm < n)
	{
		number++;
		if (IsShowm(number))
		{
			showm++;
		}
	}
	std::cout << number;

	return 0;
}