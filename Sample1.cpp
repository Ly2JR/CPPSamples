#include <iostream>
#include "Sample1.h"
using namespace std;

void sample1() {
    int z(0), b(50);
    Point a;
    cout << "输入两个整数(以空格区分):";
    cin >> a.x >> a.y;
    z = (a.x + a.y) * k;
    z = result(z, b);
    cout << "计算结果如下:" << endl;
    cout << "((" << a.x << "+" << a.y << ")*" << k << ")+" << b << "=" << z << endl;
}

int result(int a, int b) {
    return a + b;
}
