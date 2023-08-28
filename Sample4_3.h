#pragma once
#include<iostream>
using namespace std;

void sample4_3();

class Point4_3 {
private:
	int x, y;
public:
	void Setxy(int, int);
	void Move(int, int);
	void Display();
	int  GetX();
	int GetY();
};

void Print4_3(Point4_3* a);

void Print4_3(Point4_3& a);