#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	//不完全初始化
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
//数组打印

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

//数组在内存中的存储
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

//按行放入二维数组中
//int main()
//{
//	int arr[3][3] = { {1,2},{2,4},{3,3} };
//
//	return 0;
//}

//二维数组的输入
//int main()
//{
//	int arr[5][5];
//
//	int row = 0;//控制行
//	int column = 0;//控制列
//
//	printf("请输入你需要打印的值:\n");
//	for (row = 0; row < 5; row++)//外层循环控制行
//	{		
//		for (column = 0; column < 5; column++)//内层循环控制每列 每行的每个元素都可以接收到
//		{
//			scanf("%d", &arr[row][column]);
//		}
//	}
//
//	//打印同理 取到数组所有元素即可
//	printf("该数组中的元素为:\n");
//	for (row = 0; row < 5; row++)
//	{
//		for (column = 0; column < 5; column++)
//		{
//			printf("%d ", arr[row][column]);
//		}
//		printf("\n");//打印完每行换行
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