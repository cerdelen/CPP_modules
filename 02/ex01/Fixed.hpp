/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:20 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/08 14:52:37 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();								//default const
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed& copy);				//copy const
		~Fixed();								//destructor


		Fixed&			operator=(const Fixed& copy);	//A copy assignment operator overload
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		int				toInt( void ) const;
		float			toFloat( void ) const;

	private:
		int					val_;
		static const int	bits_ = 8;
};

std::ostream&	operator<<(std::ostream &os, const Fixed &nbr);

#endif