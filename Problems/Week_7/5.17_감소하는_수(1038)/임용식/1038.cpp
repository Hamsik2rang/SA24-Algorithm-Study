#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	uint64_t num = 0, answer = 0;
	uint64_t end = 9;
	uint64_t digit = 1;
	uint64_t lastAnswer = 0;
	while (answer <= n)
	{
		int tempNum = num;
		if (num > end)
		{
			digit *= 10;
			num = digit;
			uint64_t temp = end % 10 - 1;
			end = 10 * end + temp;
		}

		bool isAnswer = true;
		while (tempNum > 0)
		{
			int next = tempNum % 10;
			tempNum /= 10;
			int cur = tempNum % 10;

			if (cur <= next && tempNum)
			{
				isAnswer = false;
				break;
			}
		}
		if (isAnswer)
		{
			std::cout << answer<<"th: "<<lastAnswer << std::endl;
			lastAnswer = num;
			answer++;
		}
		num++;
	}
	std::cout << lastAnswer;

	return 0;
}