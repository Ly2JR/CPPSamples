#include<iostream>
#include "sample3.h"
using namespace std;

void sample3() {
	double *p;  //����double��ָ��
	p = new double[3];
	cout << "������������(�Կո�����)";
	for (int i = 0; i < 3; i++) {
		cin >> *(p + i);//���������ݴ���ָ����ַ
	}
	for (int i = 0; i < 3; i++) {
		cout << *(p + i) << " ";//����ַ�������
	}
	delete p;
}