#include<iostream>
#include "Sample4_1.h"
using namespace std;

void sample4_1() {
	Point4_1 A, B;
	A.Setxy(25, 55);
	B = A;
	A.Display();
	A.Move(-10, 20);
	Print4_1(A);
	Print4_1(B);
	cout << A.GetX() << endl;
}

void Point4_1::Setxy(int a, int b) {
	x = a;
	y = b;
}

void Point4_1::Move(int a, int b) {
	x = x + a;
	y = y + b;
}

void Point4_1::Display() {
	cout << x << "," << y << endl;
}

int Point4_1::GetX() {
	return x;
}

int Point4_1::GetY() {
	return y;
}

void Print4_1(Point4_1 &a) {
	a.Display();
}