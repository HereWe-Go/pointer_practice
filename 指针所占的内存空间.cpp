#include<iostream>
#include "ָ��.h"
using namespace std;

void pointer_space() {
	int a = 10;
	int * p = &a;

	//32λϵͳ��ָ��Ĵ�С��4���ֽڣ�64λϵͳ��ָ��Ĵ�С��8���ֽ�
	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;

}