#include "converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong amount of arguments!" << std::endl;
		return (0);
	}
	converter x(argv[1]);
	x.getChar();
	// x.print_all();
}