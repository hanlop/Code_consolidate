#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//不会进位（5不会进位大于5会进位）
//	printf("%.2e\n", 0.0001235);
//	printf("%.2e\n", 0.0001237);
//
//	//会进位
//	printf("%.3f\n", 1.2235);
//
//	printf("%.3s\n", "hellow");
//
//	//有负号则输出负号
//	printf("% 3.2f\n", -1.22);
//	//无负号则输出空格
//	printf("% 3.2f\n", 1.22);
//
//	//0标记
//	printf("%010d", 23);
//	return 0;
//}

//int main()
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%-5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//
//	return 0;
//}

//字符串的修饰符和标记
//#define BLURB "Authentic imitation!"
//int main()
//{
//	printf("[%2s]\n", BLURB);
//	printf("[%24s]\n", BLURB);
//	printf("[%24.5s]\n", BLURB);
//	printf("[%-24.5s]\n", BLURB);
//
//
//	return 0;
//}

//不匹配的的整型转换
//short int的取值范围 32767可取的最大范围
#define PAGES 336
#define WORDS 65618

int main()
{
	//这个不会发生截断 而是在国定的取值范围内进行转换
	printf("%hd %hu\n", PAGES, PAGES);
	printf("%hd %hu\n", -PAGES, -PAGES);

	//%c会以256取模的到的数字 然后将该数字对应ascii码表 转换成相应的字符
	//该过程发生截断
	printf("%d %c", WORDS, WORDS);

	return 0;
}