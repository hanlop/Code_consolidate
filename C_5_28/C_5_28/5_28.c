#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////数组名的理解
//int main()
//{
//	int arr[10] = { 10 };
//	//数组名的本质是，该数组首元素的第一个地址
//	printf("%p", arr);
//	printf("%d", *arr);
//	//两个例外
//	//sizeof（arr）中使用arr计算的整个数组的大小
//	//&arr 取出的是整个数组的地址
//	//类型是int（*）[10]
//
//	printf("%d", sizeof(arr));
//	printf("%p", &arr + 1);
//
//	return 0;
//}

//使用指针访问数组
