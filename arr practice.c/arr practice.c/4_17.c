#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>


//int main()
//{
//	char arr1[] = "#############################";
//	char arr2[] = "hello!my beautiful girlfriend";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//
//	printf("%s", arr2);
//
//	return 0;
//}

//���ֲ���
//ǰ����һ����������
//int main()
//{
//	printf("������������ҵ�ֵ:\n");
//
//	int n = 0;
//	scanf("%d", &n);
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2; 
//
//	int flag = 0;//������ҵ���������
//	while (left <= right)
//	{
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//			mid = (right + left) / 2;
//		}
//		else if (n > arr[mid])
//		{
//			left = mid + 1;
//			mid = (right + left) / 2;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d",mid);
//			flag = 1;//���ҵ�������
//			break;
//		}
//	}
//
//	if (flag == 0)
//	{
//		printf("����������\n");
//	}
//
//	return 0;
//}