#include <iostream>
#include <queue>
#include <stack>

int main()
{
	std::queue<int> snackLine;
	std::stack<int> tempLine;
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		snackLine.push(temp);
	}

	for (int i = 1; i <= n;)
	{
		if (snackLine.empty() && tempLine.top() != i)
		{
			std::cout << "Sad";
			return 0;
		}

		if (!snackLine.empty() && snackLine.front() == i)
		{
			snackLine.pop();
			i++;
		}
		else if (!tempLine.empty() && tempLine.top() == i)
		{
			tempLine.pop();
			i++;
		}
		else
		{
			while (!snackLine.empty() && snackLine.front() != i)
			{
				tempLine.push(snackLine.front());
				snackLine.pop();
			}
		}
	}
	std::cout << "Nice";

	return 0;
}