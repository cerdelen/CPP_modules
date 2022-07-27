/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:34:27 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/27 22:39:26 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_BASE_H
#define CLASS_BASE_H
#include <iostream>
// #include <cstdlib>

class Base
{
public:
	virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif