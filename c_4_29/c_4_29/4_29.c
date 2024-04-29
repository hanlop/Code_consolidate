#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int a;
//int main()
//{
//	printf("%d", a);//全局变量位初始化，系统自动将其初始化为0 
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
//extern int a;//extern声明外部符号
//static
//修饰局部变量
void Print()
{
	static int i = 0;
	i++;
	printf("%d\n", i);
}
//修饰全局变量
//extern int a;err
//修饰函数
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