#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int (*(*pf))(int,int);
//
//	return 0;
//}

//int main()
//{
//	声明一个指向含有10个元素的数组的指针，
//	其中每个元素是一个函数指针，
//	该函数的返回值是int，参数是int* ，
//
//	int (*pf)[10];//数组指针
//	int ((*pf))
//	int (*(*pf)[10])(int*);//函数指针
//
//	return 0;
//}

//转移表代码实践
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("*****1.add           2.sub*****\n");
//	printf("*****3.mul           4.div*****\n");
//	printf("************ 0.exit ***********\n");
//	printf("*******************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pf[5])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("请选择要进行的操作:");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = pf[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else
//		{
//			printf("输入有误请重新输入\n");
//		}
//
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//代码过多相同，使用转移表
//	do
//	{
//		menu();
//		printf("请选择要进行的操作:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入有误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.

//int main()
//{
//	//统计所有数字上每位的1
//	//一定有某为的1的数量是2n+1
//	//将该位上位1的数分成一组，不是1的分为另外一组
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//
//	//统计二进制数字上每位的1
//	int count = 0;
//	int judge = 1;//通过judge判断哪位上的1位有2n+1个1
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (arr[j] & (judge << i) == 1)
//			{
//				count++;
//			}
//		}
//
//		if (count % 2 == 1)//该位上的1的数有2n+1
//		{
//			break;
//		}
//	}
//
//	//分为两组
//	int x = 0;
//	int y = 0;
//	for (int n = 0; n < 10; n++)
//	{
//		if (arr[n] & judge == 1)
//		{
//			arr1[x++] = arr[n];
//		}
//		else
//		{
//			arr2[y++] = arr[n];
//		}
//	}
//
//	int ret = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ret ^= arr[i];
//	}
//
//	//进行分离
//	int ret1 = ret;
//	int ret2 = ret;
//	for (i = 0; i < 10; i++)
//	{
//		ret1  ^= arr1[i];
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		ret2 ^= arr2[i];
//	}
//
//	printf("%d %d", ret2, ret1);
//
//	return 0;
//}

