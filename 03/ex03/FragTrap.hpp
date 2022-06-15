#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"


class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& copy);
		void	highFiveGuys( void );
		void	initHitPoints(void);
		void	initDamage(void);
};

#endif