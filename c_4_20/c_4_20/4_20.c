#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	double a = 1.0;
//	printf("%f", a);
//
//	double b;
//	scanf("%lf", &b);
//	printf("%f", b);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	char test = '0';
//	
//	scanf("%d", &test);
//	printf("%d", n);
//	printf("%c", test);
//
//	return 0;
//}

//%c读取时空格的影响
//int main()
//{
//	//都输入     a
//	char a = ' ';
//	scanf("%c",&a);
//	printf("%c", a);
//
//	char b = ' ';
//	scanf("%c", &b);
//	printf("%c", b);
//
//	return 0;
//}

//*号修饰符
//int main()
//{
//	unsigned int width, presision;
//	int number = 256;
//	double weight = 242.5;
//
//	printf("Please enter your width:");
//	scanf("%u", & width);
//	printf("%*d\n", width, number);
//	printf("Please enter your presision");
//	scanf("%u", &presision);
//	printf("%*.*lf", width, presision, weight);
//	
//	return 0;
//}

int main()
{
	int n = 0;
	//跳过相应的输入项
	scanf("%*d %*d %d", &n);
	printf("%d",n);

	return 0;
}