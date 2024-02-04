#include "RPN.hpp"

#include <cctype> // std::isdigt(), std::isspace()

std::stack<int>	RPN::_stack;

const struct RPN::operations RPN::_operations[OP_SIZE] = {
	{ '+', &RPN::OpSum },
	{ '-', &RPN::OpSub },
	{ '*', &RPN::OpMul },
	{ '/', &RPN::OpDiv }
};

int RPN::ResolveExpression(const std::string &line)
{
	if (line.empty()) {
		return (0);
	}
	for (std::string::const_iterator it = line.begin(); it != line.end(); ++it)
	{
		if (std::isspace(*it))
			continue;
		else if (std::isdigit(*it))
		{
			if (std::isdigit(*(it + 1)))
				throw::std::runtime_error("ERROR: Operator need to be less than 10");
			PushToken(static_cast<int>(*it - '0'));
		}
		else
			Operate(static_cast<unsigned char>(*it));
	}
	if (_stack.size() > 1)
		throw::std::runtime_error("Operations ended and stack has more than 1 item");
	int result = _stack.top();

	_stack = std::stack<int>();
	return (result);
}

void RPN::PopOperandsTokens(int &me, int &other)
{
	if (_stack.size() < 2)
		throw std::runtime_error("RPN stack must have at less 2 items to do operations");
	other = _stack.top();
	_stack.pop();
	me = _stack.top();
	_stack.pop();
}

void RPN::PushToken(int token)
{
	_stack.push(token);
}

void RPN::Operate(unsigned char symbol)
{
	for (short i = 0; i < OP_SIZE; ++i)
	{
		if (_operations[i].symbol == symbol)
		{
			int me = 0, other = 0;
			PopOperandsTokens(me, other);

			int res = (*(_operations[i].calc))(me, other);
			PushToken(res);
			return ;
		}
	}
	throw std::runtime_error("Encoutered an undefined operator");
}

int RPN::OpSum(const int &me, const int &other)
{
	return (me + other);
}

int RPN::OpSub(const int &me, const int &other)
{
	return (me - other);
}

int RPN::OpMul(const int &me, const int &other)
{
	return (me * other);
}

int RPN::OpDiv(const int &me, const int &other)
{
	if (other == 0)
		throw std::runtime_error("Tried to divide by 0");
	return (me / other);
}