#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int a;
//int main()
//{
//	printf("%d", a);//ȫ�ֱ���λ��ʼ����ϵͳ�Զ������ʼ��Ϊ0 
//
//	return 0;
//}

//int main()
//{
//	printf("%zd", sizeof(long long));
//
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = add(a, b);
//
//	return 0;
//}

//void swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//
//	printf("%d %d", a, b);
//
//	return 0;
//}
//extern int a;//extern�����ⲿ����
//static
//���ξֲ�����
void Print()
{
	static int i = 0;
	i++;
	printf("%d\n", i);
}
//����ȫ�ֱ���
//extern int a;err
//���κ���
//extern int add(int x, int y);

int main()
{
	//printf("%d", a);
	//Print();
	//Print();
	//Print();
	printf("%d", add(20, 20));

	return 0;
}