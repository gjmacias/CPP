#ifndef EX02_FIXED_HPP_
# define EX02_FIXED_HPP_

#include <string>

class Fixed {
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		~Fixed();

		Fixed& operator=(const Fixed& other);

		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;

		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed& operator++();
		Fixed& operator--();

		Fixed operator++(int);
		Fixed operator--(int);

		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		void setRawBits(const int rawBits);
		int getRawBits() const;
		int toInt() const;
		float toFloat() const;
	private:
		static const int _nFracBits = 8;
		int _rawBits;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed& myClass);

#endif
