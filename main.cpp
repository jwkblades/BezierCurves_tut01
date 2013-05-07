#include "main.h"
using namespace std;

int main(void){
	std::vector<Point> pts;
	pts.push_back(Point(20, 20));
	pts.push_back(Point(30, 0));
	pts.push_back(Point(40, 40));
	pts.push_back(Point(50, 20));
	for(double t = 0; t <= 1; t += .01){
		cout << bezier(pts, t) << endl;
	}
	return 0;
}

Point bezier(std::vector<Point>& pts, double t){
	Point p;
	std::size_t len = pts.size();
	for(std::size_t i = 0; i < len; i++){
		p += pts[i] * (choose(len - 1, i) * pow(1 - t, len - 1 - i) * pow(t, i));
	}
	return p;
}

double factorial(double num){
	if(num <= 1){
		return 1;
	}
	double fac = 1;
	for(double i = 1; i <= num; i++){
		fac *= i;
	}
	return fac;
}

double choose(double a, double b){
	return factorial(a) / (factorial(b) * factorial(a - b));
}
