#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		printf("%d ", i);
	}

	return 0;
}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	//��Ŀ����:���ǿ���ͨ��%10ȡ������������һλ
//	//�����ڽ����������10 ��ʱ�������%10���ǾͿ���ȡ�������ڶ�λ
//	//��1234%10 ��ȡ��4 1234/10 �õ�123��ʱ����%10�Ϳ��Եõ�3
//	while (num)//ͨ��num�������ж���������
//	{
//		printf("%d ", num % 10);
//		num /= 10;
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	switch (a)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	default:
//		printf("�޷�ƥ��");
//		break;
//	}
//
//	return 0;
//}
////����һ���������ж��Ƿ�Ϊ�����������������ӡ�������������ӡż����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//	{
//		printf("Ϊż����%d", num);
//	}
//	else
//	{
//		printf("Ϊ������%d", num);
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	//1Ϊ��0Ϊ�٣���c�����з��㶼Ϊ��1����������������
//	printf("���Ϊ:%d\n", a && b);
//	printf("���Ϊ:%d\n", a || b);
//	printf("���Ϊ:%d\n",  !b ); 
//	printf("���Ϊ:%d\n",  !a );
//
//	return 0;
//}

//int main()
//{
//	int res = 0;
//	res = 5 > 3 ? 1 : 0;
//
//	printf("��Ŀ������Ľ���ǣ�%d", res);
//
//	return 0;
//}
//int main()
//{
//	//2>5Ϊ�ٷ���0
//	printf("%d\n", 2 > 5);
//	//5>2Ϊ�淵��1
//	printf("%d\n", 5 > 2);
//
//	return 0;
//}