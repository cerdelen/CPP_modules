#include <iostream>
#include "Zombie.h"

int	main()
{
	Zombie	*ptr;
	int		amt = 9;
	
	ptr = zombieHorde(amt , "LOL");
	for (int i = 0; i < amt; i++)
		ptr[i].announce();
	delete [] ptr;
}
