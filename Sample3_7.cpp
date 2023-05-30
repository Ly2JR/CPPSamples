#include<iostream>
#include<string>
#include"Sample3_7.h"

using namespace std;

void change(const string& s) {
	//s = s+ " No!";//±àÒë´íÎó
	string s2 = s + " No!";
	cout << s2 << endl;
}

void change2(string& s) {
	 s = s + " Yes!";
	cout << s << endl;
}


void sample3_7() {
	string str = "Can you change it?";
	change(str);
	cout << str << endl;
	change2(str);
	cout << str << endl;
}