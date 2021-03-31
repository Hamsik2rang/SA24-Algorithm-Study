#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

int64_t Operation(const int64_t& lvalue, const char& op, const int64_t& rvalue)
{
	int64_t result;
	switch (op)
	{
	case '+':
		result = lvalue + rvalue;
		break;
	case '-':
		result = lvalue - rvalue;
		break;
	case '*':
		result = lvalue * rvalue;
		break;
	case '/':
		result = lvalue / rvalue;
		break;
	}

	return result;
}

bool IsOperator(const char& c)
{
	switch (c)
	{
	case '+':
	case '-':
	case '/':
	case '*':
		return true;
	default:;
	}
	return false;
}

int OperationOrder(const char& left, const char& right)
{
	if (((left == '*' || left == '/') && (right == '*' || right == '/')) || ((left == '+' || left == '-') && (right == '+' || right == '-')))
	{
		return 0;
	}
	else if (((left == '*' || left == '/') && (right == '+' || right == '-')))
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

int main()
{
	std::deque<int64_t> operand;
	std::deque<char> op;
	std::string operandStr = "";
	std::string expression;
	bool wasOperator = true;
	std::cin >> expression;

	for (int i = 0; i < expression.length(); i++)
	{
		if (wasOperator && IsOperator(expression[i]))
		{
			operandStr += expression[i];
			wasOperator = false;
		}
		else if (!IsOperator(expression[i]))
		{
			operandStr += expression[i];
			wasOperator = false;
		}
		else
		{
			wasOperator = true;
			op.push_back(expression[i]);
			operand.push_back(std::stoll(operandStr));
			operandStr = "";
		}
	}
	operand.push_back(std::stoll(operandStr));

	while (!op.empty())
	{
		auto order = OperationOrder(op.front(), op.back());
		if (order == 1)
		{
			auto rvalue = operand.back();
			operand.pop_back();
			char oprator = op.back();
			op.pop_back();
			auto lvalue = operand.back();
			operand.pop_back();

			operand.push_back(Operation(lvalue, oprator, rvalue));
		}
		else if (order == 0)
		{
			auto rvalue = operand.back();
			operand.pop_back();
			char oprator = op.back();
			op.pop_back();
			auto lvalue = operand.back();
			operand.pop_back();

			operand.push_back(lvalue);
			operand.push_back(rvalue);
			op.push_back(oprator);

			auto backResult = Operation(lvalue, oprator, rvalue);

			lvalue = operand.front();
			operand.pop_front();
			oprator = op.front();
			op.pop_front();
			rvalue = operand.front();
			operand.pop_front();

			operand.push_front(rvalue);
			operand.push_front(lvalue);
			op.push_front(oprator);

			auto frontResult = Operation(lvalue, oprator, rvalue);

			if (backResult > frontResult)
			{
				operand.pop_back();
				operand.pop_back();
				op.pop_back();
				operand.push_back(backResult);
			}
			else
			{
				operand.pop_front();
				operand.pop_front();
				op.pop_front();
				operand.push_front(frontResult);
			}
		}
		else
		{
			auto lvalue = operand.front();
			operand.pop_front();
			char oprator = op.front();
			op.pop_front();
			auto rvalue = operand.front();
			operand.pop_front();

			operand.push_front(Operation(lvalue, oprator, rvalue));
		}
	}
	std::cout << operand.front();

	return 0;
}