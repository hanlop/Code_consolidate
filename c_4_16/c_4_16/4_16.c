#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ӡx�Խ���
//int main()
//{
//	//const int n = 10;
//	//int arr[n];//const���εı��������Ǳ���
//
//	int n = 0;
//	scanf("%d", &n);
//
//	char x[20][20] = { " " };
//
//	int i = 0;
//	int j = 0;
//	//���ƶԽ��߽����ж�
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				x[i][j] = '*';
//			}
//			else if (i == (n - j - 1))
//			{
//				x[i][j] = '*';
//			}
//			else
//			{
//				x[i][j] = ' ';
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%c", x[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//��ӡ������
//int main()
//{
//		char square[20][20] = { ' ' };
//		int n = 0;
//		scanf("%d", &n);
//
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0)
//				{
//					square[i][j] = '*';
//				}
//				else if (i == n - 1)
//				{
//					square[i][j] = '*';
//				}
//				else if (j == 0 && i != 0 && i != n - 1)
//				{
//					square[i][j] = '*';
//				}
//				else if (j == n - 1 && i != 0 && i != n - 1)
//				{
//					square[i][j] = '*';
//				}
//				else
//				{
//					square[i][j] = ' ';
//				}
//			}
//		}
//
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("%c", square[i][j]);
//				printf(" ");
//		
//			}
//			printf("\n");
//		}
//
//	return 0;
//}

//��ת����
//int main()
//{
//	int row = 0;
//	int column = 0;
//	int arr[10][10] = { 0 };
//
//	scanf("%d%d", &row, &column);
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < column; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (j = 0; j < column; j++)
//	{
//		for (i = 0; i < row; i++)
//		{
//			printf("%d", arr[i][j]);
//			printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�������
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//		//���������ǵ�ַ
//	}
//
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//
//		left++;
//		right--;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}

//�������кϲ�
//#define MAX 1000
//int main()
//{
//	int n = 0;
//	int m = 0;
//
//	scanf("%d%d", &n, &m);
//	int one[MAX] = { 0 };
//	int two[MAX] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &one[i]);
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &two[i]);
//	}
//
//	int combine[2 * MAX] = { 0 };
//	int one_point = 0;
//	int two_point = 0;
//
//	for (i = 0; i < m + n ; i++)
//	{
//		//����one_point��two_pointԽ�����
//		if (one_point < n && one[one_point] < two[two_point] && two_point < m)
//		{
//			combine[i] = one[one_point];
//			one_point++;
//		}
//		else if(two_point<m&& one[one_point] >= two[two_point] && one_point < n)
//		{
//			combine[i] = two[two_point];
//			two_point++;
//		}
//		else if (one_point < n)//��two����ȫ�����뵽combine�н�one����ʣ��������η���
//		{
//			combine[i] = one[one_point];
//			one_point++;
//		}
//		else if (two_point < m)//ͬ��
//		{
//			combine[i] = two[two_point];
//			two_point++;
//		}
//
//	}
//
//	for (i = 0; i < m + n ; i++)
//	{
//		printf("%d ", combine[i]);
//	}
//
//
//
//	return 0;
//}

//��ƽ����
//int main()
//{
//	int arr[10] = { 0 };
//	double avg = 0.0;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//
//	avg = sum / 10.0;
//	printf("%lf", avg);
//
//	return 0;
//}

//��������
int main()
{
	int a[5] = { 1,3,4,5,7 };
	int b[5] = { 2,5,7,3,1 };

	int sz = sizeof(a) / sizeof(a[0]);

	int i = 0;
	printf("�ı�ǰ:\n");
	for (i = 0; i < sz; i++)
	{
		printf("a[%d]=%d ", i, a[i]);
	}

	printf("\n");

	for (i = 0; i < sz; i++)
	{
		printf("b[%d]=%d ", i, b[i]);
	}
	printf("\n");

	int temp = 0;
	for (i = 0; i < sz; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	printf("�ı��:\n");
	for (i = 0; i < sz; i++)
	{
		printf("a[%d]=%d ", i, a[i]);
	}

	printf("\n");

	for (i = 0; i < sz; i++)
	{
		printf("b[%d]=%d ", i, b[i]);
	}


	return 0;
}