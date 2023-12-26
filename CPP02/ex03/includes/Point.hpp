#ifndef EX03_POINT_HPP_
# define EX03_POINT_HPP_

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		Point(const Point& other);
		~Point();

		Fixed getX() const;
		Fixed getY() const;
	private:
		Point& operator=(const Point& other); // Don't implement

		const Fixed x;
		const Fixed y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
