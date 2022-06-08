#include "HumanB.hpp"

// HumanB::HumanB(std::string n, Weapon &type){
// 	weap_ = type;
// 	name_ = n;
// };

HumanB::HumanB(std::string name): name_(name)
{
}

void	HumanB::setWeapon(Weapon *weap)
{
	weap_ = weap;
}

void	HumanB::attack(){
	if(weap_ != NULL)
		std::cout << name_ << " attacks with their " << weap_->getType() << std::endl;
}

HumanB::~HumanB()
{
}