/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:12 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:02:13 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string	ideas_[100];
	public:
		Brain();
		Brain(const Brain& copy);
		~Brain();

		Brain&			operator=(const Brain& copy);
		std::string		getIdea(int i);
		void			setIdea(int i, std::string idea);
};

#endif