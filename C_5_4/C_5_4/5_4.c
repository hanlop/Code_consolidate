#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//使用调试窗口中的内存窗口，看数组arr的变化
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	//给数组元素赋值
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//		//scanf("%d", &arr[i]);
//	}
//
//	//打印数组的内容
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//Release版本的可执行程序比Debug版本的可执行程序小很多


//函数递归
//错误的递归范例
//
//递归太多导致栈溢出(Stack overflow)
//int main()
//{
//	printf("you can\n");
//	main();
//
//	return 0;
//}

//加入限制条件
//int i = 0;
//int main()
//{
//
//	i++;
//	if (i == 10)
//	{
//		return 0;
//	}
//
//	main();
//	printf("han\n");
//
//}

//使用递归求n的阶乘
int Fac(int n)
{
	if (n == 0)
	{
		return 1;
	}

	return n * Fac(n - 1);//n的阶乘= n*（n-1）！
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fac(n);
	printf("%d", ret);

	return 0;
}