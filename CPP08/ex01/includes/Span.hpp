
#ifndef SPAN_HPP_
# define SPAN_HPP_

# include <vector>
# include <cstddef>
# include <exception>

class Span
{
	private:
		Span();

		std::vector<int>					_vector;
		std::size_t							_size;

		typedef std::vector<int>::iterator	IT;
	public:
		Span(unsigned int n);
		Span(const Span& other);
		~Span();

		Span& operator=(const Span& other);

		std::size_t		size() const;

		void			addNumber(int n);
		void			addRange(IT begin, IT end);

		unsigned int	shortestSpan() const;
		unsigned int 	longestSpan() const;

		
		class SpanIsFullException : public std::exception {
			public: 
				virtual const char* what() const throw();
		};
		class SizeTooSmallException : public std::exception {
			public: 
				virtual const char* what() const throw();
		};
};

#endif
