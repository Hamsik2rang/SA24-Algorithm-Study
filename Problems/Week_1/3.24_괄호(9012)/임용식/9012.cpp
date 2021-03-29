#include <iostream>
#include <string>

int main()
{
	int t;
	std::cin >> t;

	while (t--)
	{
		int stack = 0;
		bool isValid = true;
		std::string ps;
		std::cin >> ps;

		for (const auto& p : ps)
		{
			if (p == '(')
			{
				stack++;
			}
			else if (stack != 0)
			{
				stack--;
			}
			else
			{
				isValid = false;
				break;
			}
		}
		if (stack != 0)
		{
			isValid = false;
		}
		std::cout << (isValid ? "YES" : "NO")<<'\n';
	}

	return 0;
}