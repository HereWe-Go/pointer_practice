#include<iostream>
#include "ָ��.h"
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

	//������Ҫ���������
	int arr[5] = { 4, 8, -1, 100, 5 };
	//�������鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	//����ð��������
	bubbleSort(arr, len);

	//��������������
	printArray(arr, len);
}