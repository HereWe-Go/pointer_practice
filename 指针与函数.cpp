#include<iostream>
#include "指针.h"
using namespace std;

void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int * p1, int * p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void pointer_function() {

	int a = 10;
	int b = 20;
	//1、值传递
	swap01(a, b);
	cout << "swap01:" << a << ' ' << b << endl;
	//2、地址传递
	
	swap02(&a, &b);
	cout << "swap02:" << a << ' ' << b << endl;
}