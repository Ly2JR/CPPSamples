#include<iostream>
#include "Sample3_14.h"
using namespace std;

void sample3_14() {
	cout << max3_14(2, 5) << "\t" << max3_14(2.0, 5.) << "\t"
		<< max3_14('w', 'a') << "\t" << max3_14("ABC", "ABD") << endl;
}