/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:14 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/24 21:45:20 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	print_char(char &c)
{
	std::cout << c << std::endl;
}

void	print_int(int &i)
{
	std::cout << i << std::endl;
}

void	print_string(std::string & str)
{
	std::cout << str << std::endl;
}

int main(){
	{
		std::cout << "Start test for chars!" << std::endl;
		char		arr[5] = {'a', 'b', 'c', 'd', 'e'};

		iter(arr, 5, &print_char);
		std::cout << std::endl << "End test!" << std::endl << "----------------------" << std::endl << std::endl;
	}
	{
		std::cout << "Start test for ints!" << std::endl;
		int		arr[5] = {0, 1, 2, 3, 4};

		iter(arr, 5, &print_int);
		std::cout << std::endl << "End test!" << std::endl << "----------------------" << std::endl << std::endl;
	}
	{
		std::cout << "Start test for strings!" << std::endl;
		std::string		arr[3] = {"one", "two", "three"};

		iter(arr, 3, &print_string);
		std::cout << std::endl << "End test!" << std::endl << "----------------------" << std::endl << std::endl;
	}
}
