#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
#include "Sample2_12.h"

using namespace std;

void sample2_12() {
	string str1 = "wearehere!", str2(str1);
	reverse(str1.begin(), str1.end());
	cout << str1 << endl;

	copy(str1.begin(), str1.end(), str2.begin());
	sort(str1.begin(), str1.end());
	cout << str1 << endl;
	cout << str2 << endl;

	reverse_copy(str1.begin(), str1.end(), str2.begin());
	cout << str2 << endl;

	reverse(str2.begin() + 2, str2.begin() + 8);
	copy(str2.begin() + 2, str2.begin() + 8, ostreambuf_iterator<char>(cout));

	cout << endl;

	sort(str1.begin(), str1.end(), greater<char>());
	cout << str1 << endl;
	str1.swap(str2);
	cout << str1 << " " << str2 << endl;

	cout << (*find(str1.begin(), str1.end(), 'e') == 'e') << endl;
		 //<< (*find(str2.begin(), str2.end(), 'O') == 'O') << endl; 新版本有问题
}