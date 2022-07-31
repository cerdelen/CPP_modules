/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:57:34 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/31 11:03:05 by cerdelen         ###   ########.fr       */
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
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		
	iterator	begin( void );
	iterator	end( void );
};



#endif