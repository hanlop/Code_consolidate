#define _CRT_SECURE_NO_WARNINGS 1
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
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

//ʵ��һ�������������ð������

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
//	//������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//ÿ�˿�ʼĬ������
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

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

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