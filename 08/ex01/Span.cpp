#include "Span.hpp"

Span::Span(): _capacity(0), long_s(0), short_s(INT_MAX){
}

Span::Span(size_t n): long_s(0), short_s(INT_MAX){
	try
	{
		if (_values.max_size() < n)
			throw Span::NoMemory();
		_capacity = n;
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << std::endl;
	}
	
}

Span::~Span(){
	_values.clear();
}

Span::Span(const Span& copy){
	*this = copy;
}

Span& Span::operator=(const Span& copy){
	if (_values.empty() == false)
		_values.clear();
	_capacity = copy._capacity;
	long_s = copy.long_s;
	short_s = copy.short_s;
	for(size_t i = 0; i < _capacity; i++){
		_values.push_back(copy._values[i]);
	}
	return (*this);
}

void	Span::addNumber(int	nr){
	try
	{
		size_t	size = _values.size();
		if (size >= _capacity)
			throw Span::TooManyValues();
		if (size == 0)
		{
			_values.push_back(nr);
			return ;
		}
		if (size == 1)
		{
			if (nr > _values[0])
				_values.push_back(nr);
			else
			{
				std::vector<int>::iterator	it;
				it = _values.begin();
				_values.insert(it, nr);
			}
			// long_s = _values[1] - _values[0]; 
			// short_s = _values[1] - _values[0]; 
			return ;
		}
		std::vector<int>::iterator	it;
		for (it = _values.begin(); it != _values.end(); it++)
		{
			// *(it + 1)
			
			if (it + 1 == _values.end())
			{
				_values.push_back(nr);
				// if ((_values.back() - _values.front()) > long_s)
				// 	long_s = _values.back() - _values.front();
				
				// if ((_values.back() - *it) < short_s)
				// 	short_s = _values.back() - *it; 
				return ;
			}


			if (nr > *it && nr < *(it + 1))
			{
				_values.insert(it + 1, nr);
				// if ((_values.back() - _values.front()) > long_s)
				// 	long_s = _values.back() - _values.front();
				// if ((*it - *(it - 1)) < short_s)
				// 	short_s = (*it - *(it - 1)); 
				return ;
			}


			// if (nr > _values[i] && nr < _values[i + 1])
			// 	_values.insert()
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

int		Span::longestSpan(){
	try
	{
		if (_values.size() < 2)
			throw Span::NotEnoughValues();
		return	(long_s);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int		Span::shortestSpan(){
	try
	{
		if (_values.size() < 2)
			throw Span::NotEnoughValues();
		return	(short_s);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char *Span::NoMemory::what() const throw(){
	return ("Not enough memory");
}

const char *Span::TooManyValues::what() const throw(){
	return ("Trying to push more values than max size");
}

const char *Span::NotEnoughValues::what() const throw(){
	return ("Span has less than 2 values");
}




void	Span::test_print(){
	std::vector<int>::iterator	it;
	
	std::cout << "size is " << _values.size() << std::endl;
	for (it = _values.begin(); it != _values.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	// std::cout << "this is values back and then values front " << _values.back() << " " << _values.front() << " " << (_values.back() - _values.front()) << std::endl;

}