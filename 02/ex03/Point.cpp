#include "Point.hpp"

Point::Point( void ): x_(0), y_(0){
}

Point::Point(const float x, const float y): x_(Fixed(x)), y_(Fixed(y)){
}

Point::Point(const Point& copy){
	*this = copy;
}

Point::~Point( void ){
}

Point&		Point::operator=(const Point& copy){
	Point	out(copy);

	return (out);
}



Fixed&	Fixed::operator=(const Fixed& copy){
	val_ = copy.val_;
	return (*this);
}