#include<iostream>
#include"Sample3_5.h"
using namespace std;

void avecount(arr& b, int n) {
	double ave = 0;
	int count = 0;
	for (int j = 0; j < n - 2; j++) {
		ave = ave + b[j];
		if (b[j] < 60) {
			count++;
		}
	}
	b[n - 2] = ave / (n - 2);//填入平均成绩
	b[n - 1] = count;//填入不及格人数
}

void sample3_5() {
	arr b = { 12,34,56,78,90,98,76,85,64,43 };
	arr& a = b;
	avecount(a, 12);
	cout << "平均成绩为:" << a[10] << "分，不及格人数由" << int(a[11]) << "人" << endl;
}
