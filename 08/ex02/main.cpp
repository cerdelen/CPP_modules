/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:06 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/25 13:32:51 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <deque>
#include <stack>
#include <list>

int main(void)
{
	size_t	max_size;
	{
		max_size = 10;
		std::stack<int>		rstack;
		MutantStack<int>	mstack;

		for (size_t i = max_size; i > 0; i--)
		{
			mstack.push(i - 1);
			rstack.push(i - 1);
		}

		std::cout << "mstack top = " << mstack.top() << std::endl;
		std::cout << "rstack top = " << rstack.top() << std::endl;

		MutantStack<int>::iterator	it_s = mstack.begin();
		MutantStack<int>::iterator	it_e = mstack.end();
		MutantStack<int>::iterator	it_s2 = mstack.begin() - 1;

		std::cout << std::endl << "Testing iterator forward" << std::endl;
		
		while(it_s != it_e)
		{
			std::cout << *it_s << std::endl;
			it_s++;
		}

		std::cout << std::endl << "Testing iterator backwards" << std::endl;
		
		it_e--;
		
		while(it_e != it_s2)
		{
			std::cout << *it_e << std::endl;
			it_e--;
		}
		
		std::cout << std::endl << "Testing [] with iterator" << std::endl;
		
		std::cout << it_s2[4] << std::endl;
	}







	
}