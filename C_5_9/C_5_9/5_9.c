#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
#include <stdio.h>
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,3,1,4,5,6,9,7,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//
//	return 0;
//}

//实现一个对整形数组的冒泡排序

//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//void BubbleSort(int* arr, int sz)
//{
//	//排升序
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//每趟开始默认有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,2,3,1,5,9,7,4,5,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	BubbleSort(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

int main()
{
	char s1[] = " ";
	char s2[] = " ";
	scanf("%s", s1);
	scanf("%s", s2);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}