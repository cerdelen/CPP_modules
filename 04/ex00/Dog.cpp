#include "Dog.hpp"

Dog::Dog(): Animal("Dog", "barks"){
	std::cout << "Default Dog Constructor!" << std::endl;
}

Dog::~Dog(){
	std::cout << "Default Dog Deconstructor!" << std::endl;
}