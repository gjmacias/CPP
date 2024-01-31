#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <cstddef>
# include <exception>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int size);
		Array(const Array& other);
		~Array();

		Array& operator=(const Array& other);

		T& operator[](std::size_t index);

		std::size_t		size() const;
	private:
		T*				_head;
		std::size_t		_size;
	public:
		class InvalidIndexException : public std::exception
		{
			public: 
				const char* what() const throw();
		};
};

#endif
