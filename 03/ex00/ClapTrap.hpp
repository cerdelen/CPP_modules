#ifndef	CLAPTRAP_H
#define	CLAPTRAP_H

#include <iostream>





class ClapTrap
{
	private:
		std::string		name_;
		int				hp_;
		int				mana_;
		int				a_dmg_;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};






// It will be called ClapTrap and will have the following private attributes initialized to the values specified in brackets:
// • Name, which is passed as parameter to a constructor • Hit points (10), represent the health of the ClapTrap • Energy points (10)
// • Attack damage (0)
// Add the following public member functions so the ClapTrap looks more realistic:
// • void attack(const std::string& target); • void takeDamage(unsigned int amount);
// • void beRepaired(unsigned int amount);




#endif