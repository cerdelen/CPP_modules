#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"


class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& copy);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& copy);
		void	highFiveGuys( void );
};

#endif