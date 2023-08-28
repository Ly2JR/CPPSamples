#include<iostream>
#include"Sample4_3.h"
using namespace std;

void sample4_3() {
	Point4_3 A, B, * p;
	Point4_3 &RA = A;
	A.Setxy(25, 55);
	B = A;
	p = &B;
	p->Setxy(112, 115);
	Print4_3(p);
	p->Display();
	RA.Move(-80, 23);
	Print4_3(A);
	Print4_3(&A);
}

void Point4_3::Setxy(int a, int b) {
	x = a;
	y = b;
}

void Point4_3::Move(int a, int b) {
	x = x + a;
	y = y + b;
}

void Point4_3::Display() {
	cout << x << "," << y << endl;
}

int Point4_3::GetX() {
	return x;
}

int Point4_3::GetY() {
	return y;
}

void Print4_3(Point4_3 &a) {
	a.Display();
}

void Print4_3(Point4_3  *a) {
	a->Display();
}