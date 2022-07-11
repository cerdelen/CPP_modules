/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:22 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:02:23 by cerdelen         ###   ########.fr       */
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

	arr[0]->setIdea(0, "This is a great Idea!");
	std::cout << std::endl << std:: endl << arr[0]->getIdea(0) << std::endl << std::endl;


	for(int i = 0; i < 4; i++){
		delete (arr[i]);
	}
	return (0);
}