#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的
//请找出那个只出现一次的数字。
//例如：
//数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5
//int main()
//{
//	int a = 0;
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//
//	int num = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//
//	printf("%d", num);
//	
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d", a, b);
//
//	return 0;
//}

//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1

//粗暴的写法
//int get_bin_one1(unsigned int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//
//		n = n / 2;
//	}
//
//	return count;
//}
//利用位操作进行统计
//int get_bin_one2(int n)
//{
//	int i = 0;
//	int a = 1;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & (n>>i)) == 1)
//			count++;
//	}
//
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//
//	//int ret=get_bin_one1(n);
//	int ret = get_bin_one2(n);
//	printf("%d", ret);
//
//	return 0;
//}


//
//int get_bin_one(int n)
//{
//	int i = 0;
//	int a = 1;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & (n>>i)) == 1)
//			count++;
//	}
//
//	return count;
//}
//int judge_bin(int n, int m)
//{
//	int a = 0;
//	a = n ^ m;
//
//	return get_bin_one(a);
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//
//	int ret = judge_bin(n, m);
//
//	printf("%d", ret);
//
//	return 0;
//}

//打印整数二进制的奇数位和偶数位

//void reverse(int arr[], int left, int right)
//{
//	while (left < right)
//	{
//		int tem = 0;
//		tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//void Print(int n)
//{
//	int uneven[16] = { 0 };
//	int even[16] = { 0 };
//
//	int i = 0;
//	int n1 = 0;
//	int n2 = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0)
//			uneven[n1++] = (1 & (n >> i));
//		else
//			even[n2++] = (1 & (n >> i));
//	}
//
//
//	reverse(uneven,0,15);
//	reverse(even, 0, 15);
//
//
//	printf("奇数序列:");
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d", uneven[i]);
//	}
//
//	printf("\n");
//
//	printf("偶数序列:");
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d", even[i]);
//	}
//}

void Printbit(int num)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	Printbit(n);

	return 0;
}