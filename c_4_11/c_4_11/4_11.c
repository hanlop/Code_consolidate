#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//goto�����ض��������£�
	//������ѭ��
	int i, n, m;
	for (i = 0; i < 100; i++)
	{
		for (n = 0; n < 100; n++)
		{
			for (m = 0; m < 100; m++)
			{
				//�����Ҫ��������Ƕ�׵�ѭ�� ���������뵽������break
				//����break��Ҫһ��һ������ ������� ������goto������һ������
				goto jump;
			}
		}
	}

jump:
	printf("��Ծ�ɹ�\n");

	return 0;
}
//#include <math.h>

//��ӡ����100~200
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����һ����־��Ĭ�������������
//
//		for (j = 2; j <= sqrt(i); j++)//���һ����������������1��������ĸ���֮���Ȼ�п��������������ֵ
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//������������־��Ϊ0
//			}
//		}
//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("��%d������\n", count);
//
//	return 0;
//}
// 

//��ӡ�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)//���Ƴ˷��ھ��������
//	{
//		for (j = 1; j <= i; j++)//���Ƴ˷��ھ��������
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);//%2d���ƶ���
//		}
//		printf("\n");
//	}
//
//	return 0;
//}