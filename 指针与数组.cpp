#include<iostream>
#include "ָ��.h"
using namespace std;

void pointer_array() {
	
	int arr[5] = { 1,2,3,4,5 };

	//��������������ȡ��������׵�ַ
	int* p = arr; 

	//����ָ�������������
	for (int i = 0; i < 5; i++) {
		cout << *p << endl;
		
		//ָ��ÿ������ƶ�4���ֽ�
		p++;
	}
}