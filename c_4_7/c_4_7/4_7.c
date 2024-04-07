#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char arr[] = "ab";
//	char arr1[] = { 'a','b' };
//
//	printf("%s\n", arr);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;//整型类型
//	float a1 = 1.1;//浮点类型就是通常的小数
//	char a2 = 's';//字符类型
//	_Bool a3 = 0;//布尔类型表真假 0代表假非零代表真 用在条件判断中
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = a++;//a++相当于a+=1
//
//	printf("%d\n", b);
//
//	int c = 0;
//	int d = ++c;//a++相当于a+=1
//
//	printf("%d\n", d);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	float c = 0;
//
//	c = (float)a/ b;
//
//	printf("%f", c);
//
//	return 0;
//}

int a = 10;//全局变量
int main()
{
	{
		int a1 = 2;
	}
	int a2 = 1;//局域变量
	//printf("%d\n", a1);//局域变量只能在当前的作用域下才能使用

	printf("%d\n", a);//全局变量在所有的作用域都可以使用

	return 0;
}