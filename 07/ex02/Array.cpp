/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:17 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:03:18 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(unsigned int n){
	elements_ = new T[n];
	size_ = n;
}

template <typename T>
Array<T>::Array(): size_(0), elements_(nullptr){
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy){
	if (this->elements_)
	{
		delete[] elements_;
		elements_ = nullptr;
	}
	size_ = copy.size_;
	elements_ = new T[size_];
	for (int i = 0; i < size_; i++)
		elements_[i] = copy.elements_[i];
	return (*this);
}

template <typename T>
Array<T>::Array(const Array<T>& copy):size_(0), elements_(nullptr){
	*this = copy;
}

template <typename T>
Array<T>::~Array(){
	if (size_ > 0 && elements_)
		delete (elements_);
}

template  <typename T>
size_t		Array<T>::size( void ) const {
	return (size_);
}

template  <typename T>
T&		Array<T>::operator[](size_t n){
	if (n > size_)
		throw std::out_of_range( "Index out of Range" );
	return	(elements_[n]);
}




// template <typename T>
// void Array<T>::printtest(int n){
// 	std::cout << elements_[n] << std::endl;
// }