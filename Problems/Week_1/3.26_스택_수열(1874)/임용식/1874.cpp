#include <iostream>
#include <stack>

int main()
{
	int n;
	std::stack<int> st;
	std::string answer = "";
	std::cin >> n;
	int i = 1;
	while (n--)
	{
		int num;
		std::cin >> num;

		while (num >= i)
		{
			st.push(i++);
			answer+= "+\n";
		}
		if (st.empty())
		{
			std::cout << "NO" << '\n';
			return 0;
		}
		while (!st.empty() && num <= st.top())
		{
			if (st.empty() || st.top() < num)
			{
				std::cout << "NO" << '\n';
				return 0;
			}
			st.pop();
			answer += "-\n";
		}
	}
	std::cout << answer;

	return 0;
}