#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//int main()
//{
//	int soda = 1;
//	
//	int all = 0;
//
//	printf("请输入你有的多少钱:");
//	scanf("%d", &all);
//
//	int can = all / soda;
//	printf("你可以喝%d瓶可乐;",(int)(can+can*0.5));
//
//
//	return 0;
//}

//水仙花数
#include <math.h>
int main()
{
	int i = 0;

	for (i = 0; i <= 100000; i++)
	{
		int temp1 = i;//用来计算有多少位的临时变量
		int sum = 0;
		int cout = 0;//计算该数有几位
		int temp2 = i;//用来计算和的临时变量
		while (temp1)
		{
			cout++;
			temp1 /= 10;
		}

		while (temp2)
		{
			sum += pow((temp2 % 10),cout);
			temp2 = temp2 / 10;
		}

		if (sum == i)
		{
			printf("%d ", sum);
		}
	}

	return 0;
}