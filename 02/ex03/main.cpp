/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:42 by cerdelen          #+#    #+#             */
/*   Updated: 2023/05/30 20:34:55 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( const Point &a, const Point &b, const Point& c, const Point& point );

void	test_bsp(const Point &a, const Point &b, const Point& c, const Point& point, bool expected )
{
	static size_t	i = 0;
	if (bsp(a, b, c, point) != expected)
		std::cout << "test case nr: " << i << " failed" << std::endl;
	else
		std::cout << "test case nr: " << i << " passed" << std::endl;
	i++;
}

int main(void)
{
	test_bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(5, 5), true);
	test_bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(6, 5), false);
	test_bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(5.1f, 5.0f), false);
	test_bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(4.9f, 5.0f), true);
	test_bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(4, 5), true);
	test_bsp(Point(-1, 0), Point(10, 0), Point(0, 10), Point(4, 5), true);
	test_bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(-4, 5), false);
	test_bsp(Point(0.0f, 0.0f), Point(0.01f, 0.0f), Point(0.0f, 0.01f), Point(0.0001f, 0.0001f), true);
}