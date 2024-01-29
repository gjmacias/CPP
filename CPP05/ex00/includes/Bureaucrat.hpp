#ifndef BUREAUCRAT_HPP_
# define BUREAUCRAT_HPP_

# include <string>
# include <iostream>
# include <exception>

# define MIN_GRADE	150
# define MAX_GRADE	1

class Bureaucrat {
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& other);

		const std::string&	getName() const;
		int					getGrade() const;

		void				increment();
		void				increment(int quantity);
		void				decrement();
		void				decrement(int quantity);
		void				checkGrade(int grade);
	private:
		Bureaucrat();

		const std::string	_name;
		int					_grade;
	public:
		class GradeTooHighException : public std::exception {
			public: const char* what() const throw ();
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& instance);

#endif
