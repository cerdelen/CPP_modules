/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:16 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/27 12:04:54 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;


	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	
	Fixed d;
	
	d.setRawBits(INT_MAX);
	std::cout << d.getRawBits() << std::endl;
	d.setRawBits(INT_MIN);
	std::cout << d.getRawBits() << std::endl;
	
	
	return 0;
}