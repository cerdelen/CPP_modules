#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& copy);
		~Animal();

		Animal&			operator=(const Animal& copy);
		std::string		getType( void ) const;
		void			makeSound( void ) const;
};

#endif