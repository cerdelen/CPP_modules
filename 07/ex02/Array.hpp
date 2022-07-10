#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T*			elements_;
		size_t		size_;

	public:
		Array( void );
		Array(unsigned int n);
		~Array( void );
		Array(const Array<T>& copy);
		Array & operator=(const Array<T>& copy);

		size_t		size( void ) const ;

		T&		operator[](size_t elem);


		// void printtest(int n);
};

#include "Array.cpp"

#endif