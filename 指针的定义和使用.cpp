#include<iostream>
#include "指针.h"
using namespace std;

void pointer_define() {
	int a = 10;

	//定义指针：数据类型 * 指针变量名
	int * p;
	
	//让指针记录a的地址
	p = &a;
	*p = 20;

	cout << "a的地址为：" << &a << endl;
	cout << "p的值为：" << p << endl;
	cout << "p指向的内存中存储的数据为：" << *p << endl;
	cout << "a的值为：" << a << endl;

}