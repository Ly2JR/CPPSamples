#include<iostream>
#include "Sample3_13.h"
using namespace std;


void sample3_13() {
	cout << add3_13(1, 3) << "," << add3_13(1, 3, 5) << "," << add3_13(1, 3, 5, 7) << endl;
}

int add3_13(int m1, int m2, int m3, int m4) {
	return m1 + m2 + m3 + m4;
}

