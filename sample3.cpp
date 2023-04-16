#include<iostream>
#include "sample3.h"
using namespace std;

void sample3() {
	double *p;  //声明double型指针
	p = new double[3];
	cout << "请输入三个数(以空格区分)";
	for (int i = 0; i < 3; i++) {
		cin >> *(p + i);//将输入数据存入指定地址
	}
	for (int i = 0; i < 3; i++) {
		cout << *(p + i) << " ";//将地址内容输出
	}
	delete p;
}