#include "Cat.hpp"

Cat::Cat()
{
	type_ = "Cat";
	std::cout << "Default Cat constructor!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat Deconstructor!" << std::endl;
}

Cat::Cat(const Cat& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& copy){
	type_ = copy.type_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << "Miau miau!" << std::endl;
}
