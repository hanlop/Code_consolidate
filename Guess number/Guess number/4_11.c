#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**********************************\n");
	printf("**********************************\n");
	printf("************��������Ϸ*************\n");
	printf("********1.play      0.exit********\n");
	printf("**********************************\n");
	printf("**********************************\n");
}

void game()
{
	//���������
	int guess = rand()%100+1;//����1~100�������
	int num = 0;
	int count = 10;
	//�����ж�

	while (count)
	{
		printf("��ֻ��ʮ�δλ���,��������µ���:");
		scanf("%d", &num);
		if (guess > num)
		{
			printf("��С��\n");
		}
		else if (guess < num)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		count--;
	}

	if (count == 0)
	{
		printf("�������꣬��սʧ��\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����������Ҫ���еĲ���:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);

	return 0;
}