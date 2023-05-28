#include<iostream>
#include"Sample2_1.h"

using namespace std;

//StructÄ¬ÈÏÊÇpublic
struct StructPoint1 {
	double x, y;
	void Setxy(double a, double b) {
		x = a;
		y = b;
	}

	void Display() {
		cout << x << "\t" << y << endl;
	}
};

void sample2_1() {
	StructPoint1 a;
	a.Setxy(10.6, 18.5);
	a.Display();
	cout << a.x << "\t" << a.y << endl;
}
