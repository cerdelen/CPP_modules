#include "Span.hpp"

Span::Span(): _capacity(0), long_s(0), short_s(INT_MAX){
}

Span::Span(size_t n): long_s(0), short_s(INT_MAX){
	try
	{
		if (_values.max_size() < n)
			throw Span::NoMemory();
		_capacity = n;
		_values.clear();
	}
	catch(const Span::NoMemory& error)
	{
		std::cerr << error.what() << std::endl;
		exit(0);
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
		long_s = (size_t)(_values[1] - _values[0]); 
		short_s = (size_t)(_values[1] - _values[0]); 
		return ;
	}
	std::vector<int>::iterator	it;
	for (it = _values.begin(); it != _values.end(); it++)
	{
		if (nr < _values[0])
		{
			_values.insert(it, nr);
			if ((size_t)(_values.back() - _values.front()) > long_s)
				long_s = _values.back() - _values.front();

			if ((size_t)(_values[1] - _values[0]) < short_s)
				short_s = _values[1] - _values[0]; 
			return ;
		}
		if (it + 1 == _values.end())
		{
			_values.push_back(nr);
			if ((size_t)(_values.back() - _values.front()) > long_s)
				long_s = _values.back() - _values.front();
			if ((size_t)(_values.back() - *it) < short_s)
				short_s = _values.back() - *it; 
			return ;
		}
		if (nr > *it && nr < *(it + 1))
		{
			if ((size_t)(nr - *it) < short_s)
				short_s = nr - *it;
			else if ((size_t)(*(it + 1) - nr) < short_s)
				short_s = *(it + 1) - nr;
			_values.insert(it + 1, nr);
			return ;
		}
	}
}

int		Span::longestSpan(){
	if (_values.size() < 2)
		throw Span::NotEnoughValues();
	return	(long_s);
}

int		Span::shortestSpan(){
	if (_values.size() < 2)
		throw Span::NotEnoughValues();
	return	(short_s);
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	while (begin != end)
	{
		std::cout << "herelol" << std::endl;

		addNumber(*begin);
		begin++;
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




// void	Span::test_print(){
// 	std::vector<int>::iterator	it;
	
// 	std::cout << "size is " << _values.size() << std::endl;
// 	for (it = _values.begin(); it != _values.end(); it++)
// 	{
// 		std::cout << *it << std::endl;
// 	}
// 	// std::cout << "this is values back and then values front " << _values.back() << " " << _values.front() << " " << (_values.back() - _values.front()) << std::endl;

// }