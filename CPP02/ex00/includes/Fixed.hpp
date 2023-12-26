#ifndef EX00_FIXED_HPP_
# define EX00_FIXED_HPP_

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();

		Fixed&					operator=(const Fixed& other);

		void					setRawBits(const int rawBits);
		int						getRawBits() const;
	private:
			static const int	_nFracBits = 8;
			int 				_rawBits;
};

#endif
