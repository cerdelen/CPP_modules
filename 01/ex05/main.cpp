#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "Starting with a wrong level:" << std::endl << std::endl;
	harl.complain("Wrong Level");
	std::cout << std::endl <<  "Level 1:" << std::endl << std::endl;
	harl.complain("Debug");
	std::cout << std::endl <<  "Level 2:" << std::endl << std::endl;
	harl.complain("Info");
	std::cout << std::endl <<  "Level 3:" << std::endl << std::endl;
	harl.complain("Warning");
	std::cout << std::endl <<  "Level 4:" << std::endl << std::endl;
	harl.complain("Error");
}