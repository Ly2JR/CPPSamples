#include<iostream>
#include"Sample2_2.h"

using namespace std;

//Struct默认是public
//Class默认是private
class StructPoint4 {
private:
	double x, y;
public:

	StructPoint4() {

	}
	StructPoint4(double a, double b) {
		x = a;
		y = b;
	}

	void Setxy(double a, double b) {
		x = a;
		y = b;
	}

	void Display() {
		cout << x << "\t" << y << endl;
	}
};

void sample2_4() {
	StructPoint4 a;
	StructPoint4 b(18.5, 10.6);
	a.Setxy(10.6, 18.5);
	a.Display();
	b.Display();
}
