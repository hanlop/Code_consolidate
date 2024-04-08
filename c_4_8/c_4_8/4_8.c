#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int i = 0;
//
//	i = (a++ && 1) ;
//
//	printf("%d\n", i);
//
//	return 0;
//}
//int get_max(int arr[],int num)
//{
//	int flag = 0;
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//
//	return arr[0];
//}
//int main()
//{
//	int arr[10] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int num = sizeof(arr) / sizeof(arr[0]);
//
//	printf("%d",get_max(arr, num));
//
//	return 0;
//}

//int main()
//{
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += -1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%f", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int temp = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		temp = i;
//		while (temp)
//		{
//
//			if (temp % 10 == 9)
//			{
//				count++;
//			}
//			temp /= 10;
//		}
//	}
//
//	printf("%d", count);
//
//	return 0;
//}
//打印1000~2000间的闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//求两数的最大公约数
//使用更相减损法

int gcd(int x, int y)
{
	while (1)
	{
		if (x > y)
		{
			x = x - y;
		}
		else if (x < y)
		{
			y = y - x;
		}
		else
		{
			return x;
		}
	}
}

int main()
{
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);

	printf("%d和%d的公约数：%d", a, b, gcd(a, b));

	return 0;
}