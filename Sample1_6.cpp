#include <iostream>
#include<algorithm>
#include "Sample1_6.h"
using namespace std;

void sample1_6() {
	double a[] = { 1.1, 4.4, 3.3, 2.2 }, b[4];
	//�����������a,�Կո����
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;

	//�����������a���Կո����
	reverse_copy(a, a + 4,ostream_iterator<double>(cout, " "));
	cout << endl;

	//ԭ�����Ƶ�����B
	copy(a, a + 4, b);

	//�����������b,�Կո����
	copy(b, b + 4, ostream_iterator<double>(cout, " "));
	cout << endl;

	//������a������������
	sort(a, a + 4);

	//�������a
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;

	//������a�����Ƹ�����b
	reverse_copy(a, a + 4, b);

	copy(b, b + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
}
