#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*arr[4];

	for(int i = 0; i < 2; i++){
		arr[i] = new Dog();
	}
	for(int i = 2; i < 4; i++){
		arr[i] = new Cat();
	}

	((Dog *)arr[0])->setIdea(0, "This is a great Idea!");
	std::cout << std::endl << std:: endl << ((Dog *)arr[0])->getIdea(0) << std::endl << std::endl;


	for(int i = 0; i < 4; i++){
		delete (arr[i]);
	}
	return (0);
}