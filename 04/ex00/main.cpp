#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* Mulain = new Animal();
	const Animal* doggo = new Dog();
	const Animal* catto = new Cat();

	std::cout << Mulain->getType() << std::endl;
	std::cout << doggo->getType() << " " << std::endl;
	std::cout << catto->getType() << " " << std::endl;

	Mulain->makeSound();
	catto->makeSound();
	doggo->makeSound();

	std::cout << doggo->getType() << std::endl;
	doggo->makeSound();

	// Dog *a;
	// Dog *b = new Dog();

	// *a = *b;

	delete(Mulain);
	delete(catto);
	delete(doggo);	

	return (0);
}