#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon
{
private:
	std::string type_;
public:
	Weapon(std::string type);
	~Weapon();
	const std::string& getType();
	void setType(std::string t);
};


#endif