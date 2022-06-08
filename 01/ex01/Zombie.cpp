#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": got desroyed!" << std::endl;
}
