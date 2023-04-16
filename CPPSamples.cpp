﻿// CPPSamples.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int result(int, int);

const int k = 2;

struct Point {
    int x, y;
};

int main()
{
    int z(0), b(50);
    Point a;
    cout << "输入两个整数(以空格区分):";
    cin >> a.x >> a.y;
    z = (a.x + a.y) * k;
    z = result(z, b);
    cout << "计算结果如下:" << endl;
    cout<<"(("<<a.x<<"+"<<a.y<<")*"<<k<<")+"<< b << "=" << z << endl;
    return 0;
}
int result(int a, int b) {
    return a + b;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件