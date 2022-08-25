/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:57:34 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/25 13:00:52 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK
#define MUTANT_STACK

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void );
		MutantStack(const MutantStack &copy);
		virtual ~MutantStack();
		
		MutantStack		&operator=(const MutantStack &copy);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		
	iterator	begin( void );
	iterator	end( void );
};

#include "MutantStack.tpp"

#endif










