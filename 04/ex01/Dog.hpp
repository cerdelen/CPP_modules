#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();

		Dog&	operator=(const Dog& copy);
		void	makeSound( void );
};

#endif