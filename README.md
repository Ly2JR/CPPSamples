# C++程序设计 2008 版 课程代号 4737

章节答案

## 第一章

### 一、选择题

1. B;(typedef,typeid,typename,都为保留字)
2. C;(标识符，应该以字母或下划线开头)
3. C;(标识符中没有特殊符合，只能有下划线)

### 二、填空题

1. cin,cout
2. new,delete
3. int a(55);

### 三、改错题

1. 没有定义变量num;
2. 不能给变量x，生命指向常量的指针const int *p=&x;如果把x定义为常量const,*p不能当作“左值”
3. p为常量指针，不能把p作为"左值",p=&y错误。

### 四、编程题

1. 分别用字符和ASCII码形式输出整数值65和66；

```cpp
#include<iostream>
using namespace std;

int main(){

	int num1=65,num2=66;
	cout<<"字符型:"<<(char)num1<<" "<<(char)num2<<endl;
	cout<<"ASCII码:"<<num1<<" "num2<<endl;

	return 0;
}
```
2. 编写一个int型变量分配100个整型空间的程序

```cpp
#include<iostream>
using namespace std;
int main(){
	int *p;

	p=new int[100];

	delete p;

	return 0;
}
```

3. 编写完整的程序，它读入15个float值，用指针把他们存放在一个存储块里，然后输出这些值的和以及最小值。

```cpp
#include<iostream>
using namespace std;
int main(){

float *p;
float sum;
float min=0;

p=new float[15];
cout<<"输入15个数:";
for(int i=0;i<15;i++){
	cin>>p[i];

	//求和
	sum+=p[i];
	//判断最小值
	if(i==0){
		min=p[i];
	}else{
		if(min>p[i]){
			min=p[i];
		}
	}
}

//输出这些值
for(int i=0;i<15;i++){
	cout<<p[i]<<" ";
}
cout<<"和是:"<<sum<<endl;
cout<<"最小值是:"<<min<<endl;

delete p;
return 0;
}
```

4. s


## 第二章

### 一、单项选择

1. D
2. D