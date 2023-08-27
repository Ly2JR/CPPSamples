#include<iostream>
#include "sample3_17.h"
using namespace std;
void sample3_17(){
	cout << max3_17("ABC", "ABD") << " £¬ " << min3_17("ABC", "ABD") << " £¬ "
		<< min3_17("W", "T") << " , " << min3_17(2.0, 5.) ;
	cout << "\t" << min3_17<double>(8.5, 6) << " , " << min3_17(8.5, (double)6) << " , " << max3_17((int)8.5, 6);
	cout << "\t" << min3_17<int>(2.3, 5.8) << " , " << max3_17<int>('a', 'y') << " , " << max3_17<char>(95, 121) << endl;

}