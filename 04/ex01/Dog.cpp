#include "Dog.hpp"

Dog::Dog(): Animal("Dog", "barks"){
	std::cout << "Default Dog Constructor!" << std::endl;
}

Dog::~Dog(){
	std::cout << "Default Dog Deconstructor!" << std::endl;
}

Dog::Dog(const Dog& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& copy){
	type_ = copy.type_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}

void	makeSound( void ){
	std::cout << "Woof woof!" << std::endl;
}
