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
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& copy);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};
#endif