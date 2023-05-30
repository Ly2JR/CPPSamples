#include<iostream>
#include"Sample3_8.h"
using namespace std;

int a[] = { 2,4,6,8,10,12 };
int& index(int i) {
	return a[i];
}

void sample3_8() {
	index(3) = 16;
	cout << index(3) << endl;
}