#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	//����ȫ��ʼ��
//	int arr[10] = { 0 };
//	char a[10] = { 'a' };
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	return 0;
//}
//
//�����ӡ

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//
//	for (i = 0; i < 5;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[%d]=%d ", i, arr[i]);
//	}
//
//	return 0;
//}

//�������ڴ��еĴ洢
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p\n", & arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = {0};
//
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("%d", sz);
//
//	return 0;
//}

//���з����ά������
//int main()
//{
//	int arr[3][3] = { {1,2},{2,4},{3,3} };
//
//	return 0;
//}

//��ά���������
//int main()
//{
//	int arr[5][5];
//
//	int row = 0;//������
//	int column = 0;//������
//
//	printf("����������Ҫ��ӡ��ֵ:\n");
//	for (row = 0; row < 5; row++)//���ѭ��������
//	{		
//		for (column = 0; column < 5; column++)//�ڲ�ѭ������ÿ�� ÿ�е�ÿ��Ԫ�ض����Խ��յ�
//		{
//			scanf("%d", &arr[row][column]);
//		}
//	}
//
//	//��ӡͬ�� ȡ����������Ԫ�ؼ���
//	printf("�������е�Ԫ��Ϊ:\n");
//	for (row = 0; row < 5; row++)
//	{
//		for (column = 0; column < 5; column++)
//		{
//			printf("%d ", arr[row][column]);
//		}
//		printf("\n");//��ӡ��ÿ�л���
//	}
//
//	return 0;
//}

int main()
{
	int arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%p\n", &arr[i][j]);
		}
	}

	return 0;
}