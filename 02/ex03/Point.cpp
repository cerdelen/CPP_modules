#include "Point.hpp"

Point::Point( void ): x_(0), y_(0){
}

Point::Point(const float x, const float y): x_(Fixed(x)), y_(Fixed(y)){
}

Point::Point(const int x, const int y): x_(Fixed(x)), y_(Fixed(y)){
}

Point::Point(const Point& copy){
	*this = copy;
}

Point::~Point( void ){
}

Point&		Point::operator=(const Point& copy){
	Point	*out;

	out = new Point(copy);
	return (*out);
}

Fixed		Point::getX( void ) const{
	return (x_);
}

Fixed		Point::getY( void ) const{
	return (y_);
}