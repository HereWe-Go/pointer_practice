#include<iostream>
#include "ָ��.h"
using namespace std;

void pointer_define() {
	int a = 10;

	//����ָ�룺�������� * ָ�������
	int * p;
	
	//��ָ���¼a�ĵ�ַ
	p = &a;
	*p = 20;

	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "p��ֵΪ��" << p << endl;
	cout << "pָ����ڴ��д洢������Ϊ��" << *p << endl;
	cout << "a��ֵΪ��" << a << endl;

}