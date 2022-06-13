#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat	catto;
	Dog doggo;

	catto.makeSound();
	doggo.makeSound();
}

// int main()
// {
// 	const Animal* Mulain = new Animal(); 
// 	const Animal* doggo = new Dog();
// 	const Animal* catto = new Cat();


// 	std::cout << doggo->type_ << " " << std::endl;
// 	std::cout << catto->type_ << " " << std::endl;


// 	catto->makeSound();
// 	doggo->makeSound();
// 	Mulain->makeSound();
	
	
// 	return 0;
// }