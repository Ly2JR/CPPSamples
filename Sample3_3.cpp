#include<iostream>
#include"Sample3_3.h"

using namespace std;

//������������ָ����
void swap(int a[]) {
	int temp = a[0];
	a[0] = a[1];
	 a[1] = temp;
	cout << "����Ϊ: a[0]= " << a[0] << " a[1]= " << a[1] << endl;
}

void sample3_3() {
	int a[] = { 3,9 };
	swap(a);
	cout << "���غ�a[0]= " << a[0] << " a[1]= " << a[1] << endl;
}