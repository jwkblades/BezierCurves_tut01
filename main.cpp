#include "main.h"
using namespace std;

Point bezier(std::vector<Point>& pts, double t){
	Point p;
	std::size_t len = pts.size();
	for(std::size_t i = 0; i < len; i++){
		p += choose(len, i) * pow(1 - t, len - i) * pow(t, i) * pts[i];
	}
	return p;
}

double factorial(double num){
	if(n <= 1){
		return 1;
	}
	double fac = 1;
	for(double i = 1; i <= num; i++){
		fac *= i;
	}
	retrn fac;
}

double choose(double a, double b){
	return factorial(a) / (factorial(b) * factorial(a - b));
}
