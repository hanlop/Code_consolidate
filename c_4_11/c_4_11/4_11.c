#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//goto用于特定的情形下：
	//比如多层循环
	int i, n, m;
	for (i = 0; i < 100; i++)
	{
		for (n = 0; n < 100; n++)
		{
			for (m = 0; m < 100; m++)
			{
				//如果想要跳出整个嵌套的循环 我们首先想到的是用break
				//但是break需要一步一步的跳 不够便捷 我们用goto语句可以一步跳出
				goto jump;
			}
		}
	}

jump:
	printf("跳跃成功\n");

	return 0;
}
//#include <math.h>

//打印素数100~200
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//定义一个标志，默认这个数是素数
//
//		for (j = 2; j <= sqrt(i); j++)//如果一个数不是素数，那1到这个数的根号之间必然有可以整除这个数的值
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数将标志改为0
//			}
//		}
//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("有%d个素数\n", count);
//
//	return 0;
//}
// 

//打印乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)//控制乘法口诀表的行数
//	{
//		for (j = 1; j <= i; j++)//控制乘法口诀表的列数
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);//%2d控制对齐
//		}
//		printf("\n");
//	}
//
//	return 0;
//}