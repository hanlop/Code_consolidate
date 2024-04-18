#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int bin_search(int arr[], int left, int right, int key)
//{
//	int flag = 0;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (key < arr[mid])
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//		else if (key > arr[mid])
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else
//		{
//			flag = 1;
//			return mid;
//		}
//	}
//
//	if (flag == 0)
//	{
//		return -1;
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 2,3,4,5,6,7,8,9,10,11 };
//
//	int key = 0;
//	scanf("%d", &key);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	int flag=bin_search(arr, left, right, key);
//
//	if (flag != -1)
//	{
//		printf("�ҵ��ˣ��±�Ϊ:%d\n", flag);
//	}
//	else
//	{
//		printf("������û�и���\n");
//	}
//
//	return 0;
//}

//�˷��ھ���
//void Multi_table(int con)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= con; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%-2d=%-6d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Multi_table(n);
//
//	return 0;
//}
#include <stdbool.h>
//
//bool Is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	if (Is_leap_year(year))
//	{
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������", year);
//	}
//	return 0;
//}

#include <math.h>
//bool is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i==0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
void Init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	int temp = 0;
	while (left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr,sz);
	Reverse(arr, sz);
	Print(arr, sz);
	Init(arr, sz);
	Print(arr, sz);

	return 0;
}