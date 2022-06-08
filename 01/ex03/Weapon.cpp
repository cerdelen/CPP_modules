#include "Weapon.hpp"

const std::string& Weapon::getType(){
	return (type_);
}

void Weapon::setType(std::string t){
	type_ = t;
}

Weapon::Weapon(std::string t): type_(t)
{
}

Weapon::~Weapon()
{
}