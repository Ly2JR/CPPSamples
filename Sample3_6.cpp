#include<iostream>
#include<string>
#include"Sample3_6.h"

using namespace std;

void Display(string s1, string s2, string s3) {
	if (s2 == "" && s3 == "") cout << s1 << endl;
	else if (s3 == "" && s2 != "") cout <<s1<< "��" << s2 << endl;
	else cout << s1 <<"��" << s2 << "��" << s3 << endl;
}

void sample3_6() {
	string str1("����"), str2("��ȥ"),str3("����");
	Display(str1);
	Display(str1,str2,str3);
	Display(str3,str1);
	Display(str2,str3);
}