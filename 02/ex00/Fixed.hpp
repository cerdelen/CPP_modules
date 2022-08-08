/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:14 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/08 14:49:51 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
	public:
		Fixed();								//default const
		Fixed(const Fixed& copy);				//copy const
		Fixed&	operator=(const Fixed& copy);	//A copy assignment operator overload
		~Fixed();								//destructor
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );


	private:
		int					val_;
		static const int	bits_ = 8;
};

#endif