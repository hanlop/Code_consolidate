#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵ�
//���ҳ��Ǹ�ֻ����һ�ε����֡�
//���磺
//�������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5
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

//������������ʱ������������������������
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

//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1

//�ֱ���д��
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
//����λ��������ͳ��
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

//��ӡ���������Ƶ�����λ��ż��λ

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
//	printf("��������:");
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d", uneven[i]);
//	}
//
//	printf("\n");
//
//	printf("ż������:");
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