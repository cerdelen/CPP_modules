/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:57:34 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/29 23:19:03 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK
#define MUTANT_STACK

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void ) :std::stack<T>() {};
		MutantStack(const MutantStack &copy);
		virtual ~MutantStack();
		
		MutantStack		&operator=(const MutantStack &copy);
		
};

template <typename T>
MutantStack<T>::MutantStack(){
	
}

template <typename T>
MutantStack<T>::~MutantStack(){
	
}

#endif