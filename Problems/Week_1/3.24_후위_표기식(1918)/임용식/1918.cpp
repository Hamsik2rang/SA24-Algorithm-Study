// ��û �������ϰ� Ǭ �� ���� ������ �ϴ� ������ �״�� �ø��ϴ�..
// prefix notation�� ������ �켱������ ���� �������ϼ��� ���� �����մϴ�.
// ex. A + B / C => ABC/+
// ���� ���ÿ� �����ڵ��� �￩�δٰ� ����� �� �ڱ⺸�� �켱������ ����(�� �״�� �켱������ ���ų� �������̸鼭 ������ ������) �����ڵ��� ���� �������� �ϸ� �˴ϴ�.
// �������� �����ڰ� +, -, *, /, (, ) 6���� �����ϰ�, �� �켱������
// 1. ( , )
// 2. * , /
// 3. + , -
// �̹Ƿ� �����ڸ� ���ÿ� �￩�� �� ���þȿ� �ڱ⺸�� �켱������ ���� ģ������ �� ����� �� ����ִ� ������ �ڵ带 ¥�� �� �� �����ϴ�(�˴ϴ�..��)
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