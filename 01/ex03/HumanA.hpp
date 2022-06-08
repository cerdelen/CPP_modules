#ifndef HUMAN_A_H
#define HUMAN_A_H
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	std::string name_;
	Weapon &weap_;
public:
	// HumanA(std::string n, Weapon &type){
	// 	weap_ = type;
	// 	name_ = n;
	// };
	void	setName(std::string name);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack(void);
};

#endif