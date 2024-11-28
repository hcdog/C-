// 冒泡排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int b =0;
	int arr[7] = { 1,2,34,56,7,41,4};
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[j] < arr[j + 1]){
				b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	for (int k = 0; k < 7; k++) {
		std::cout << arr[k] << " ";
	}
}
