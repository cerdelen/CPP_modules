/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:06 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/25 12:44:05 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main(){
	size_t	MAX_SIZE_SPAN;
	size_t	MAX_SIZE_VEC;
	{
		std::cout << "-----------------------------" << std::endl << "Start Test (trying span with too little numbers)" << std::endl << std::endl;
		try
		{
			MAX_SIZE_SPAN = 1;
			Span				span(MAX_SIZE_SPAN);

			srand(time(NULL));
			for (size_t i = 0; i < MAX_SIZE_SPAN; i++)
			{
				span.addNumber(rand());
			}
			std::cout << "short span == " << span.shortestSpan() << std::endl;
			std::cout << "long span == " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Finish Test" << std::endl << std::endl;
	}
	{
		std::cout << "-----------------------------" << std::endl << "Start Test with Adding single Numbers" << std::endl << std::endl;
		try
		{
			MAX_SIZE_SPAN = 5;
			Span				span(MAX_SIZE_SPAN);

			srand(time(NULL));
			for (size_t i = 0; i < MAX_SIZE_SPAN; i++)
			{
				span.addNumber(rand());
			}
			std::cout << "short span == " << span.shortestSpan() << std::endl;
			std::cout << "long span == " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Finish Test" << std::endl << std::endl;
	}
	{
		std::cout << "-----------------------------" << std::endl << "Start Test with Adding single Numbers (too many)" << std::endl << std::endl;
		try
		{
			MAX_SIZE_SPAN = 5;
			Span				span(MAX_SIZE_SPAN);

			srand(time(NULL));
			for (size_t i = 0; i < MAX_SIZE_SPAN + 1; i++)
			{
				span.addNumber(rand());
			}
			std::cout << "short span == " << span.shortestSpan() << std::endl;
			std::cout << "long span == " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Finish Test" << std::endl << std::endl;
	}
	{
		std::cout << "-----------------------------" << std::endl << "Start Test with adding a range" << std::endl << std::endl;
		try
		{
			MAX_SIZE_SPAN = 5;
			MAX_SIZE_VEC = 5;
			Span				span(MAX_SIZE_SPAN);
			std::vector<int>	v;

			v.reserve(MAX_SIZE_VEC);
			srand(time(NULL));
			for (size_t i = 0; i < MAX_SIZE_VEC; i++)
			{
				v.push_back(rand());
			}
			span.addRange(v.begin(), v.end());
			std::cout << "short span == " << span.shortestSpan() << std::endl;
			std::cout << "long span == " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Finish Test" << std::endl << std::endl;
	}
	{
		std::cout << "-----------------------------" << std::endl << "Start Test with adding a range (too many)" << std::endl << std::endl;
		try
		{
			MAX_SIZE_SPAN = 5;
			MAX_SIZE_VEC = 6;
			Span				span(MAX_SIZE_SPAN);
			std::vector<int>	v;

			v.reserve(MAX_SIZE_VEC);
			srand(time(NULL));
			for (size_t i = 0; i < MAX_SIZE_VEC; i++)
			{
				v.push_back(rand());
			}
			span.addRange(v.begin(), v.end());
			std::cout << "short span == " << span.shortestSpan() << std::endl;
			std::cout << "long span == " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Finish Test" << std::endl  << std::endl;
	}
	{
		std::cout << "-----------------------------" << std::endl << "Start Test 20000 Numbers" << std::endl << std::endl;
		try
		{
			MAX_SIZE_SPAN = 20000;
			MAX_SIZE_VEC = 20000;
			Span				span(MAX_SIZE_SPAN);
			std::vector<int>	v;

			v.reserve(MAX_SIZE_VEC);
			srand(time(NULL));
			for (size_t i = 0; i < MAX_SIZE_VEC; i++)
			{
				v.push_back(rand());
			}
			span.addRange(v.begin(), v.end());
			std::cout << "short span == " << span.shortestSpan() << std::endl;
			std::cout << "long span == " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Finish Test" << std::endl  << std::endl;
	}
	{
		std::cout << "-----------------------------" << std::endl << "Start Test (not enough memory)" << std::endl << std::endl;
		try
		{
			MAX_SIZE_SPAN = -1;
			MAX_SIZE_VEC = 6;
			Span				span(MAX_SIZE_SPAN);
			std::vector<int>	v;

			v.reserve(MAX_SIZE_VEC);
			srand(time(NULL));
			for (size_t i = 0; i < MAX_SIZE_VEC; i++)
			{
				v.push_back(rand());
			}
			span.addRange(v.begin(), v.end());
			std::cout << "short span == " << span.shortestSpan() << std::endl;
			std::cout << "long span == " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Finish Test" << std::endl  << std::endl;
	}
}
