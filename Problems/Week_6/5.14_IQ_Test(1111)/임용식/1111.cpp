#include <iostream>
#include <vector>
#include <string>

int main()
{
	int n, answer = 0;
	std::cin >> n;
	std::vector<int> v(n);
	for (auto& elem : v)
	{
		std::cin >> elem;
	}	

	if (v.size() == 1)
	{
		std::cout << "A";
	}
	else if (v.size() == 2)
	{
		if (v[0] == v[1])
		{
			std::cout << v[0];
		}
		else
		{
			std::cout << "A";
		}
	}
	else
	{
		if (v[0] == v[1])
		{
			bool isSame = true;
			for (int i = 2; i < v.size(); i++)
			{
				if (v[i - 1] != v[i])
				{
					isSame = false;
					break;
				}
			}
			if (!isSame)
			{
				std::cout << "B";
			}
			else
			{
				std::cout << v[0];
			}
		}
		else
		{
			if ((v[2] - v[1]) % (v[1] - v[0]) != 0)
			{
				std::cout << "B";
			}
			else
			{
				int q = (v[2] - v[1]) / (v[1] - v[0]);
				int r = v[1] - q * v[0];
				
				for (int i = 2; i < v.size()-1; i++)
				{
					if (v[i] * q + r != v[i + 1])
					{
						std::cout << "B";
						return 0;
					}
				}
				std::cout << v[v.size() - 1] * q + r;
			}
		}
	}

	return 0;
}