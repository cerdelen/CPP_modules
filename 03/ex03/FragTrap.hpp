#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"


class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		void	highFiveGuys( void );
};

#endif