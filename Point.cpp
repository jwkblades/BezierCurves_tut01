#include "Point.h"


Point::Point(void){
	x = y = 0;
}
Point::Point(double nx, double ny){
	x = nx;
	y = ny;
}
Point::Point(const Point& src){
	(*this) = src;
}
Point::~Point(void){
}

Point& Point::operator=(const Point& src){
	x = src.x;
	y = src.y;
}
Point Point::operator*(const Point& alt){
	Point p(x * alt.x, y * alt.y);
	return p;
}
Point Point::operator/(const Point& alt){
	Point p(x / alt.x, y / alt.y);
	return p;
}
Point Point::operator-(const Point& alt){
	Point p(x - alt.x, y - alt.y);
	return p;
}
Point Point::operator+(const Point& alt){
	Point p(x + alt.x, y + alt.y);
	return p;
}
Point Point::operator*(double num){
	Point p(x * num, y * num);
	return p;
}
Point Point::operator/(double num){
	Point p(x / num, y / num);
	return p;
}
Point Point::operator-(double num){
	Point p(x - num, y - num);
	return p;
}
Point Point::operator+(double num){
	Point p(x + num, y + num);
	return p;
}
Point Point::operator*=(const Point& alt){
	x *= alt.x;
	y *= alt.y;
	return *this;
}
Point Point::operator/=(const Point& alt){
	x /= alt.x;
	y /= alt.y;
	return *this;
}
Point Point::operator-=(const Point& alt){
	x -= alt.x;
	y -= alt.y;
	return *this;
}
Point Point::operator+=(const Point& alt){
	x += alt.x;
	y += alt.y;
	return *this;
}
Point Point::operator*=(double num){
	x *= num;
	y *= num;
	return *this;
}
Point Point::operator/=(double num){
	x /= num;
	y /= num;
	return *this;
}
Point Point::operator-=(double num){
	x -= num;
	y -= num;
	return *this;
}
Point Point::operator+=(double num){
	x += num;
	y += num;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Point& pt){
	out << pt.x << "\t" << pt.y << std::endl;
	return out;
}
