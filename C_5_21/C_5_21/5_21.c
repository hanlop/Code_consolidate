#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* arr1,const char* arr2)
{
	char* ret = arr1;
	assert(arr1 && arr2);
	while (*arr1 != 0)
	{
		arr1++;
	}

	while (*arr2 != 0)
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}

	*arr1 = *arr2;

	return ret;
}
int main()
{
	char arr[20] = "hel\0loadadada ";
	char arr1[20] = "world";

	my_strcat(arr, arr1);
	printf("%s", arr);

	return 0;
}