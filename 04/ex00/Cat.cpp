#include "Cat.hpp"

Cat::Cat()
{
	type_ = "Cat";
	sound_ = "miaus";
	std::cout << "Default Cat Constructor!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat Deconstructor!" << std::endl;
}