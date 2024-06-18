#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//使用malloc函数模拟开辟一个3 * 5的整型二维数组，
//开辟好后，使用二维数组的下标访问形式，访问空间。

//int main()
//{
//	int** arr = (int**)malloc(sizeof(int) * 3);
//	int i = 0;
//
//	//判断是否开辟成功
//	if (arr == NULL)
//		return 1;
//
//	for (i = 0; i < 3; i++)
//	{
//		arr[i] = (int*)malloc(sizeof(int) * 5);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = i;
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	//释放开辟的空间
//
//	for (i = 0; i < 3; i++)
//	{
//		free(arr[i]);
//	}
//
//
//
//	return 0;
//}

//使用联合体的知识，写一个函数判断当前机器是大端还是小端
//，如果是小端返回1，如果是大端返回0.
union U1
{
	int a1;
	char a;
};
int main()
{
	union U1 judge;
	judge.a1 = 1;

	if (judge.a == 1)
		printf("大端");
	else
		printf("小端");

	return 0;
}