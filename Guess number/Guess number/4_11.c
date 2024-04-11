#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**********************************\n");
	printf("**********************************\n");
	printf("************猜数字游戏*************\n");
	printf("********1.play      0.exit********\n");
	printf("**********************************\n");
	printf("**********************************\n");
}

void game()
{
	//产生随机数
	int guess = rand()%100+1;//产生1~100的随机数
	int num = 0;
	int count = 10;
	//进行判断

	while (count)
	{
		printf("你只有十次次机会,请输入你猜的数:");
		scanf("%d", &num);
		if (guess > num)
		{
			printf("猜小了\n");
		}
		else if (guess < num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		count--;
	}

	if (count == 0)
	{
		printf("次数用完，挑战失败\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你需要进行的操作:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}

	} while (input);

	return 0;
}