#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int));
//
//	printf("%d", *arr);
//
//	return 0;
//}
//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}
//
//int main()
//{
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//
//	if (ptr == NULL)
//		return 1;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ptr[i] = i * 2;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//
//	int* temp=(int*)realloc(ptr, sizeof(int) * 20);
//	if (temp == NULL)
//	{
//		printf("空间增加失败\n");
//	}
//	else {
//		ptr = temp;
//	}
//
//
//	for (i = 0; i < 20; i++)
//	{
//		ptr[i] = i * 2;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//
//
//
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}


//变长数组的使用
struct flex_arry {
	int num;
	int arr[];
};
int main()
{
	int num_ele = 10;
	struct flex_arry* ptr = (struct flex_arry*)malloc(sizeof(struct flex_arry) + sizeof(int) * 10);
	if (ptr = NULL)
		return 1;

	ptr->num = num_ele;

	int i = 0;
	for (i = 0; i < ptr->num; i++)
	{
		ptr->arr[i] = i * 10;
	}

	for (i = 0; i < ptr->num; i++)
	{
		printf("%d ", ptr->arr[i]);
	}

	free(ptr);
	ptr = NULL;

	return 0;
}