#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//�����������ʣ����ڴ�����ռ�
//	//���ڴ������ĸ��ֽڵĿռ䣬���10�����ֵ
//	int a = 10;
//
//	//%p��ӡ��ַ��ռλ����&a �õ�a��������Ӧ�ڴ�ĵ�ַ
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
//	x64(64λ������) 8�ֽ�
//	x86��32λ�����£�4�ֽ�
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
	////�ᱨ����
	//char* a1 = &a;

	int a = 0;
	void* a1 = &a;//���ᱨ����

	//*a1 = 10;//err

	return 0;
}