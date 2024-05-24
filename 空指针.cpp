#include<iostream>
#include "指针.h"
using namespace std;


void pointer_init() {
	//空指针表示指向内存中编号为0的空间，用于初始化指针变量
	int* p = NULL;

	//空指针是不可以进行访问的
	//0~255之间的内存编号是系统占用的，因此不可以访问
	//*p = 10;

}