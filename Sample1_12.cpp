#include<iostream>
#include<iomanip>
#include"Sample1_12.h"
using namespace std;
void sample1_12() {
	const int p = 15;
	cout << setfill('*')
		<< setw(0) << p << endl
		<< setw(1) << p << endl
		<< setw(2) << p << endl
		<< setw(3) << p << endl
		<< setw(4) << p << endl;

	//setw(n)�е�n�Ⱥ���Ԫ�ش�һ������䣬�����15��*
	cout << setw(16) << setfill('*') << " " << endl;
	cout << setiosflags(ios_base::right)
		<< setw(5) << 1
		<< setw(5) << 2
		<< setw(5) << 3 << endl;
	cout << resetiosflags(ios_base::right);
	cout << setiosflags(ios_base::left)
		<< setw(5) << 1
		<< setw(5) << 2
		<< setw(5) << 3 << endl;
}