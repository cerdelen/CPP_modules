#include "Bureaucrat.hpp"

void	print_start( int i){
	std::cout << "--------------------------------------------" << std::endl << "Test case nr: " << i << "!" << std::endl;
}

void	try_and_catch(void (*func)(Bureaucrat& bur), int i, Bureaucrat & bur){
	print_start(i);
	try{
		func(bur);
		std::cout << "No Error in this Test!" << std::endl;
	}
	catch(std::exception& err){
		std::cout << "Exepction caught: " << err.what() << std::endl;
	}
}

void	incremet(Bureaucrat& bur){
	std::cout << bur << std::endl << "Wants to increment in Grade!" << std::endl << std::endl;
	bur.incrementGrade();
}

void	decrement(Bureaucrat& bur){
	std::cout << bur << std::endl << "Wants to decrement in Grade!" << std::endl << std::endl;
	bur.decrementGrade();
}

int main(){
	int	i = 0;

	Bureaucrat	GySchomé("GySchomé", 150);
	Bureaucrat	GShawn("G-Shawn", 1);

	try_and_catch(incremet, i++, GySchomé);
	try_and_catch(decrement, i++, GySchomé);
	try_and_catch(decrement, i++, GySchomé);

	try_and_catch(decrement, i++, GShawn);
	try_and_catch(incremet, i++, GShawn);
	try_and_catch(incremet, i++, GShawn);

	std::cout <<  "--------------------------------------------" << std::endl << "End of the tests!" << 
		std::endl << "--------------------------------------------" << std::endl;
}
