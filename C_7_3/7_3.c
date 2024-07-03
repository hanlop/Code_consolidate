#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	char* m1 = (char*)dest;
//	char* m2 = (char*)src;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*m1 = *m2;
//		m1++;
//		m2++;
//	}
//
//	return dest;
//}
#include <stdio.h>
#include <string.h>

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	char* m1 = (char*)dest;
//	char* m2 = (char*)src;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*m1 = *m2;
//		m1++;
//		m2++;
//	}
//
//	return dest;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = {0,0};
//
//	my_memcpy(arr2+1, arr1, 4 * sizeof(int));
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	//分情况src在dest的前面 src从后往前复制给dest
//	//反之则src从前往后
//
//	char* m1 = (char*)dest;
//	char* m2 = (char*)src;
//
//	if (src < dest)
//	{
//		while (num--)
//		{
//			*(m1 + num) = *(m2 + num);
//		}
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*m1 = *m2;
//			m1++;
//			m2++;
//		}
//	}
//
//	return dest;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//
//	my_memmove(arr1 + 2, arr1 + 1, 3 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int str[] = { 1,2,3,4,5 };
//	memset(str, 0, 4);
//	printf("%d", str[0]);
//
//	return 0;
//}

//typedef struct stu
//{
//	char name[10];
//	int age;
//	char sex[10];
//}stu;
//
//int main()
//{
//	stu s1 = { "Han",18,"男" };
//	stu s2 = { "Han",18,"男" };
//
//	int ret=memcmp(&s1, &s1, sizeof(struct stu));
//	printf("%d ", ret);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//
//	return 0;
//}

int main()
{
	int num = 1;
	//通过指针,取出num第一个字节中存储的值
	char* ptr = (char*)&num;
	if (*ptr == 1) {
		printf("小端字节序\n");
	}
	else {
		printf("大端字节序\n");
	}

	return 0;
}