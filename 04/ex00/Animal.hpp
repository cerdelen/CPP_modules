#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
		std::string	type_;
		std::string	sound_;
	public:
		Animal();
		Animal(std::string type);
		Animal(std::string type, std::string sound);
		~Animal();

		void	makeSound( void );
};



#endif