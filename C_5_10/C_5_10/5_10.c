#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#include <stdio.h>
#include <string.h>
//void left_round(char* str1, int time, int len)
//{
//	int i = 0;
//	for (i = 0; i < time; i++)//ƽ�ƴ���
//	{
//		char tmp = str1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)//ÿ��ƽ�ƶ��ٸ�	
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
//	for (i = 0; i < sz; i++)//������ת����
//	{
//		char tmp[10];//�����м��������֤str1ԭ�����ַ�������
//		strcpy(tmp, str1);
//		left_round(tmp, i, sz);//��תtmp��str2�Ƚ�
//
//		if (strcmp(tmp, str2) == 0)//��ת���str1�����str2��ͬ�򷵻�1
//		{
//			return 1;
//		}
//	}
//
//	return 0;//����������ת����µ�str1��str2��ȶ���ͬ���򷵻�0
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

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N)
//void Find(int arr[][3], int k, int a, int b)
//{
//	int x = 0;
//	int y = b - 1;
//
//	while (x < a && y >= 0)
//	{
//		if (arr[x][y] < k)//�ų���
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)//�ų���
//		{
//			y--;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d %d\n", x, y);
//			return;
//		}
//	}
//
//	printf("�Ҳ���\n");
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

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
void  if_mur(int a, int b, int c, int d)
{
	if (a == 1)
	{
		printf("a������\n");
	}
	else if (b == 1)
	{
		printf("b������\n");
	}
	else if (c == 1)
	{
		printf("c������\n");
	}
	else if (d == 1)
	{
		printf("d����\n");
	}
}
int main()
{
	//һ�ν��ĸ����ɷ���Ϊ˵�ѵ��Ǹ�����������˶�ʱ�滰
	int a = 0, b = 0, c = 0, d = 0;
	//0����ɱ�˷���1��Ϊɱ�˷�

	//����ɱ�˷�ֻ��һ���ˣ���a+b+c+d=1ʱΪ��
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

//����Ļ�ϴ�ӡ������ǡ�
//
//1
//1 1
//1 2 1
//1 3 3 1
//����
//��ӡ9��
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
//		int n = 0;//���ƿո���
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