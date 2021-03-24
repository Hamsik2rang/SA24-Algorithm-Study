// 엄청 지저분하게 푼 거 같긴 하지만 일단 제출한 그대로 올립니당..
// prefix notation은 연산자 우선순위가 높은 연산자일수록 빨리 등장합니다.
// ex. A + B / C => ABC/+
// 따라서 스택에 연산자들을 쟁여두다가 출력할 때 자기보다 우선순위가 높은(말 그대로 우선순위가 높거나 동순위이면서 순서가 먼저인) 연산자들이 먼저 나오도록 하면 됩니다.
// 문제에는 연산자가 +, -, *, /, (, ) 6개가 등장하고, 각 우선순위는
// 1. ( , )
// 2. * , /
// 3. + , -
// 이므로 연산자를 스택에 쟁여둘 때 스택안에 자기보다 우선순위가 높은 친구들을 다 출력한 후 집어넣는 식으로 코드를 짜면 될 것 같습니다(됩니다..ㅎ)
#include <iostream>
#include <stack>
#include <string>

bool IsOperator(const char& e)
{
	return (e == '+' || e == '-' || e == '*' || e == '/' || e == '(' || e == ')');
}

int main()
{
	std::stack<char> st;
	std::string prefix = "", infix = "";
	std::cin >> infix;

	for (const auto& e : infix)
	{
		if (!IsOperator(e))
		{
			prefix += e;
		}
		else if (e == '+' || e == '-')
		{
			while (!st.empty() && st.top() != '(')
			{
				prefix += st.top();
				st.pop();
			}
			st.push(e);
		}
		else if (e == ')')
		{
			while (!st.empty() && st.top() != '(')
			{
				prefix += st.top();
				st.pop();
			}
			st.pop();
		}
		else if (e == '(')
		{
			st.push(e);
		}
		// If e is '*' or '/'.
		else
		{
			while (!st.empty() && st.top() != '+' && st.top() != '-' && st.top() !='(')
			{
				prefix += st.top();
				st.pop();
			}
			st.push(e);
		}
	}
	while (!st.empty())
	{
		prefix += st.top();
		st.pop();
	}

	std::cout << prefix << '\n';

	return 0;
}