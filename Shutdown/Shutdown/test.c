#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//����system��������Ҫ������ͷ�ļ�
#include <string.h>

int main()
{
	printf("��ĵ��Խ��Զ��ػ������롪������������˧�磬����ػ�\n");
	system("shutdown -s -t 120");

	char arr[50];
	while (1)
	{
		scanf("%s", &arr);

		if (strcmp("��������˧��", arr) == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("����������������룬��ĵ��Կ�ػ���\n");
		}
	}
	return 0;
}