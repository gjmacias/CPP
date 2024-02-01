
#ifndef SCALAR_HPP_
# define SCALAR_HPP_

# include <string>
# include <limits>

class Scalar
{
	public:
		~Scalar();

		static void	convert(const std::string& literal);
	private:
		Scalar();
		Scalar(const Scalar& other);
		Scalar& operator=(const Scalar& other);
};

#endif
