#pragma once

void sample4_1();

class Point4_1 {
private:
	int x, y;
public:
	void Setxy(int, int);
	void Move(int, int);
	void Display();
	int  GetX();
	int GetY();
};

void Print4_1(Point4_1&);