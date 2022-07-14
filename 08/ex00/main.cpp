/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:06 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/14 17:16:13 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(){
	
	std::vector<int> 	arr(10);
	std::vector<int>::iterator iter;


	for(int i = 0; i < 10; i++)
		arr[i] = i + 1;
		

	iter = easyfind(arr, 19);
	std::cout << *iter << std::endl;
}
