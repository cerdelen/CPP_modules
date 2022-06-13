#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
// 	Cat		catto;
// 	Dog		doggo;
// 	Animal	Mulain;



// 	std::cout << doggo.getType() << std::endl;


// 	catto.makeSound();
// 	doggo.makeSound();
// }

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

	delete(Mulain);
	delete(catto);
	delete(doggo);

	return (0);
}