#define _CRT_SECURE_NO_WARNINGS 1
#define MINUTE 60
#include <stdio.h>

//1.
//int main()
//{
//	int minute = 0;
//	int hour = 0;
//	int min = 0;//转换后的分钟
//	while (1)
//	{
//		scanf("%d", &minute);
//		if (minute <= 0)
//			break;
//
//		min = minute % MINUTE;
//		hour = minute / MINUTE;
//
//		printf("%dh %dm\n", hour, min);
//	}
//
//
//	return 0;
//}

//2.
int main()
{
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	for (i = n; i <= n + 10; i++)
	{
		printf("%d ", i);
	}

	return 0;
}