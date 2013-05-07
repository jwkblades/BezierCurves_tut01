#include "main.h"
using namespace std;

int main(void){
	std::vector<std::vector<Point> > pts;
	char endPointCount = 0;
	double inx;
	double iny;
	int ptCount = 0;
	int endPoint;
	double deltaT;

	cin >> ptCount >> deltaT;
	for(int i = 0; i < ptCount; i++){
		cin >> inx >> iny >> endPoint;
		Point p(inx, iny);
		if(endPointCount == 0 && endPoint == 1){
			pts.push_back(std::vector<Point>());
			pts[pts.size() - 1].push_back(p);
			endPointCount++;
			continue;
		}
		pts[pts.size() - 1].push_back(p);
		if(endPointCount != 0 && endPoint == 1 && i != ptCount - 1){
			pts.push_back(std::vector<Point>());
			pts[pts.size() - 1].push_back(p);
			endPointCount++;
		}
	}
	

	for(std::size_t i = 0; i < pts.size(); i++){
		for(double t = 0; t <= 1; t += deltaT){
			cout << bezier(pts[i], t) << endl;
		}
	}
	return 0;
}

Point bezier(std::vector<Point>& pts, double t){
	Point p;
	std::size_t len = pts.size();
	for(std::size_t i = 0; i < len; i++){
		p += pts[i] * choose(len - 1, i) * pow(1 - t, len - 1 - i) * pow(t, i);
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
