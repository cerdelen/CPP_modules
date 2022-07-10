#include "Array.hpp"

template <typename T>
Array<T>::Array(unsigned int n){
	elements_ = new T[n];
	size_ = n;
}

template <typename T>
Array<T>::Array(): size_(0), elements_(NULL){
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy){
	if (elements_)
		delete[] elements_;
	size_ = copy.size_;
	elements_ = new T[size_];
	for (int i = 0; i < size_; i++)
		elements_[i] = copy.elements_[i];
	return (this);
}

template <typename T>
Array<T>::Array(const Array<T>& copy){
	*this = copy;
}

template <typename T>
Array<T>::~Array(){
	if (size_ > 0)
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