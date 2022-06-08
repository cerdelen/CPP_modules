#ifndef		POINT_H
#define		POINT_H
#include "Fixed.hpp"

class Point
{
private:
	const Fixed x_;
	const Fixed y_;
public:
	Point();
	Point(const int x, const int y);
	Point(const float x, const float y);
	Point(const Point& copy);
	~Point();

	Fixed		getX() const;
	Fixed		getY() const;
	Point&		operator=(const Point& copy);
};

#endif