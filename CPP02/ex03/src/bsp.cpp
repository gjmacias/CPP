#include "Point.hpp"

#include <iostream>

namespace 
{
	bool	side (const Point p, const Point p1, const Point p2, const Point ref)
	{
		Fixed	a = (p2.getY() - p1.getY()) * (p.getX() - p1.getX())
			+ ((p2.getX() * -1) + p1.getX()) * (p.getY() - p1.getY());
		Fixed	b = (p2.getY() - p1.getY()) * (ref.getX() - p1.getX())
			+ ((p2.getX() * -1) + p1.getX()) * (ref.getY() - p1.getY());
		
		if ((a > 0 && b > 0) || (a < 0 && b < 0))
			return (true);
		return (false);
	}
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	bool side1, side2, side3; 

	side1 = side(point, a, b, c);
	side2 = side(point, b, c, a);
	side3 = side(point, c, a, b);

	return (side1 && side2 && side3);
}
