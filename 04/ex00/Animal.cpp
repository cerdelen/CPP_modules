#include "Animal.hpp"

Animal::Animal(): type_("ANIMAL"), sound_("animal_sound")
{
	std::cout << "Default Animal Constructor!" << std::endl;
}

Animal::Animal(std::string type): type_(type)
{
	std::cout << "Type Animal Constructor!" << std::endl;
}

Animal::Animal(std::string type, std::string sound): type_(type), sound_(sound)
{
	std::cout << "Type and sound Animal Constructor!" << std::endl;
}

void	Animal::makeSound( void ) const{
	std::cout << type_ << " " << sound_<< "!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal Deconstructor!" << std::endl;
}

std::string Animal::getType( void ) const{
	return (type_);
}

Animal::Animal(const Animal& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& copy){
	type_ = copy.type_;
	sound_ = copy.sound_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}