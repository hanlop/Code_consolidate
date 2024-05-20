#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//科技兴国  520不如敲代码
#include <string.h>
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	while (*arr != 0)
//	{
//		count++;
//		arr++;
//	}
//
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	//int ret=strlen(arr);
//	//printf("%d", ret);
//
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//
//	return 0;
//}

//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;
//
//	while (*arr1++ = *arr2++)
//		;
//
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "xxxxxxxxx";
//
//	printf("%s\n", arr2);
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

int my_strcmp(const char* arr1, const char* arr2)
{
	while (*arr1!=0||*arr2!=0)
	{
		if (*arr1 > *arr2)
			return 1;
		else if (*arr1 < *arr2)
			return -1;

		arr1++;
		arr2++;
	}

	return 0;
}
int main()
{
	char arr[] = "abdcaa";
	char arr1[] = "abdc";

	int ret=my_strcmp(arr, arr1);
	printf("%d", ret);

	return 0;
}