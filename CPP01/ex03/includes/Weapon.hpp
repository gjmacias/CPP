#ifndef EX03_WEAPON_HPP_
# define EX03_WEAPON_HPP_

#include <string>

class Weapon {
	public:
		Weapon(std::string name);
		~Weapon();

		void		setType(std::string type);
		std::string	getType() const;

	private:
		std::string	_nameWearpon;
};

#endif
