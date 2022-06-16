#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();

		Cat&	operator=(const Cat& copy);
		void	makeSound( void );
};




#endif