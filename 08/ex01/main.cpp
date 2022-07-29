/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:06 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/29 17:06:52 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main(){
	size_t	MAX_SIZE;
	try
	{
		MAX_SIZE = 5;
		Span				span_1(MAX_SIZE);
		std::vector<int>	v_1;

		v_1.reserve(MAX_SIZE);
		srand(time(NULL));
		for (size_t i = 0; i < MAX_SIZE + 1; i++)
		{
			v_1.push_back(rand());
		}
		span_1.addRange(v_1.begin(), v_1.end());
		std::cout << "short span == " << span_1.shortestSpan() << std::endl;
		std::cout << "long span == " << span_1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		MAX_SIZE = 1;
		Span				span_2(MAX_SIZE);
		std::vector<int>	v_2;

		v_2.reserve(MAX_SIZE);
		srand(time(NULL));
		for (size_t i = 0; i < MAX_SIZE; i++)
		{
			v_2.push_back(rand());
		}
		span_2.addRange(v_2.begin(), v_2.end());
		std::cout << "short span == " << span_2.shortestSpan() << std::endl;
		std::cout << "long span == " << span_2.longestSpan() << std::endl;
	}
	catch(const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		MAX_SIZE = 25000;
		Span				span_3(MAX_SIZE);
		std::vector<int>	v_3;

		v_3.reserve(MAX_SIZE);
		srand(time(NULL));
		for (size_t i = 0; i < MAX_SIZE; i++)
		{
			v_3.push_back(rand());
		}
		span_3.addRange(v_3.begin(), v_3.end());
		std::cout << "short span == " << span_3.shortestSpan() << std::endl;
		std::cout << "long span == " << span_3.longestSpan() << std::endl;
	}
	catch(const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
}
