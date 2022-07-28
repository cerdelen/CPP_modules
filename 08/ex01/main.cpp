/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:06 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/29 00:29:12 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main(){
	Span	a(12);

	a.addNumber(3525);
	a.addNumber(541356);
	a.addNumber(345);
	a.addNumber(3);
	a.addNumber(641);
	a.addNumber(5422);
	a.addNumber(545);
	a.addNumber(5424);
	a.addNumber(54);
	a.addNumber(54344421);


	a.test_print();


	std::cout << std::endl;
	std::cout << std::endl;
	
	

	std::cout << "short span == " << a.shortestSpan() << std::endl;
	std::cout << "long span == " << a.longestSpan() << std::endl;

}
