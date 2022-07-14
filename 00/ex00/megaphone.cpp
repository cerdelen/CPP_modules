/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:06 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/14 21:40:23 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	modify(char c)
{
	if (c > 96 && c < 123)
		c = c - 32;
	return c;
}

int		main(int argc, char **argv)
{
	if (argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int j = 1; j < argc; j++)
	{
		for (int i = 0; argv[j][i] != '\0'; i++)
			std::cout << modify(argv[j][i]);
		std::cout << " ";
	}
	std::cout << std::endl;
}