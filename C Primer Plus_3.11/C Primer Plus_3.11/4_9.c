#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//p1
//int main()
//{
//	//当前系统下int取得的最大值是2,147,483,647
//	//观察上溢现象
//	int a = 2147483648;
//	printf("%d\n", a);
//	//浮点数的上溢
//	float b = 3.14e100 * 100.0f;
//	printf("%f\n", b);
//	//浮点数的下溢
//	float c = 0.1234e-38;
//	printf("%e\n", c);
//	printf("%e\n", c / 10);
//
//
//	return 0;
//}

//p2
//int main()
//{
//	int ascii_num = 0;
//	scanf("%d", &ascii_num);
//
//	printf("%c", ascii_num);
//
//	return 0;
//}

//p3
//略

//p4
//int main()
//{
//	float a = 0;
//
//	printf("Enter a floating-point value:");
//	scanf("%f", &a);
//
//	//以原型打印浮点数
//	printf("fixed-point notation:%f\n",a);
//	//用指数形式打印浮点数a
//	printf("exonential notation:%e\n",a);
//	//用16进制打印浮点数a
//	printf("p notation:%a\n", a);
//
//
//	return 0;
//}

//p5
//int main()
//{
//	int age = 0;
//	double second = 0.0;
//	printf("请输入你的年龄:");
//
//	scanf("%d", &age);
//
//	second = age * 3.156e7;
//	printf("你已经生活了：%e s", second);
//
//	return 0;
//}

//p6
//int main()
//{
//	int quart_number = 0;
//	printf("请输入水的夸脱数:");
//	scanf("%d", &quart_number);
//
//	float gram = 0.0;
//	gram = quart_number * 950;
//
//	double num = 0.0;
//	num = gram / 3.0e-23;
//
//	printf("%d夸脱数的水有%e的水分子: ", quart_number,num);
//
//	return 0;
//}

//p7同理略单位换算即可

//p8
int main()
{
	double cup = 0.0;
	printf("请输入杯数:");

	//double输入时使用lf占位符
	scanf("%lf", &cup);

	printf("%.1f\n", cup);

	printf("%f杯数有%f品脱数\n", cup, cup / 2);
	printf("%f杯数有%f盎司\n", cup, cup *8);
	printf("%f杯数有%f大汤勺\n", cup, cup *8*2);
	printf("%f杯数有%f小汤勺\n", cup, cup * 8 * 2 *3);

	return 0;
}