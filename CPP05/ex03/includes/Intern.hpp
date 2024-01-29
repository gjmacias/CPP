
#ifndef INTERN_HPP_
# define INTERN_HPP_

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# include <string>

# define N_FORMS 3

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		~Intern();

		Intern& operator=(const Intern& other);

		Form* makeForm(std::string name, std::string target);
	private:
		typedef struct	s_forms 
		{
			std::string	name;
			Form		*formClass;
		}				t_forms;
};

#endif
