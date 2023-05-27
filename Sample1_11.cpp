#include<iostream>
#include<iomanip>
#include"Sample1_11.h"
using namespace std;
void sample1_11() {
	const double P1 = 3.141592;
	//setprecision(0) 输出3，由系统决定，默认6
	//setprecision(1) 输出3
	cout << P1 << endl
		<< setprecision(0) << P1 << endl
		<< setprecision(1) << P1 << endl
		<< setprecision(2) << P1 << endl
		<< setprecision(3) << P1 << endl
		<< setprecision(7) << P1 << endl;

	int b = 100;
	cout << "Dec:" << dec << b << endl
		<< "Hex:" << hex << b << endl
		<< "Oct:" << oct << b << endl;

	cout << b << endl
		<< 100 << endl
		<< "Input b=";

	cin >> b;
	cout << b << endl;
	cout << dec << setiosflags(ios_base::showpos) << b << endl;
	cout << "Input b=";

	cin >> b;
	cout << b << endl;
	cout << resetiosflags(ios_base::showpos);
	cout << b << endl;
}