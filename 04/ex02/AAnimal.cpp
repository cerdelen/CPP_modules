#include "AAnimal.hpp"

AAnimal::AAnimal(): type_("ANIMAL")
{
	std::cout << "Default AAnimal Constructor!" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal Deconstructor!" << std::endl;
}

std::string AAnimal::getType( void ) const{
	return (type_);
}

AAnimal::AAnimal(const AAnimal& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& copy){
	type_ = copy.type_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}