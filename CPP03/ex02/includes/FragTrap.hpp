
#ifndef EX02_FRAGTRAP_HPP_
# define EX02_FRAGTRAP_HPP_

# include "ClapTrap.hpp"

# include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		~FragTrap();

		FragTrap& operator=(const FragTrap& other);

		void highFivesGuys();
	private:
};

#endif
