#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Wrong amount of Arguments!" << std::endl;
		return (0);
	}
	harl.complain(argv[1]);
}