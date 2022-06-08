#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	name_ = name;
}

Zombie::~Zombie()
{
	std::cout << name_ << ": got desroyed!" << std::endl;
}
