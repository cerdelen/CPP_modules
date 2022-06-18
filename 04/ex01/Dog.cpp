#include "Dog.hpp"

Dog::Dog()
{
	brain_ = new Brain();
	type_ = "Dog";
	std::cout << "Default Dog cconstructor!" << std::endl;
}

Dog::~Dog(){
	delete brain_;
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

void	Dog::makeSound( void ) const {
	std::cout << "Woof woof!" << std::endl;
}

std::string		Dog::getIdea(int i){
	return (brain_->getIdea(i));
};

void			Dog::setIdea(int i, std::string idea){
	brain_->setIdea(i, idea);
};