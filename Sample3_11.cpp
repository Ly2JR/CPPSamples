#include "Sample3_11.h"
#include <iostream>
using namespace std;

void sample3_11() {
	cout << max3_11(55, max(25, 39)) << endl;
}

int max3_11(int m1, int m2) {
	return (m1 > m2) ? m1 : m2;
}