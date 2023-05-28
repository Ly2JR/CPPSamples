#include<iostream>
#include"Sample2_2.h"

using namespace std;

//Struct默认是public
//Class默认是private
struct StructPoint3 {
private:
	double x, y;
public:

	StructPoint3() {

	}
	StructPoint3(double a, double b) {
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

void sample2_3() {
	StructPoint3 a;
	StructPoint3 b(18.5, 10.6);
	a.Setxy(10.6, 18.5);
	a.Display();
	b.Display();
}
