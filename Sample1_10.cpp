#include<iostream>
#include<iomanip>
#include"Sample1_10.h"
using namespace std;

void sample1_10() {
	int a = 29, b = 1001;
	//setw对紧跟之后的元素有效
	cout << a << setw(6) << b << endl;
	cout << setw(6) << a << b << endl;

}
