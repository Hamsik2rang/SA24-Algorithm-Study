#include <iostream>
#include <string>
#include <stack>


int main()
{
	while (true)
	{
		std::stack<char> st;
		std::string sentence;
		bool isBalanced = true;
		std::getline(std::cin, sentence);

		if (sentence == ".")
			break;

		for (const auto& i : sentence)
		{
			if (i == '(' || i == '[')
			{
				st.push(i);
				continue;
			}
			else if (i == ')')
			{
				if (st.empty() || st.top() != '(')
				{
					isBalanced = false;
					break;
				}
				st.pop();
			}
			else if (i == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					isBalanced = false;
					break;
				}
				st.pop();
			}
		}
		if (!st.empty())
		{
			isBalanced = false;
		}
		std::cout << (isBalanced ? "yes" : "no") << '\n';
	}

	return 0;
}