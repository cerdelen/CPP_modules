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

	catto->makeSound();
	doggo->makeSound();
	Mulain->makeSound();

	std::cout << doggo->getType() << std::endl;
	doggo->makeSound();

	delete(Mulain);
	delete(catto);
	delete(doggo);

	return (0);
}