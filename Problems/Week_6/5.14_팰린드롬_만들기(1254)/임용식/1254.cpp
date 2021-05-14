#include <iostream>
#include <vector>
#include <string>

bool IsPalindrome(std::string& s)
{
	for (int i = 0; i < s.length() / 2; i++)
	{
		if (s[i] != s[s.length() - 1 - i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	std::string s;
	std::cin >> s;
	int answer = 1;

	if (IsPalindrome(s))
	{
		std::cout << s.length();
		return 0;
	}

	for (int i = 0; i < s.length() - 1; i++)
	{
		std::string temp = "";

		for (int j = 0; j <= i; j++)
		{
			temp = s[j] + temp;
		}
		temp = s + temp;
		if (IsPalindrome(temp))
		{
			answer = temp.length();
			break;
		}
	}
	std::cout << answer;

	return 0;
}