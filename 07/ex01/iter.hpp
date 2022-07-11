/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:11 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:03:12 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

template <typename T>
void	iter(T* arr, int n, void (*func)(T &elem)){
	for (int i = 0; i < n; i++)
		(*func)(arr[i]);
}

#endif