#define _CRT_SECURE_NO_WARNINGS 1
//쳲��������еĵݹ������д��
#include <stdio.h>

//쳲������õݹ���⣬�����ֽϴ�ʱ�������ظ�����̫��
//Ч�ʹ��ͣ�������ʹ�õݹ�
//int FibRecur(int n)
//{
//	if (n <= 2)
//		return 1;
//	else if (n > 2)
//		return FibRecur(n - 1) + FibRecur(n - 2);
//}
//
////�ݹ����
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
//	printf("�ݹ����:%d\n", ret1);
//
//	int ret2 = FibIter(n);
//	printf("�������:%d\n", ret2);
//	
//
//	return 0;
//}

//����ʵ��n��k�η�
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

//�ݹ�ʵ��n��k�η�
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

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
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

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ����������)
//int Fac1(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fac1(n - 1);
//}
//
////����
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
//	printf("�ݹ� ��%d", ret1);
//
//	int ret2 = Fac2(n);
//	printf("���� : %d", ret2);
//
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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