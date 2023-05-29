#include<iostream>
#include<string>
#include<algorithm>
#include "Sample2_13.h"
using namespace std;

void sample2_13() {
	string str[] = { "We are here!","Where are you?","welcome!" };
	for (int i = 0; i < 3; i++) {
		copy(str[i].begin(), str[i].end(), ostream_iterator<char>(cout));
		cout << endl;
	}

	str[0].swap(str[2]);
	str[0].swap(str[1]);
	for (int i = 0; i < 3; i++) {
		cout << str[i] << endl;
	}
}