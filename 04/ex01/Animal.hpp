#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();

		Animal&			operator=(const Animal& copy);
		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif