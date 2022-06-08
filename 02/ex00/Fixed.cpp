#include "Fixed.hpp"

Fixed::Fixed(){
	val_ = 0;
	std::cout << "Default constructor called!" << std::endl;
}


Fixed::Fixed(const Fixed& copy){
	*this = copy;
	std::cout << "Copy constructor called!" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& copy){
	val_ = copy.val_;
	std::cout << "Copy assignment operator called!" << std::endl;
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Deconstructor called!" << std::endl;
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits called!" << std::endl;
	return (val_);
}

void	Fixed::setRawBits( int const raw ){
	val_ = raw;
	std::cout << "setRawBits called!" << std::endl;
}