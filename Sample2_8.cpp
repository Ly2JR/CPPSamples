#include<iostream>
#include<string>
#include"Sample2_8.h"

using namespace std;

void sample2_8() {
	string str1("We are here!");
	string str2 = "Where are you?";
	cout << str1[0] << str1[11] << "," << str1 << endl;
	cout << str2[0] << str2[13] << "," << str1 << endl;
	cout << "please input a word:";
	cin >> str1;
	cout << "length of the " << str1 << " is " << str1.size() << " . " << endl;
}