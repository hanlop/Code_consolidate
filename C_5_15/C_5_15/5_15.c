#define _CRT_SECURE_NO_WARNINGS 1
//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
#include <stdio.h>
//递归写法，当n较大时，耗时过长
//int climbStairs(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//
//	if (n == 2)
//	{
//		return 2;
//	}
//
//	return climbStairs(n - 1) + climbStairs(n - 2);
//
//}

//迭代
//int climbStairs(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//
//	//n-1台阶的跳法
//	int a1 = 1;
//	//n-2台阶的跳法
//	int a2 = 2;
//
//	//n台阶的跳法
//	int ret = 0;
//
//	while (n>=3)
//	{
//		ret = a1 + a2;
//		a1 = a2;
//		a2 = ret;
//		n--;
//	}
//
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = climbStairs(n);
//	printf("%d", ret);
//
//	return 0;
//}

