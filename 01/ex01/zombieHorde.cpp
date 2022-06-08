
#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
	Zombie *arr;

	arr = new Zombie[n]; 
	for (int j = 0; j < n; j++)
		arr[j].set_name(name);
	return (arr);
}
