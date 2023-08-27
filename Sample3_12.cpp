#include<iostream>
#include "Sample3_12.h"
using namespace std;

void sample3_12() {
	cout << max3_12(2.5, 17.54) << " " << max3_12(56, 8) << " " << max3_12('w', 'p') << endl;
	cout << "max(5,9,4)=" << max3_12(5, 9, 4) << " max(5,4,9)=" << max3_12
	(5, 4, 9) << endl;
}
double max3_12(double m1, double m2) {
	return (m1 > m2) ? m1 : m2;
}
char max3_12(char m1, char m2) {
	return (m1 > m2) ? m1 : m2;
}
int max3_12(int m1, int m2) {
	return (m1 > m2) ? m1 : m2;
}
int max3_12(int m1, int m2, int m3) {
	int t = max3_12(m1, m2);
	return max3_12(t, m3);
}