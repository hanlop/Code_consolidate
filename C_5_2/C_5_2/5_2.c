#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，可以逆序一个字符串的内容。
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
//	int i = 0;//用来控制数组arr中要放入temp中的值
//	int j = 0;
//
//	j = sz - k;//用于arr中要放入temp中的哪个位置
//	int n = j;
//	while (n < sz)//左旋的部分全部放入temp中
//	{
//		temp[n] = arr[i];
//		n++;
//		i++;
//	}
//
//	int m = 0;
//	for (m = 0; m < j; m++)//再将arr中未放入temp中的值顺序放入
//	{
//		temp[m] = arr[i];
//		i++;
//	}
//
//	for (m = 0; m < sz; m++)//最后将左旋后的数组temp重新放回arr中
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

//strlen实现
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

//调整奇数偶数顺序
void Adjust(int* arr, int sz)
{
	int left = 0;//控制奇数位
	int right = sz - 1;//控制偶数位

	while (left < right)
	{
		//让left到第一个偶数位上
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