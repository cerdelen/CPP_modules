/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:21 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/24 22:03:52 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{	

	try
	{
		Array<int> A = Array<int>(7);
		Array<int> B;
		A[1] = 2;
		for(int i = 0; i < 7; i++)
			A[i] = i + 1;
		std::cout << "size = " <<  A.size() << std::endl;
		for(int i = 0; i < 200; i++)
			std::cout << "i = " << i << " value = " << A[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Array<char> A = Array<char>(15);
		Array<char> B;
		A[1] = 2;
		for(int i = 0; i < 15; i++)
			A[i] = 'a' + i;
		std::cout << "size = " <<  A.size() << std::endl;
		for(int i = 0; i < 200; i++)
			std::cout << "i = " << i << " value = " << A[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}