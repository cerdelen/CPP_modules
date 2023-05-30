/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:35 by cerdelen          #+#    #+#             */
/*   Updated: 2023/05/30 20:26:50 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

void	calculate_triangle_area(const Point &one, const Point &two, const Point& three, Fixed &res)
{
	res = (((one.getX() - three.getX()) * (two.getY() - three.getY())) - ((two.getX() - three.getX()) * (one.getY() - three.getY()))) / Fixed(2);
	if (res < 0)
		res = res * Fixed(-1);
}

bool bsp( const Point &a, const Point &b, const Point& c, const Point& point)
{
	Fixed	fullarea;
	Fixed	firstarea;
	Fixed	secondarea;
	Fixed	thirdarea;

	calculate_triangle_area(a, b, c, fullarea);
	calculate_triangle_area(point, b, c, firstarea);
	calculate_triangle_area(a, point, c, secondarea);
	calculate_triangle_area(a, b, point, thirdarea);
	
	if ((firstarea + secondarea + thirdarea) > fullarea)
		return (false);
	return (true);
}