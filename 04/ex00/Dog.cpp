#include "Dog.hpp"

Dog::Dog(/* args */)
{
	type_ = "Dog";
	sound_ = "barks";
	std::cout << "Default Dog Constructor!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default Dog Deconstructor!" << std::endl;
}