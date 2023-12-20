#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	int	i = -1;

	if (N <= 0) return NULL;
	Zombie *horde = new Zombie[N];
	while (++i < N)
	{
 		if (!name.empty()) {
			horde[i].setName(name);
		}
	}
	return (horde);
}
