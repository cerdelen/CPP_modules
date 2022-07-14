#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>

template <typename T>
typename T::iterator easyfind(T& cont, int i){
	typename T::iterator it;
	it = std::find(cont.begin(), cont.end(), i);
	if (it == cont.end())
		throw std::invalid_argument("Easyfind: Element not in Data_struct");
	return it;
}

#endif