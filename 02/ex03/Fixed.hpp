/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:40 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:59:41 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					val_;
		static const int	bits_ = 8;

	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed& copy);
		~Fixed();


		Fixed&			operator=(const Fixed& copy);
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		int				toInt( void ) const;
		float			toFloat( void ) const;

//		comparison operators
		bool	operator>(const Fixed &num2) const;
		bool	operator<(const Fixed &num2) const;
		bool	operator>=(const Fixed &num2) const;
		bool	operator<=(const Fixed &num2) const;
		bool	operator==(const Fixed &num2) const;
		bool	operator!=(const Fixed &num2) const;

//		arithmetic operators
		Fixed	operator+(const Fixed &num2) const;
		Fixed	operator-(const Fixed &num2) const;
		Fixed	operator*(const Fixed &num2) const;
		Fixed	operator/(const Fixed &num2) const;

//		min/max functions
		static Fixed&				min(Fixed& num1, Fixed& num2);
		static Fixed&				max(Fixed& num1, Fixed& num2);
		static const Fixed&			min(const Fixed& num1, const Fixed& num2);
		static const Fixed&			max(const Fixed& num1, const Fixed& num2);

//		increment/decrement functions
		Fixed		operator++(int);
		Fixed&		operator++(void);
		Fixed		operator--(int);
		Fixed&		operator--(void);
};

std::ostream&	operator<<(std::ostream &os, const Fixed &nbr);

#endif