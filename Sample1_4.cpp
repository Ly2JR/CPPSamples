#include<iostream>
#include "Sample1_4.h"
using namespace std;

void sample1_4() {
	int x = 56;
	int& a = x;//����a��x�����ã�a��x�ĵ�ַ��ͬ
	int& r = a;
	cout << "x=" << x << ",&x=" << &x;
	cout << ",a=" << a << ",&a=" << &a;
	cout << ",r=" << r << ",&r=" << &r;
	cout << endl;

	r = 25;
	cout << "x=" << x << ",&x=" << &x;
	cout << ",a=" << a << ",&a=" << &a;
	cout << ",r=" << r << ",&r=" << &r;
	cout << endl;
}