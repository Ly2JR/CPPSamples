#include <iostream>
#include<algorithm>
#include "Sample1_6.h"
using namespace std;

void sample1_6() {
	double a[] = { 1.1, 4.4, 3.3, 2.2 }, b[4];
	//正向输出数组a,以空格隔开
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;

	//逆向输出数组a，以空格隔开
	reverse_copy(a, a + 4,ostream_iterator<double>(cout, " "));
	cout << endl;

	//原样复制岛数组B
	copy(a, a + 4, b);

	//正向输出数组b,以空格隔开
	copy(b, b + 4, ostream_iterator<double>(cout, " "));
	cout << endl;

	//对数组a进行升幂排序
	sort(a, a + 4);

	//输出数组a
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;

	//将数组a逆向复制给数组b
	reverse_copy(a, a + 4, b);

	copy(b, b + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
}
