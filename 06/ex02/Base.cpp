#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <exception>

Base::~Base(){};

Base*	generate(void){
	srand(time(NULL));
	int	i = rand() % 3;
	switch(i)
	{
		case 1 :
			return (new ClassA);
		case 2 : 
			return (new ClassB);
		default : 
			return (new ClassC);
	}
}

void	identify(Base* p){
	if (dynamic_cast<ClassA *>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<ClassB *>(p))
		std::cout << "Class B" << std::endl;
	else
		std::cout << "Class C" << std::endl;
}

void	identify(Base& p){
	try
	{
		(void) dynamic_cast<ClassA &>(p);
		std::cout << "Class A" << std::endl;
		return ;
	}
	catch(std::bad_cast & error){
	}
	try
	{
		(void) dynamic_cast<ClassB &>(p);
		std::cout << "Class B" << std::endl;
		return ;
	}
	catch(std::bad_cast & error){
	}
		std::cout << "Class C" << std::endl;
}
