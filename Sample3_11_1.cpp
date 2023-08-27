#include <iostream>
#include "Sample3_11_1.h"
using namespace std;

//int isnumber(char c) {
//	return (c > '0' && c <= '9') ? 1 : 0;
//}

//添加inline 实现内联
inline int isnumber(char c) {
		return (c > '0' && c <= '9') ? 1 : 0;
	}

void sample3_11_1() {
	char c;
	cin >> c;
	if (isnumber(c)) cout << "youe enteren a digit";
	else cout << "you entered a not-digit";
}