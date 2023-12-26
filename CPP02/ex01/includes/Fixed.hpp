#ifndef EX01_FIXED_HPP_
# define EX01_FIXED_HPP_

#include <string>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(int value);
		Fixed(float value);
		~Fixed();

		Fixed&				operator=(const Fixed& other);

		void				setRawBits(const int rawBits);
		int					getRawBits() const;
		int					toInt() const;
		float				toFloat() const;
	private:
		static const int	_nFracBits = 8;
		int					_rawBits;
};

std::ostream &operator<<(std::ostream &os, const Fixed& obj);

#endif
