#include<iostream>
#include"Sample3_9.h"
using namespace std;

float* input(int& n) {
	cout << "Input Number: ";
	cin >> n;
	if (n <= 0)return NULL;
	float* buf = new float[n];//����ռ�
	if (buf == 0)return NULL;//û�����뵽
	for (int i = 0; i < n; i++) {
		cin >> buf[i];
	}
	int* a = &n;
	return buf;
}

void sample3_9() {
	int num;
	float* data;
	data = input(num);
	if (data) {
		for (int i = 0; i < num; i++) {
			cout << data[i] << " ";
		}
		delete data;
	}
}