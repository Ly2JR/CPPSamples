# C++������� 2008 �� �γ̴��� 4737

�½ڴ�

## ��һ��

### һ��ѡ����

1. B;(typedef,typeid,typename,��Ϊ������)
2. C;(��ʶ����Ӧ������ĸ���»��߿�ͷ)
3. C;(��ʶ����û��������ϣ�ֻ�����»���)

### ���������

1. cin,cout
2. new,delete
3. int a(55);

### �����Ĵ���

1. û�ж������num;
2. ���ܸ�����x������ָ������ָ��const int *p=&x;�����x����Ϊ����const,*p���ܵ�������ֵ��
3. pΪ����ָ�룬���ܰ�p��Ϊ"��ֵ",p=&y����

### �ġ������

1. �ֱ����ַ���ASCII����ʽ�������ֵ65��66��

```cpp
#include<iostream>
using namespace std;

int main(){

	int num1=65,num2=66;
	cout<<"�ַ���:"<<(char)num1<<" "<<(char)num2<<endl;
	cout<<"ASCII��:"<<num1<<" "num2<<endl;

	return 0;
}
```
2. ��дһ��int�ͱ�������100�����Ϳռ�ĳ���

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

3. ��д�����ĳ���������15��floatֵ����ָ������Ǵ����һ���洢���Ȼ�������Щֵ�ĺ��Լ���Сֵ��

```cpp
#include<iostream>
using namespace std;
int main(){

float *p;
float sum;
float min=0;

p=new float[15];
cout<<"����15����:";
for(int i=0;i<15;i++){
	cin>>p[i];

	//���
	sum+=p[i];
	//�ж���Сֵ
	if(i==0){
		min=p[i];
	}else{
		if(min>p[i]){
			min=p[i];
		}
	}
}

//�����Щֵ
for(int i=0;i<15;i++){
	cout<<p[i]<<" ";
}
cout<<"����:"<<sum<<endl;
cout<<"��Сֵ��:"<<min<<endl;

delete p;
return 0;
}
```

4. s


## �ڶ���

### һ������ѡ��

1. D
2. D