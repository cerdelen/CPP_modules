#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"


class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();


		void	attack(const std::string& target);
		void	guardGate( void );
		void	initMana( void );
};



// ScavTrap will use the attributes of ClapTrap (update ClapTrap in consequence) and must initialize them to:
// • Name, which is passed as parameter to a constructor
// • Hit points (100), represent the health of the ClapTrap
// • Energy points (50)
// • Attack damage (20)
// ScavTrap will also have its own special capacity:
//     void guardGate();

#endif