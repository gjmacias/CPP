#ifndef RPN_HPP_
# define RPN_HPP_

# include <string> // std::string
# include <stack> // stack<>
# include <stdexcept> // std::runtime_error()

# define OP_SIZE	4

class RPN
{
	public:
		static int	ResolveExpression(const std::string &line);
	private:
		RPN();
		~RPN();
		RPN(const RPN &other);
		RPN& operator=(const RPN &other);

		static std::stack<int>	_stack;
		static const struct		operations
		{
			unsigned char	symbol;
			int				(*calc)(const int &me, const int &other);
		}						_operations[OP_SIZE];

		static void	PopOperandsTokens(int &me, int &other);
		static void	PushToken(int token);
		static void	Operate(unsigned char symbol);

		static int	OpSum(const int &me, const int &other);
		static int	OpSub(const int &me, const int &other);
		static int	OpMul(const int &me, const int &other);
		static int	OpDiv(const int &me, const int &other);
};

#endif
