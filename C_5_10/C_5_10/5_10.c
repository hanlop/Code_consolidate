#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include <stdio.h>
#include <string.h>
//void left_round(char* str1, int time, int len)
//{
//	int i = 0;
//	for (i = 0; i < time; i++)//平移次数
//	{
//		char tmp = str1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)//每次平移多少个	
//		{
//			str1[j] = str1[j + 1];
//		}
//		str1[j] = tmp;
//	}
//
//}
//
//int if_left_round(char* str1, char* str2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)//控制旋转次数
//	{
//		char tmp[10];//创建中间变量，保证str1原来的字符串不变
//		strcpy(tmp, str1);
//		left_round(tmp, i, sz);//旋转tmp与str2比较
//
//		if (strcmp(tmp, str2) == 0)//旋转后的str1如果与str2相同则返回1
//		{
//			return 1;
//		}
//	}
//
//	return 0;//若将所有旋转情况下的str1与str2相比都不同，则返回0
//}
//int main()
//
//{
//	char str1[10];
//	char str2[10];
//
//	scanf("%s", str1);
//	scanf("%s", str2);
//	int sz = strlen(str1);
//
//	int ret=if_left_round(str1, str2, sz);
//	printf("%d", ret);
//
//	return 0;
//}

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N)
//void Find(int arr[][3], int k, int a, int b)
//{
//	int x = 0;
//	int y = b - 1;
//
//	while (x < a && y >= 0)
//	{
//		if (arr[x][y] < k)//排除行
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)//排除列
//		{
//			y--;
//		}
//		else
//		{
//			printf("找到了，下标是：%d %d\n", x, y);
//			return;
//		}
//	}
//
//	printf("找不到\n");
//}
//
//int main()
//{
//	int arr[3][3] = { {4,9,12},{5,10,13},{6,11,15} };
//	int k = 0;
//	scanf("%d", &k);
//
//	Find(arr, k, 3, 3);
//
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
void  if_mur(int a, int b, int c, int d)
{
	if (a == 1)
	{
		printf("a是凶手\n");
	}
	else if (b == 1)
	{
		printf("b是凶手\n");
	}
	else if (c == 1)
	{
		printf("c是凶手\n");
	}
	else if (d == 1)
	{
		printf("d凶手\n");
	}
}
int main()
{
	//一次将四个嫌疑犯做为说谎的那个，则其余的人都时真话
	int a = 0, b = 0, c = 0, d = 0;
	//0则不是杀人犯，1则为杀人犯

	//由于杀人犯只有一个人，则a+b+c+d=1时为真
	int i = 0;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		if (i == 0)
		{
			a = 1;
			c = 1;
			d = 1;
			d = 0;
			sum = a + b + c + d;
			if (sum == 1)
			{
				if_mur(a, b, c, d);
			}
		}
		if (i == 1)
		{
			a = 0;
			c = 0;
			d = 1;
			d = 0;
			sum = a + b + c + d;
			if (sum == 1)
			{
				if_mur(a, b, c, d);
			}
		}
		if (i == 2)
		{
			a = 0;
			c = 1;
			d = 1;
			d = 0;
			sum = a + b + c + d;
			if (sum == 1)
			{
				if_mur(a, b, c, d);
			}
		}
		if (i == 3)
		{
			a = 0;
			c = 1;
			d = 1;
			sum = a + b + c + d;
			if (sum == 1)
			{
				if_mur(a, b, c, d);
			}
		}
	}


	return 0;
}

//在屏幕上打印杨辉三角。
//
//1
//1 1
//1 2 1
//1 3 3 1
//……
//打印9行
//#define ROW 9
//#define COL 9
//int main()
//{
//	int arr[ROW][COL];
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			arr[i][0] = 1;
//			if (i >= 2 && j > 0 && j < i)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			arr[i][i] = 1;
//		}
//	}
//
//	for (i = 0; i < ROW; i++)
//	{
//		int j = 0;
//		int n = 0;//控制空格数
//		for (n = 0; n < ROW - 1-i; n++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i+1; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}