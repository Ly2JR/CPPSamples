#include<iostream>
#include"Sample3_3.h"

using namespace std;

//数组名是数组指针名
void swap(int a[]) {
	int temp = a[0];
	a[0] = a[1];
	 a[1] = temp;
	cout << "交换为: a[0]= " << a[0] << " a[1]= " << a[1] << endl;
}

void sample3_3() {
	int a[] = { 3,9 };
	swap(a);
	cout << "返回后：a[0]= " << a[0] << " a[1]= " << a[1] << endl;
}