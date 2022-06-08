#ifndef HUMAN_B_H
#define HUMAN_B_H
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	std::string name_;
	Weapon *weap_;
public:
	// HumanA(std::string n, Weapon &type){
	// 	weap_ = type;
	// 	name_ = n;
	// };
	void	setWeapon(Weapon *weap);
	void	setName(std::string name);
	HumanB(std::string name);
	~HumanB();
	void	attack(void);
};

#endif