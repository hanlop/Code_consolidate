#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int (*(*pf))(int,int);
//
//	return 0;
//}

//int main()
//{
//	����һ��ָ����10��Ԫ�ص������ָ�룬
//	����ÿ��Ԫ����һ������ָ�룬
//	�ú����ķ���ֵ��int��������int* ��
//
//	int (*pf)[10];//����ָ��
//	int ((*pf))
//	int (*(*pf)[10])(int*);//����ָ��
//
//	return 0;
//}

//ת�Ʊ����ʵ��
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("*****1.add           2.sub*****\n");
//	printf("*****3.mul           4.div*****\n");
//	printf("************ 0.exit ***********\n");
//	printf("*******************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pf[5])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("��ѡ��Ҫ���еĲ���:");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			ret = pf[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//		else
//		{
//			printf("������������������\n");
//		}
//
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//���������ͬ��ʹ��ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��Ҫ���еĲ���:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//
//���磺
//�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.

//int main()
//{
//	//ͳ������������ÿλ��1
//	//һ����ĳΪ��1��������2n+1
//	//����λ��λ1�����ֳ�һ�飬����1�ķ�Ϊ����һ��
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//
//	//ͳ�ƶ�����������ÿλ��1
//	int count = 0;
//	int judge = 1;//ͨ��judge�ж���λ�ϵ�1λ��2n+1��1
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (arr[j] & (judge << i) == 1)
//			{
//				count++;
//			}
//		}
//
//		if (count % 2 == 1)//��λ�ϵ�1������2n+1
//		{
//			break;
//		}
//	}
//
//	//��Ϊ����
//	int x = 0;
//	int y = 0;
//	for (int n = 0; n < 10; n++)
//	{
//		if (arr[n] & judge == 1)
//		{
//			arr1[x++] = arr[n];
//		}
//		else
//		{
//			arr2[y++] = arr[n];
//		}
//	}
//
//	int ret = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ret ^= arr[i];
//	}
//
//	//���з���
//	int ret1 = ret;
//	int ret2 = ret;
//	for (i = 0; i < 10; i++)
//	{
//		ret1  ^= arr1[i];
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		ret2 ^= arr2[i];
//	}
//
//	printf("%d %d", ret2, ret1);
//
//	return 0;
//}

