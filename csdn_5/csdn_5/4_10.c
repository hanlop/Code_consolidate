#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入一个整数，判断是否为奇数，如果是奇数打印是奇数，否则打印偶数。
int main()
{
	int num = 0;
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("为偶数：%d", num);
	}
	else
	{
		printf("为奇数：%d", num);
	}

	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	//1为真0为假，在c语言中非零都为真1可以用其他数代替
//	printf("结果为:%d\n", a && b);
//	printf("结果为:%d\n", a || b);
//	printf("结果为:%d\n",  !b ); 
//	printf("结果为:%d\n",  !a );
//
//	return 0;
//}

//int main()
//{
//	int res = 0;
//	res = 5 > 3 ? 1 : 0;
//
//	printf("三目运算符的结果是：%d", res);
//
//	return 0;
//}
//int main()
//{
//	//2>5为假返回0
//	printf("%d\n", 2 > 5);
//	//5>2为真返回1
//	printf("%d\n", 5 > 2);
//
//	return 0;
//}