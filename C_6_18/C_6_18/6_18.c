#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//ʹ��malloc����ģ�⿪��һ��3 * 5�����Ͷ�ά���飬
//���ٺú�ʹ�ö�ά������±������ʽ�����ʿռ䡣

//int main()
//{
//	int** arr = (int**)malloc(sizeof(int) * 3);
//	int i = 0;
//
//	//�ж��Ƿ񿪱ٳɹ�
//	if (arr == NULL)
//		return 1;
//
//	for (i = 0; i < 3; i++)
//	{
//		arr[i] = (int*)malloc(sizeof(int) * 5);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = i;
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	//�ͷſ��ٵĿռ�
//
//	for (i = 0; i < 3; i++)
//	{
//		free(arr[i]);
//	}
//
//
//
//	return 0;
//}

//ʹ���������֪ʶ��дһ�������жϵ�ǰ�����Ǵ�˻���С��
//�������С�˷���1������Ǵ�˷���0.
union U1
{
	int a1;
	char a;
};
int main()
{
	union U1 judge;
	judge.a1 = 1;

	if (judge.a == 1)
		printf("���");
	else
		printf("С��");

	return 0;
}