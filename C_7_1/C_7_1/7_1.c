#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//字符指针变量
//int main()
//{
//	char* arr = "abcdef";
//	printf("%s\n", arr);
//
//	//"abcdef"是常量，无法修改
//	//arr[1] = 'a';
//	//printf("%s\n", arr);
//
//	char arr1[] = "abcdef";
//	printf("%s\n", arr1);
//
//	char arr2[] = { 'a','b','c','d' };
//	printf("%s\n", arr2);
//
//	return 0;
//}


//数组指针变量
//存储数组的指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*ptr)[10]=&arr;
//
//	//*ptr是arr也就是首元素的地址
//	
//	printf("%d ", *(*ptr+0));
//	printf("%d ", (*ptr)[1]);
//
//	return 0;
//}


//二维数组传参的本质
//传的是一维数组的指针
//void test(int(*a)[3])
//{
//
//}
//int main()
//{
//	int a = 10;
//	int a1[3][2];
//
//	test(a1);
//
//	return 0;
//}


//函数指针变量
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("add  = %p\n", add);
//	printf("&add = %p\n", &add);
//
//	return 0;
//}

//函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*(ptr[2]))(int, int) = { add,sub };
//
//	printf("%d %d", ptr[0](1, 2), ptr[1](1, 2));
//
//	return 0;
//}

//int main()
//{
//	char a = 'c';
//	char* ptr = &a;
//	*ptr = 'a';
//
//	printf("%c", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* p = &a;
//	//*p = 20;
//	//p = &b;
//	return 0;
//}

#include <stdio.h>
//
//int main() {
//    int arr[5] = { 1, 2, 3, 4, 5 };
//    int(*ptr)[5] = &arr;  // 指针ptr指向数组arr
//
//    // 访问数组元素
//    printf("Element 0: %d\n", (*ptr)[0]);
//    printf("Element 1: %d\n", (*ptr)[1]);
//    printf("Element 2: %d\n", (*ptr)[2]);
//    printf("Element 3: %d\n", (*ptr)[3]);
//    printf("Element 4: %d\n", (*ptr)[4]);
//
//    return 0;
//}

//int add(int a, int b) 
//{
//    return a + b;
//}
//
//int main()
//{
//    int (*func_ptr)(int, int) = add;
//    int result = func_ptr(2, 3); // 调用 add 函数，result 的值为 5
//    printf("%d", result);
//
//    return 0;
//}

//int add(int a, int b)
//{
//    return a + b;
//}
//
//typedef int (*operation)(int, int);
//
//int main()
//{
//    operation func_ptr = add;
//    int result = func_ptr(2, 3); // 调用 add 函数，result 的值为 5
//    printf("%d", result);
//
//    return 0;
//}

//转移表
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int div(int x,int y)
{
	return x / y;
}

int mul(int x, int y)
{
	return x * y;
}

void menu()
{
	printf("******************************\n");
	printf("**********  0.exit  **********\n");
	printf("***** 1.add ******2.sub*******\n");
	printf("******3.div ******4.mul*******\n");
	printf("******************************\n");
}
enum cal
{
	EXIT,
	ADD,
	SUB,
	DIV,
	MUL
};
int main()
{
	menu();
	int(*arr[5])(int, int) = { 0,add,sub,div,mul };//转移表

	int input = 0;
	do {
		input = 0;
		int x = 0;
		int y = 0;

		printf("请输入你需要的操作:");
		scanf("%d", &input);

		if (input != 0&&input>=0&&input<=5)
		{
			printf("请输入需要操作的两个数:");
			scanf("%d %d", &x, &y);
		}

		switch (input)
		{
		case EXIT:
			printf("退出成功\n");
			break;
		case ADD:
			printf("%d\n", arr[ADD](x, y));
			break;
		case SUB:
			printf("%d\n", arr[SUB](x, y));
			break;
		case DIV:
			printf("%d\n", arr[DIV](x, y));
			break;
		case MUL:
			printf("%d\n", arr[MUL](x, y));
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input);


	return 0;
}