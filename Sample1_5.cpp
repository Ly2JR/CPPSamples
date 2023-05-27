#include<iostream>;
#include"Sample1_5.h";
using namespace std;


void sample1_5() {
	arr a = { 12,34,56,78,90,98,76,85,64,43 };
	arr& b = a;
	a[2] = 100;
	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
}