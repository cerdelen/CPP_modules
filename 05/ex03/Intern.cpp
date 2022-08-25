/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:34:25 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/24 19:28:23 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	
}

Intern::~Intern(){
	
}

AForm*	Intern::makeForm(std::string form, std::string target){
	const std::string f_tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int	j = 0;

	for (size_t i = 1; i < 3; i++)
	{
		if (form.compare(f_tab[i - 1]))
		// if (form == f_tab[i - 1])
		{
			j = i;
			break ;
		}
	}
	
	switch (j)
	{
	case 1:
		std::cout << "Intern creates " << form <<std::endl;
		return (new RobotomyRequestForm(target));
		break;
	
	case 2:
		std::cout << "Intern creates " << form <<std::endl;
		return (new PresidentialPardonForm(target));
		break;
	
	case 3:
		std::cout << "Intern creates " << form <<std::endl;
		return (new ShrubberyCreationForm(target));
		break;
	
	default:
		std::cout << "This Form does not exist!" <<std::endl;
		break;
	}
	return (NULL);
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern & Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}