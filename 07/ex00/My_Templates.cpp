/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_Templates.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:08 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:03:09 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYTEMPLATES_H
#define MYTEMPLATES_H

template <typename T>
void	swap(T& a, T& b){
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T&		min(T& a, T& b){
	return (a < b ? a : b);
}

template <typename T>
T&		max(T& a, T& b){
	return (a > b ? a : b);
}

#endif