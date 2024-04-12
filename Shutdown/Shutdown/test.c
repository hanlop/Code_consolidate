#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//调用system函数所需要包含的头文件
#include <string.h>

int main()
{
	printf("你的电脑将自动关机请输入———韩正新是帅哥，解除关机\n");
	system("shutdown -s -t 120");

	char arr[50];
	while (1)
	{
		scanf("%s", &arr);

		if (strcmp("韩正新是帅哥", arr) == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("密码错误，请重新输入，你的电脑快关机了\n");
		}
	}
	return 0;
}