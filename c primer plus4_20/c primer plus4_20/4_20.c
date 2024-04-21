#define _CRT_SECURE_NO_WARNINGS 1
//5.
#include <stdio.h>
#define BOOK "War and Peace"
//int main()
//{
//	float cost = 12.99;
//	float percent = 80.0;
//
//	printf("This copy of \"%s\" sells fot$%.2f\n",BOOK,cost);
//	printf("That is 80%% of list");
//	
//
//	return 0;
//}

//9.
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	float a = 0.0;
//	double b = 0.0;
//	scanf("%f %lf", &a, &b);
//
//	char arr[]="a";
//	scanf("%s", arr);
//
//	char arr1 = "a";
//	int num = 0;
//	scanf("%s %d", arr1, &num);
//
//	scanf("%*s %d", arr1, &num);
//
//	return 0;
//}

//int main()
//{
//	printf("%e ", 123.2321);
//
//	return 0;
//}

//int main()
//{
//	printf("%.4d", 32);
//
//	return 0;
//}

//编程题4.8
//1.
//int main()
//{
//	char surname[30];
//	char givename[30];
//	printf("Please enter your givename:");
//	scanf("%s", &givename);
//
//	printf("Please enter your surname:");
//	scanf("%s", &surname);
//
//	printf("%s,%s", givename, surname);
//
//	return 0;
//}

//2.略同上 注意打印"use \"

//3.
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	scanf("%f %f", &a, &b);
//
//	printf("The input is %.1f or %.1e\n", a, a);
//	printf("The input is %+.3f or %.3E\n", b, b);
//
//	return 0;
//}

//4.略 思路同上

//5.
//int main()
//{
//	float mbs = 0.0;
//	float mb_file = 0.0;
//	scanf("%f %f", &mbs, &mb_file);
//
//	printf("At %.2f megabits per second, a file of %.2f megabytes\n", mbs, mb_file);
//	printf("downloads in %.2f seconds\n", mb_file * 8 / mbs);
//
//	return 0;
//}

//6
#include <string.h>
//int main()
//{
//	char arr1[20];
//	char arr2[20];
//
//	scanf("%s %s", arr1, arr2);
//	int n1 = strlen(arr1);
//	int n2 = strlen(arr2);
//
//	printf("%s %s\n", arr1, arr2);
//	printf("%*d %*d\n", n1, n1, n2, n2);
//	printf("%-*d %-*d\n", n1, n1, n2, n2);
//
//	return 0;
//}

//7.
#include <float.h>
//int main()
//{
//	double a = 1.0 / 3.0;
//	float b = 1.0 / 3.0;
//
//	printf("%.6lf %.6f\n", a, b);
//	printf("%.12lf %.12f\n", a, b);
//	printf("%.16lf %.16f\n", a, b);
//
//	printf("%d %d", FLT_DIG, DBL_DIG);
//
//	return 0;
//}

//8.
//Amercian of standard
#define GALLON 3.785
#define MILE 1.609
int main()
{
	float galon = 0.0;
	float mile = 0.0;
	printf("Please enter the mile of travel and using gasoline quantity:");
	scanf("%f %f", &galon, &mile);
	printf("gallon/mile: %.1f\n",galon/mile);

	printf("liter/kilometer: %.1f\n", (galon * GALLON) / (mile * MILE * 100));
	

	return 0;
}