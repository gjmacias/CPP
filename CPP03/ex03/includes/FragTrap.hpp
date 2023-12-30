
#ifndef EX03_FRAGTRAP_HPP_
# define EX03_FRAGTRAP_HPP_

# include "ClapTrap.hpp"

# include <string>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		virtual ~FragTrap();

		FragTrap& operator=(const FragTrap& other);

		void highFivesGuys();
	protected:
};

#endif
