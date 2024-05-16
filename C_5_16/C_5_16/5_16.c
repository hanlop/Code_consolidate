#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//变量创建本质，向内存申请空间
//	//向内存申请四个字节的空间，存放10这个数值
//	int a = 10;
//
//	//%p打印地址的占位符，&a 得到a变量所对应内存的地址
//	printf("%p", &a);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* p = &a;
//
//	printf("%p", p);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int* p = &a;
//
//	printf("%p\n", p);
//
//	printf("%d\n", a);
//	*p = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	x64(64位环境下) 8字节
//	x86（32位环境下）4字节
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(int *));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(unsigned*));
//
//	return 0;
//}

//int main()
//{
//	char a1 = ' ';
//	char* a = &a1;
//
//	printf("%p\n", a);
//	printf("%p\n", a+1);
//	
//	int b1 = 1;
//	int* b = &b1;
//
//	printf("%p\n", b);
//	printf("%p\n", b + 1);
//
//	return 0;
//}

int main()
{
	//int a = 0;
	////会报警告
	//char* a1 = &a;

	int a = 0;
	void* a1 = &a;//不会报警告

	//*a1 = 10;//err

	return 0;
}