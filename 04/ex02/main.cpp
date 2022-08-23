/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:22 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/23 23:45:27 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main()
{
	AAnimal	*arr[4];

	for(int i = 0; i < 2; i++){
		arr[i] = new Dog();
	}
	for(int i = 2; i < 4; i++){
		arr[i] = new Cat();
	}

	((Dog *)arr[0])->setIdea(0, "This is a great Idea!");
	std::cout << std::endl << std:: endl << ((Dog *)arr[0])->getIdea(0) << std::endl << std::endl;

	std::cout << std::endl << std:: endl << "this is the brain of copybefore :  " << ((Dog *)arr[1])->getIdea(0) << std::endl << std::endl;
	*(Dog *)arr[1] = *(Dog *)arr[0];
	
	std::cout << std::endl << std:: endl << "this is the brain of copy:  " << ((Dog *)arr[1])->getIdea(0) << std::endl << std::endl;

	for(int i = 0; i < 4; i++){
		delete (arr[i]);
	}
	return (0);
}