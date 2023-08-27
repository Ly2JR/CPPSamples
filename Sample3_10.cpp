#include <iostream>
#include <string>
#include "Sample3_10.h"
using namespace std;

void sample3_10() {
	int n;
	cout << "Input n= ";
	cin >> n;
	string str = input(n);
	cout << str << endl;
}

string input(const int n) {
	string s1, s2;
	for (int i = 0; i < n; i++) {
		cin >> s1;
		s2 = s2 + s1 + " ";
	}
	return s2;
}
