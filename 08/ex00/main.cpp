/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:06 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/25 12:22:47 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(){
	{
		try
		{
			std::vector<int> 				arr(10);
			std::vector<int>::iterator		iter;

			for (size_t i = 0; i < 10; i++)
				arr[i] = i;
			
		
			iter = easyfind(arr, 4);
			std::cout << *iter << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::vector<int> 				arr(10);
			std::vector<int>::iterator		iter;

			for (size_t i = 0; i < 10; i++)
				arr[i] = i;
			
		
			iter = easyfind(arr, -1);
			std::cout << *iter << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::vector<int> 				arr(10);
			std::vector<int>::iterator		iter;

			for (size_t i = 0; i < 10; i++)
				arr[i] = i;
			
		
			iter = easyfind(arr, 19);
			std::cout << *iter << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
