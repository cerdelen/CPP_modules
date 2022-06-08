#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(2.5f);

	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	a = a + c;
	std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	std::cout << a <<  " * " << c << " = " << a * c << std::endl;
	std::cout << b <<  " / " << c << " = " << b / c << std::endl;
	std::cout << b <<  " / " << 0 << " = " << b / 0 << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}