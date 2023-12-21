#ifndef EX00_ZOMBIE_HPP_
# define EX00_ZOMBIE_HPP_

# include <string>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();

		void announce() const;
	private:
		std::string _name;
};

Zombie	*newZombie(std::string);
void	randomChump(std::string name);

#endif
