#define _CRT_SECURE_NO_WARNINGS 1
//������������¥�ݡ���Ҫ n ������ܵ���¥����
//ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�
#include <stdio.h>
//�ݹ�д������n�ϴ�ʱ����ʱ����
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

//����
//int climbStairs(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//
//	//n-1̨�׵�����
//	int a1 = 1;
//	//n-2̨�׵�����
//	int a2 = 2;
//
//	//n̨�׵�����
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

