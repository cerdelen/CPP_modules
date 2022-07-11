/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:41 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:42 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool check_input(int argc, char **argv, std::ifstream &in_f, std::ofstream &out_f)
{
	std::string		out_f_name = argv[1];
	out_f_name.append(".replace");

	if (argc != 4)
	{
		std::cout << "Wrong amount of Arguments!" << std::endl;
		return false;
	}
	in_f.open(argv[1], std::fstream::in);
	if (!in_f.is_open())
	{
		std::cout << "File does not exist!" << std::endl;
		return false;
	}
	out_f.open(out_f_name, std::fstream::out);
	if (!out_f.is_open())
	{
		std::cout << ".replace file could not be created!" << std::endl;
		return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	std::ifstream	in_f;
	std::ofstream	out_f;
	std::string		line;

	if (check_input(argc, argv, in_f, out_f) == false)
		return (0);
	if (std::getline(in_f, line))
	{
		if (line == argv[2])
			out_f << argv[3];
		else
			out_f << line;
		while(std::getline(in_f, line))
		{
			out_f << std::endl;
			if (line == argv[2])
				out_f << argv[3];
			else
				out_f << line;
		}
	}
	in_f.close();
	out_f.close();
}