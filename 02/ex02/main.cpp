/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:31 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:59:32 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a " << a << std::endl;

	std::cout << "b " << b << std::endl;

	std::cout << "a * b " << a * b << std::endl;
	std::cout << "a + b " << a + b << std::endl;
	std::cout << "a - b " << a - b << std::endl;
	std::cout << "a / b " << a / b << std::endl;

	std::cout <<"max(a, b) " << Fixed::max(a, b) << std::endl;

	return (0);
}