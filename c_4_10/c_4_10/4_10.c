#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//占位符的使用
//int main()
//{
//	printf("%d %o %x %#o %#x\n", 10,10,10,10,10);
//	double a = 1.0;
//	float b = 3.14e6;
//	printf("%lf\n", a);
//	printf("%f\n", b);
//
//	//八进制和十六进制的占位符
//	printf("%a and %e\n", b,b);
//	printf("%A and %E\n", b,b);
//
//	//字符占位符
//	printf("%c\n", 'a');
//
//	//地址打印
//	printf("%p\n", &a);
//
//	printf("%%");
//
//	return 0;
//}

//打印中限定宽度
//int main()
//{
//	int a = 10;
//	printf("%5d\n", a);
//	printf("%-5d", a);
//	printf("%-5d\n", a);
//
//	double b = 123.40;
//	printf("%-12lf", b);
//	printf("%12lf", b);
//
//	printf("\n");
//	printf("%12.1lf", b);
//	printf("\n");
//
//	printf("%*.*lf\n", 12, 1, b);
//
//
//	printf("%.5s", "heloohahahah");
//
//	return 0;
//}

//scanf函数的使用
//int main()
//{
//	//int a, b, c;
//	//float d = 1.0;
//	////scanf("%d     %f	%d	%d", &a, &d, &b, &c);
//	////printf("%d %f %d %d", a, d, b, c);
//
//	////scanf有返回值
//	//int num = scanf("%d",&a);
//	//printf("%d", num);
//
//	//scanf("%[1-10]d", a);err%[]用在字符中
//	//printf("%d\n", a);
//
//	//占为符%c不会忽略空白字符
//	char d = 'a';
//
//	scanf("%c", &d);
//	printf("%c", d);
//
//	return 0;
//}

//条件操作符
//int main()
//{
//	printf("%s", 18 > 16 ? "谈恋爱" : "不谈恋爱");
//
//	return 0;
//}

//switch语句
//switch(这里面需要整型表达式)
//case 这里需要整型常量
//字符属于整型家族 使用时需要加上''
//int main()
//{
//	int day = 0;
//	printf("请输入数字:");
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char jud = 'c';
//	scanf("%c", &jud);
//
//	switch (jud)
//	{
//	case 'a':
//		printf("这是字符a\n");
//		break;
//	case 'b':
//		printf("这是字符b\n");
//		break;
//	}
//
//	return 0;
//}

//continue
int main()
{
	int a = 0;
	while (a < 10)
	{
		//造成死循环后面语句没有使用
		if (a == 5)
			continue;

		printf("%d ", a);
		a++;
	}

	return 0;
}