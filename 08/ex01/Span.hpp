#ifndef SPAN_H
#define SPAN_H

#include <iostream>

class Span
{
	private:
		int	*arr;
	public:
		Span();
		Span(size_t n);
		~Span();
		Span(const Span& copy);
		Span & operator=(const Span& copy);

		void	addNumber();
		int		longestSpan();
		int		shortestSpan();
};

#endif