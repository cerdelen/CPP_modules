/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:18 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/08 14:54:31 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():	val_(0){
	std::cout << "Default constructor called!" << std::endl;
}

Fixed::Fixed(const int num){
	val_ = num << bits_;
	std::cout << "Int constructor called!" << std::endl;
}

Fixed::Fixed(const float num){
	val_ =  roundf(num * (1 << bits_));
	std::cout << "Float constructor called!" << std::endl;
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

int				Fixed::getRawBits( void ) const{
	std::cout << "getRawBits called!" << std::endl;
	return (val_);
}

void			Fixed::setRawBits( int const raw ){
	val_ = raw;
	std::cout << "setRawBits called!" << std::endl;
}

int				Fixed::toInt( void ) const{
	return (val_ >> bits_);
}

float			Fixed::toFloat( void ) const{
	return ((float)(val_) / (float)(1 << bits_));
}

std::ostream&	operator<<(std::ostream &os, Fixed const &nbr){
	os << nbr.toFloat();
	return (os);
}
