#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <exception>

class Span
{
	public:
		Span();
		Span(size_t n);
		~Span();
		Span(const Span& copy);
		Span & operator=(const Span& copy);

		void	addNumber(int);
		void	addRange(std::vector<int>::iterator, std::vector<int>::iterator);
		int		longestSpan();
		int		shortestSpan();


		// void	test_print();
		class	NoMemory : public std::exception{
			public:
				virtual const char *what( void ) const throw();
		};
		class	TooManyValues : public std::exception{
			public:
				virtual const char *what( void ) const throw();
		};
		class	NotEnoughValues : public std::exception{
			public:
				virtual const char *what( void ) const throw();
		};

	private:
		std::vector<int>	_values;
		size_t				_capacity;
		size_t				long_s;
		size_t				short_s;

};

#endif