#ifndef EX01_ZOMBIE_HPP_
# define EX01_ZOMBIE_HPP_

# include <string>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void announce(void) const;
		void setName(std::string name);
	private:
		std::string _name;
};

Zombie	*newZombie(std::string);
void	randomChump(std::string name);
Zombie	*zombieHorde( int N, std::string name );

#endif
