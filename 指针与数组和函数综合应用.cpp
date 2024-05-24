#include<iostream>
#include "指针.h"
using namespace std;

void bubbleSort(int *arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

void pointer_arr_func() {

	//定义需要排序的数组
	int arr[5] = { 4, 8, -1, 100, 5 };
	//计算数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	//调用冒泡排序函数
	bubbleSort(arr, len);

	//输入排序后的数组
	printArray(arr, len);
}