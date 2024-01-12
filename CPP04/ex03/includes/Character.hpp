#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(const std::string& name);
		Character(const Character& other);
		~Character();

		Character& operator=(const Character& other);

		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
	private:
		Character();
		static const int	InventorySize = 4;
		std::string			_name;
		AMateria*			_inventory[Character::InventorySize];
		int					_nEquiped;
};

#endif
