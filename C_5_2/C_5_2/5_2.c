#define _CRT_SECURE_NO_WARNINGS 1
//дһ����������������һ���ַ��������ݡ�
#include <stdio.h>
#include <string.h>
//void StrReverse(char* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	char temp = '0';
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[1000];
//	gets(arr);
//
//	//printf("%s\n", arr);
//	size_t len = strlen(arr);
//	StrReverse(arr,len);
//	printf("%s\n", arr);
//
//	return 0;
//}
//void Levogytation(int k, int sz, char* arr)
//{
//	char temp[1000] = { 0 };
//	int i = 0;//������������arr��Ҫ����temp�е�ֵ
//	int j = 0;
//
//	j = sz - k;//����arr��Ҫ����temp�е��ĸ�λ��
//	int n = j;
//	while (n < sz)//�����Ĳ���ȫ������temp��
//	{
//		temp[n] = arr[i];
//		n++;
//		i++;
//	}
//
//	int m = 0;
//	for (m = 0; m < j; m++)//�ٽ�arr��δ����temp�е�ֵ˳�����
//	{
//		temp[m] = arr[i];
//		i++;
//	}
//
//	for (m = 0; m < sz; m++)//��������������temp���·Ż�arr��
//	{
//		arr[m] = temp[m];
//	}
//
//}
//int main()
//{
//	char arr[1000];
//	int k = 0;
//	scanf("%d %s", &k, arr);
//
//	size_t len = strlen(arr);
//	Levogytation(k, len, arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//strlenʵ��
//size_t my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//
//	return count;
//}
//int main()
//{
//	char arr[100];
//	scanf("%s", &arr);
//
//	
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//
//	return 0;
//}

//��������ż��˳��
void Adjust(int* arr, int sz)
{
	int left = 0;//��������λ
	int right = sz - 1;//����ż��λ

	while (left < right)
	{
		//��left����һ��ż��λ��
		while (left < sz && arr[left] % 2 != 0)
		{
			left++;
		}
		
		while (right >= 0 && arr[right] % 2 == 0)
		{
			right--;
		}

		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;

		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	Adjust(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}