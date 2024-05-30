#define _CRT_SECURE_NO_WARNINGS 1
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
// 比如1461 可以拆分成（1和461）, （14和61）, （146和1), 
// 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//
//	for (i = 10000; i <100000; i++)
//	{
//		int ret = i;
//		int num = 10;
//		int sum = 0;
//
//		while (ret)
//		{
//			sum += (i / num) * (i % num);
//			num *= 10;
//
//			ret = i;
//			ret /= num;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//    int a, b, c, d, A, B, C, D;
//    for (int num = 10000; num < 100000; num++)
//    {
//        a = num / 10000; A = num % 10000;
//        b = num / 1000; B = num % 1000;
//        c = num / 100; C = num % 100;
//        d = num / 10; D = num % 10;
//        if (num == a * A + b * B + C * c + d * D)
//        {
//            printf("%ld ", num);
//        }
//    }
//    return 0;
//}

//描述
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，
//序列中未被删除数字的前后位置没有发生改变。
//数据范围：序列长度和序列中的值都满足
//1≤𝑛≤50
#define N 50
int main()
{
	int arr[N];

	int n = 0;
	scanf("%d", &n);

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int pop_num = 0;
	scanf("%d", &pop_num);

	for (i = 0; i < n; i++)
	{
		if (arr[i] == pop_num)
		{
			n--;
			int j = i;
			for (j=i; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			i--;
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}