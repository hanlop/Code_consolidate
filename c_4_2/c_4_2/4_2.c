#define _CRT_SECURE_NO_WARNINGS 1
//mani函数的几种写法
//int main() int main(void) 
//int main(int argc,char* argv[])

#include <stdio.h>
//声明函数需要在main（）之前声明
//声明函数在main（）函数之前定义函数可以在main（）函数之后
//或者将函数定义直接写在main（）函数之前，不用写其声明
//void print();
//
//int main()
//{
//	print();
//
//	return 0;
//}
//
////void print();
//void print()
//{
//	printf("This is a test");
//}

//2.12 
//p1
//int main()
//{
//	printf("Zheng Han\n");
//	printf("Zheng\n");
//	printf("Han\n");
//	printf("Zheng Han\n");
//
//	return 0;
//}

//p2 略同p1
//p3 计算活了多少天
//月数问题 1 3 5 7 8 10 12 每月有31天
//4 6 9  11每月30天 2月 润29 平28
//闰年 4年一润 百年不润 400年润
//int main()
//{
//	int year_birth = 2004;
//	int month_birth = 1;
//	int day_birth = 12;
//
//	int year_cur = 2024;
//	int month_cur = 4;
//	int day_cur = 2;
//
//	int exist_day = 0;
//	while (year_birth != year_cur || month_birth != month_cur || day_birth != day_cur)
//	{
//		exist_day++;
//		day_birth++;
//
//		if (month_birth == 2)
//		{
//			//闰年分为普通闰年和世纪闰年
//			if ((year_birth % 4 == 0 && year_birth % 100 != 0) || year_birth % 400 == 0)
//			{
//				if (day_birth == 30)
//				{
//					month_birth++;
//					day_birth = 1;
//				}
//			}
//			else
//			{
//				if (day_birth == 29)
//				{
//					month_birth++;
//					day_birth = 1;
//				}
//			}
//
//		}
//		else if (month_birth == 1 || month_birth == 3 ||month_birth == 5 || month_birth == 7 || month_birth == 8|| month_birth == 10 || month_birth == 12)
//		{
//			if (day_birth == 32)
//			{
//				month_birth++;
//				day_birth = 1;
//			}
//		}
//		else
//		{
//			if (day_birth == 31)
//			{
//				month_birth++;
//				day_birth = 1;
//			}
//		}
//
//		if (month_birth == 13)
//		{
//			year_birth++;
//			month_birth = 1;
//		}
//
//	}
//
//	printf("你已经活了%d天", exist_day);
//
//	return 0;
//}

//p4
//void jolly()
//{
//	printf("I want to be a famous entrepreneur\n");
//}
//
//void deny()
//{
//	printf("Nobody can deny\n");
//}
//
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//
//	deny();
//
//	return 0;
//}

//p5略同p4

//p6
//#include <math.h>
//int main()
//{
//	int tose = 10;
//
//	printf("%d\n", tose);
//	printf("2*tose=%d\n",2 * tose);
//	//pow函数返回的是double类型
//	printf("tose^2=%d\n", (int)pow(tose, 2));
//
//	return 0;
//}

//p7略同上
//p8
//函数的嵌套
//void two()
//{
//	printf("two\n");
//}
//void one_three()
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//int main()
//{
//	printf("strating now:\n");
//	one_three();
//	printf("done!\n");
//
//	return 0;
//}

//ASCII表
//A~B 码值 65~90
//a~b 码值 97~122        大小写字母相差32
//0~9 码值 48~57
// 
//int main()
//{
//	int i = 0;
//
//	//0~31是不可见字符
//	for (i = 32; i < 128; i++)
//	{
//		printf("%c ", i);
//	}
//
//	return 0;
//

//int main()
//{
//	int a = 0, b = 12, c = 2;
//	printf("%d-%d-%d\n", a, b, c);
//
//	//转换说明的数量与待打印值的数量不匹配的情况
//	//会随机产生值
//	printf("%d-%d-%d\n", a);
//
//	return 0;
//}

//八进制 和 十六进制打印方式
//octonary hexadecimal 十进制:decimalism
//int main()
//{
//	//int x = 100;
//	//printf("dec=%d oct=%#o hex=%#x \n", x, x, x);
//	//printf("dec=%d oct=%o hex=%x \n", x, x, x);
//
//	return 0;
//}

//整数溢出
//int main()
//{
//	int i = 2147483647;//四字节
//	unsigned j = 4294967295;
//
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	//%u是打印无符号整数
//	printf("%u %u %u\n", j, j + 1, j + 2);
//
//	unsigned int un = 4294967295;//四字节
//	short end = 32767;//两字节
//	long big = 2147483647;//四字节
//	long long bbig = 9223372036854775807;//八字节
//
//	printf("%u %hd %ld %lld", un, end, big, bbig);
//
//	return 0;
//}

//int main()
//{
//	printf("312313\f");
//	printf("Gramps sez,\"a \\ is a backslash.\"\nb ");
//
//	return 0;
//}
//#include <stdbool.h>
//int main()
//{
//	bool a= false;
//	if (a)
//	{
//		printf("真\n");
//	}
//	else
//	{
//		printf("假\n");
//	}
//
//
//	return 0;
//}

//#include <stdint.h>
//#include <inttypes.h>
//
//int main()
//{
//	int32_t a = 45843;
//	printf("%zd\n", sizeof(a));
//
//	//PRId32被"d"替换   
//	printf("%"PRId32"\n", a);
//
//	int_least8_t b = 'a';
//	printf("%zd\n", sizeof(b));
//
//	return 0;
//}

//浮点数精度
//int main()
//{
//	float a = 0.0;
//
//	//long double 后用l或L
//	a = 1.0 * 2.0;//1.0*2.0默认情况下是使用双精度进行乘法 效率会变慢
//	a = 1.0f * 2.0f;//使用f可以让编译器将浮点型常量看成float类型
//	
//	return 0;
//}

//浮点数打印
//int main()
//{
//	float a = 1.0f;
//	double b = 2e+20;
//	long double c = 2e-30;
//
//	printf("%f can be written %e\n", a,a);
//	printf("%f can be written %e\n", b,b);
//	printf("%lf can be written %le\n", c,c);
//
//	return 0;
//}

//浮点值的上溢和下溢
//int main()
//{
//	float toobig = 3.4e38 * 100.0;
//	printf("%e\n", toobig);
//
//	return 0;
//}

//字符所占字节数
//int main()
//{
//	printf("int:%zd\n", sizeof(int));
//	printf("short:%zd\n", sizeof(short));
//	printf("long:%zd\n", sizeof(long));
//	printf("long long:%zd\n", sizeof(long long));
//	printf("float:%zd\n", sizeof(float));
//	printf("double:%zd\n", sizeof(double));
//	printf("long double:%zd\n", sizeof(long double));
//	printf("unsigned int:%zd\n", sizeof(unsigned int));
//	printf("char:%zd\n", sizeof(char));
//
//
//	return 0;
//}

//转移字符
int main()
{
	float salary;
	printf("\aEnter your desired monthly salary:");
	printf(" $________\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is &%.2f a year", salary, salary * 12.0);
	printf("\rGee!\n");

	return 0;
}

