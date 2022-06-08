#include <iostream>
#include "Zombie.h"


int	main()
{
	Zombie	*ptr;
	
	ptr = newZombie("Old_Man");
	ptr->announce();
	delete ptr;
	randomChump("Knoodle");
}