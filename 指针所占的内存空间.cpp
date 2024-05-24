#include<iostream>
#include "指针.h"
using namespace std;

void pointer_space() {
	int a = 10;
	int * p = &a;

	//32位系统下指针的大小是4个字节；64位系统下指针的大小是8个字节
	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;

}