#pragma once
#include <complex>
#include<iostream>
using namespace std;
template<class T>

void printer(complex<T> a) {
	string str1("real is "), st2 = "image is ";
	cout << str1 << a.real()<<" , " << st2 << a.imag() << endl;
}

void sample3_16();