#define _CRT_SECURE_NO_WARNINGS 1
#define PRAISE "you are an extraordinary being. "
#include <stdio.h>
#include <string.h>
#include <limits.h>

//明示常量
int main()
{
	printf("Maximum int value on this system = %d\n", INT_MAX);

	return 0;
} 
//const限定符
//int main()
//{
//	const int MONTHS = 12;
//	MONTHS改变量只可以打印不可以修改
//	MONTHS = 13;//err
//
//	printf("%d", MONTHS);
//
//	return 0;
//}
//int main()
//{
//	float a = 31.49;
//	//会四舍五入
//	printf("%1.1f", a);
//	
//	return 0;
//}
//sizeof与strlen的区别
//int main()
//{
//	char name[20];
//	printf("What's your name:");
//
//	//数组名本身就是地址
//	scanf("%s", name);
//
//	printf("Hello,%s.%s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name), sizeof(name));
//
//	printf("The phrase of praise has %zd letters\n", strlen(PRAISE));
//	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
//
//	return 0;
//}
//int main()
//{
//	char name[20];
//	printf("What's your name:");
//
//	//数组名本身就是地址
//	scanf("%s", name);
//
//	printf("Hello,%s.%s", name, PRAISE);
//
//
//	return 0;
//}