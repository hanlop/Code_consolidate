#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//int main()
//{
//	int soda = 1;
//	
//	int all = 0;
//
//	printf("���������еĶ���Ǯ:");
//	scanf("%d", &all);
//
//	int can = all / soda;
//	printf("����Ժ�%dƿ����;",(int)(can+can*0.5));
//
//
//	return 0;
//}

//ˮ�ɻ���
#include <math.h>
int main()
{
	int i = 0;

	for (i = 0; i <= 100000; i++)
	{
		int temp1 = i;//���������ж���λ����ʱ����
		int sum = 0;
		int cout = 0;//��������м�λ
		int temp2 = i;//��������͵���ʱ����
		while (temp1)
		{
			cout++;
			temp1 /= 10;
		}

		while (temp2)
		{
			sum += pow((temp2 % 10),cout);
			temp2 = temp2 / 10;
		}

		if (sum == i)
		{
			printf("%d ", sum);
		}
	}

	return 0;
}