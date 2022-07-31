/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:00:38 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/31 11:11:26 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){
	
}

template <typename T>
MutantStack<T>::~MutantStack(){
	
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy){
	*this = copy;
}

template <typename T>
MutantStack<T>		&MutantStack<T>::operator=(const MutantStack &copy){
	return (copy);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin( void ){
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end( void ){
	return (std::stack<T>::c.end());
}
