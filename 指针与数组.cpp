#include<iostream>
#include "指针.h"
using namespace std;

void pointer_array() {
	
	int arr[5] = { 1,2,3,4,5 };

	//利用数组名，获取到数组的首地址
	int* p = arr; 

	//利用指针逐行输出数组
	for (int i = 0; i < 5; i++) {
		cout << *p << endl;
		
		//指针每次向后移动4个字节
		p++;
	}
}