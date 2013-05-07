#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point{
public:
	Point(void);
	Point(double nx, double ny);
	Point(const Point& src);
	~Point(void);

	Point& operator=(const Point& src);
	Point operator*(const Point& alt);
	Point operator/(const Point& alt);
	Point operator-(const Point& alt);
	Point operator+(const Point& alt);
	Point operator*(double num);
	Point operator/(double num);
	Point operator-(double num);
	Point operator+(double num);
	Point operator*=(const Point& alt);
	Point operator/=(const Point& alt);
	Point operator-=(const Point& alt);
	Point operator+=(const Point& alt);
	Point operator*=(double num);
	Point operator/=(double num);
	Point operator-=(double num);
	Point operator+=(double num);

	friend std::ostream& operator<<(std::ostream& out, const Point& pt);
private:
	double x;
	double y;
};

#endif
