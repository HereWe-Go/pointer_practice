#include<iostream>
#include "ָ��.h"
using namespace std;

void pointer_const() {
	int a = 10;
	int b = 20;

	//1������ָ�룺ָ���ָ����Ըı䣬����ָ���ֵ���ܱ�
	const int* p1 = &a;
	p1 = &b;
	//*p1 = b; ����ָ���ֵ���ܱ仯
	cout << *p1 << endl;

	//2��ָ�볣����ָ��ָ���ֵ���Ըı䣬����ָ���ָ���ܱ�
	int* const p2 = &a;
	//p2 = &b;����ָ���ܱ仯
	*p2 = b; 
	cout << *p2 << endl;

	//3��ָ���ָ���ָ��ָ���ֵ�����ܱ�
	const int* const p3 = &a;
	//p3 = &b;����ָ���ܱ仯
	//*p3 = b;����ָ���ֵҲ���ܱ仯
	cout << *p3 << endl;

}