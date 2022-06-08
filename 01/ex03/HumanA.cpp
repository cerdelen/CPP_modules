#include "HumanA.hpp"

// HumanA::HumanA(std::string n, Weapon &type){
// 	weap_ = type;
// 	name_ = n;
// };


void	HumanA::setName(std::string name)
{
	name_ = name;
}

HumanA::HumanA(std::string name, Weapon &weapon): weap_(weapon)
{
    setName(name);
}

void	HumanA::attack(){
	std::cout << name_ << " attacks with their " << weap_.getType() << std::endl;
}

HumanA::~HumanA()
{
}