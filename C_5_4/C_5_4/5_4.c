#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʹ�õ��Դ����е��ڴ洰�ڣ�������arr�ı仯
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	//������Ԫ�ظ�ֵ
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//		//scanf("%d", &arr[i]);
//	}
//
//	//��ӡ���������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//Release�汾�Ŀ�ִ�г����Debug�汾�Ŀ�ִ�г���С�ܶ�


//�����ݹ�
//����ĵݹ鷶��
//
//�ݹ�̫�ർ��ջ���(Stack overflow)
//int main()
//{
//	printf("you can\n");
//	main();
//
//	return 0;
//}

//������������
//int i = 0;
//int main()
//{
//
//	i++;
//	if (i == 10)
//	{
//		return 0;
//	}
//
//	main();
//	printf("han\n");
//
//}

//ʹ�õݹ���n�Ľ׳�
int Fac(int n)
{
	if (n == 0)
	{
		return 1;
	}

	return n * Fac(n - 1);//n�Ľ׳�= n*��n-1����
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fac(n);
	printf("%d", ret);

	return 0;
}