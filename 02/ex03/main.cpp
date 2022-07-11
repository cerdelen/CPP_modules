/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:42 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:59:43 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( const Point &a, const Point &b, const Point& c, const Point& point);

int main(void)
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point p(1, 1);

	if (bsp(a, b, c, p) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}