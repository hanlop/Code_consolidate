#define _CRT_SECURE_NO_WARNINGS 1
//��ϰʹ�ÿ⺯����qsort����������͵�����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct stu
//{
//	char name[20];
//	int age;
//};
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *((int*)p1) - *((int*)p2);
//}
//int cmp_stu_age(const void* p1, const void* p2)
//{
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
//}
//int cmp_stu_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct stu*)p1)->name ,((struct stu*)p2)->name);
//}
//void test1()
//{
//	int arr[10] = { 2,1,6,7,9,4,8,3,5,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print(arr, sz);
//}
//void test2()
//{
//	struct stu pl[3] = { {"zhangsan",18}, {"lisi",29}, {"ergou",12} };
//	int sz = sizeof(pl) / sizeof(pl[0]);
//
//	qsort(pl, sz, sizeof(pl[0]), cmp_stu_age);
//}
//void test3()
//{
//	struct stu pl[3] = { {"zhangsan",18}, {"lisi",29}, {"ergou",12} };
//	int sz = sizeof(pl) / sizeof(pl[0]);
//
//	qsort(pl, sz, sizeof(pl[0]), cmp_stu_name);
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//
//	return 0;
//}

//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
void Print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_int(const void* p1, const void* p2)
{
	return *((int*)p1) - *((int*)p2);
}
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag)
//			break;
//	}
//}

//��ð������ĳ�qsort�ķ�������
void Swap(char* p1, char* p2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;

		p1++;
		p2++;
	}
}
void bubble_sort(void* base,
	size_t length,
	size_t width,
	int (*cmp)(const void*,const void*))
{
	int i = 0;
	for (i = 0; i < length - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < length - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, 
				(char*)base + (j+1) * width))
			{
				Swap((char*)base + j * width,
					(char*)base + (j + 1) * width,width);
			}
		}
		if (flag)
			break;
	}
}
int main()
{
	int arr[10]= { 2,1,6,7,9,4,8,3,5,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);

	return 0;
}