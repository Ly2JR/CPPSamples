#include<iostream>
#include"Sample2_2.h"

using namespace std;

//StructĬ����public
//ClassĬ����private
struct StructPoint2 {
private:
	double x, y;
public:
	void Setxy(double a, double b) {
		x = a;
		y = b;
	}

	void Display() {
		cout << x << "\t" << y << endl;
	}
};

void sample2_2() {
	StructPoint2 a;
	a.Setxy(10.6, 18.5);
	a.Display();
	//cout << a.x << "\t" << a.y << endl;
}
