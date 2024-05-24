#include<iostream>
#include "指针.h"
using namespace std;

void pointer_const() {
	int a = 10;
	int b = 20;

	//1、常量指针：指针的指向可以改变，但是指向的值不能变
	const int* p1 = &a;
	p1 = &b;
	//*p1 = b; 错误，指向的值不能变化
	cout << *p1 << endl;

	//2、指针常量：指针指向的值可以改变，但是指针的指向不能变
	int* const p2 = &a;
	//p2 = &b;错误，指向不能变化
	*p2 = b; 
	cout << *p2 << endl;

	//3、指针的指向和指针指向的值均不能变
	const int* const p3 = &a;
	//p3 = &b;错误，指向不能变化
	//*p3 = b;错误，指向的值也不能变化
	cout << *p3 << endl;

}