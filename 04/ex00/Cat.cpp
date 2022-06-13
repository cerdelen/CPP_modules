#include "Cat.hpp"

Cat::Cat(): Animal("Cat", "miaus")
{
	std::cout << "Default Cat Constructor!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat Deconstructor!" << std::endl;
}