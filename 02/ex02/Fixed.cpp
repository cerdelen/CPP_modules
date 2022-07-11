/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:27 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:59:28 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():	val_(0){
}

Fixed::Fixed(const int num){
	val_ = num << bits_;
}

Fixed::Fixed(const float num){
	val_ =  roundf(num * (1 << bits_));
}

Fixed::Fixed(const Fixed& copy){
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed& copy){
	val_ = copy.val_;
	return (*this);
}

Fixed::~Fixed(){
}

int				Fixed::getRawBits( void ) const{
	return (val_);
}

void			Fixed::setRawBits( int const raw ){
	val_ = raw;
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

bool			Fixed::operator>(const Fixed &num2) const{
	return (val_ > num2.val_);
}

bool			Fixed::operator<(const Fixed &num2) const{
	return (val_ < num2.val_);
}

bool			Fixed::operator>=(const Fixed &num2) const{
	return (val_ >= num2.val_);
}

bool			Fixed::operator<=(const Fixed &num2) const{
	return (val_ <= num2.val_);
}

bool			Fixed::operator==(const Fixed &num2) const{
	return (val_ == num2.val_);
}

bool			Fixed::operator!=(const Fixed &num2) const{
	return (val_ != num2.val_);
}

Fixed&			Fixed::min(Fixed& num1, Fixed& num2){
	if (num1 <= num2)
		return (num1);
	return (num2);
}

Fixed&			Fixed::max(Fixed& num1, Fixed& num2){
	if (num1 >= num2)
		return (num1);
	return (num2);
}

const Fixed&			Fixed::min(const Fixed& num1, const Fixed& num2){
	if (num1 <= num2)
		return (num1);
	return (num2);
}

const Fixed&			Fixed::max(const Fixed& num1, const Fixed& num2){
	if (num1 >= num2)
		return (num1);
	return (num2);
}

Fixed	Fixed::operator+(const Fixed &num2) const{
	Fixed	out;

	out.setRawBits(val_ + num2.val_);
	return (out);
}

Fixed	Fixed::operator-(const Fixed &num2) const{
	Fixed	out;

	out.setRawBits(val_ - num2.val_);
	return (out);
}

Fixed	Fixed::operator*(const Fixed &num2) const{
	Fixed	out;

	out.setRawBits(val_ * num2.val_ / (1 << num2.bits_));
	return (out);
}

Fixed	Fixed::operator/(const Fixed &num2) const{
	Fixed	out;

	if (num2 == 0)
	{
		std::cout << "Division by 0 not possible!" << std::endl;
		return (out);
	}
	out.setRawBits(val_ * (1 << num2.bits_) / num2.val_);
	return (out);
}


Fixed&		Fixed::operator++(void){
	val_ += 1;
	return (*this);
}

Fixed		Fixed::operator++(int){
	Fixed	out(*this);

	val_ +=1;
	return (out);
}

Fixed&		Fixed::operator--(void){
	val_ -= 1;
	return (*this);
}

Fixed		Fixed::operator--(int){
	Fixed	out(*this);

	val_ -=1;
	return (out);
}

