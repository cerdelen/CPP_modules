#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(0, 0);
	Point b(0, 1);
	Point c(1, 0);
	Point p(0.5f, 0.5f);

	std::cout << bsp(a, b, c, p) << std::endl;
}