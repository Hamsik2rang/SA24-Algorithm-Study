#include <iostream>
#include <vector>

void Check(const int& cand, const int& question, int& stk, int& ball)
{
	for (int i = 0; i < 3; i++)
	{
		int num = question;
		for (int pow = 0; pow < i; pow++)
		{
			num /= 10;
		}
		int tempCand = cand;
		for (int j = 0; j < 3; j++)
		{
			int curDigit = tempCand % 10;

			if (num % 10 == curDigit)
			{
				if (i == j)
				{
					stk++;
					break;
				}
				else
				{
					ball++;
				}
			}
			tempCand /= 10;
		}
	}
}

int main()
{
	int n;
	int answer = 0;
	std::cin >> n;
	std::vector<std::vector<int>> question(n, std::vector<int>(3));

	for (auto& elem : question)
	{
		std::cin >> elem[0] >> elem[1] >> elem[2];
	}

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (i == j)
			{
				continue;
			}
			for (int k = 1; k < 10; k++)
			{
				if (i == k || j == k)
				{
					continue;
				}
				int candidate = i * 100 + j * 10 + k;
				bool isAnswer = true;
				for (const auto& elem : question)
				{
					int stk = 0, ball = 0;
					Check(candidate, elem[0], stk, ball);
					if (elem[1] != stk || elem[2] != ball)
					{
						isAnswer = false;
						break;
					}
				}
				if (isAnswer)
				{
					answer++;
				}
			}
		}
	}
	std::cout << answer;

	return 0;
}