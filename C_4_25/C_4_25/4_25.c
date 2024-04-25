#define _CRT_SECURE_NO_WARNINGS 1
//斐波那契数列的递归与迭代写法
#include <stdio.h>

//斐波那契用递归求解，当数字较大时，计算重复数字太多
//效率过低，不建议使用递归
//int FibRecur(int n)
//{
//	if (n <= 2)
//		return 1;
//	else if (n > 2)
//		return FibRecur(n - 1) + FibRecur(n - 2);
//}
//
////递归求解
//int FibIter(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret1 = FibRecur(n);
//	printf("递归求解:%d\n", ret1);
//
//	int ret2 = FibIter(n);
//	printf("迭代求解:%d\n", ret2);
//	
//
//	return 0;
//}

//迭代实现n的k次方
//int MyPow(int n, int k)
//{
//	int ret = n;
//	int temp = n;
//
//	while (k>1)
//	{
//		ret = temp * n;
//		temp = ret;
//		k--;
//	}
//
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	int ret = MyPow(n, k);
//
//	printf("%d", ret);
//	
//	return 0;
//}

//递归实现n的k次方
//int MyPow(int n, int k)
//{
//	if (k == 1)
//		return n;
//	if (k > 1)
//		return n * MyPow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	int ret = MyPow(n, k);
//	printf("%d", ret);
//
//	return 0;
//}

//计算一个数的每位之和（递归实现）
//int DigitSum(int n)
//{
//	if ((n / 10)==0)
//		return n;
//	else 
//		return DigitSum(n / 10) + n % 10;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = DigitSum(n);
//	printf("%d", ret);
//
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出)
//int Fac1(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fac1(n - 1);
//}
//
////迭代
//int Fac2(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret1 = Fac1(n);
//	printf("递归 ：%d", ret1);
//
//	int ret2 = Fac2(n);
//	printf("迭代 : %d", ret2);
//
//	return 0;
//}


//递归方式实现打印一个整数的每一位
void Print(int n)
{
	if (n / 10 != 0)
		Print(n / 10);	

		printf("%d ",n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	Print(n);

	return 0;
}