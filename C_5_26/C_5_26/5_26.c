#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "http:www.baidu.com";
//	char arr2[] = { ':','.' };
//
//	printf("%s\n", strtok(arr1, arr2));
//	printf("%s\n", strtok(NULL, arr2));
//	printf("%s\n", strtok(NULL, arr2));
//	printf("%s\n", strtok(NULL, arr2));
//
//	return 0;
//}
#include <errno.h>
//int main()
//{
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%s\n", strerror(i));
//	//}
//	int arr[] = {2,3,13,4};
//
//
//	printf("%s",strerror(errno));
//
//	return 0;
//}

//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");
//
//	//if (pFile == NULL)
//	//	printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	perror("Error opening file unexist.ent");
//	return 0;
//}
#include <assert.h>
//char* my_strncpy(char* destination, const char* source, size_t num)
//{
//	assert(destination && source);
//	char* ret = destination;
//
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		if (*source != 0)
//		{
//			*destination = *source;
//			destination++;
//			source++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (; i < num; i++)
//	{
//		*destination = '\0';
//		destination++;
//	}
//
//	return ret;
//}
//int main()
//{
//	char arr1[] = "Hello ";
//	char arr2[20] ="xxxxxxxxxxxxxxxx";
//
//	my_strncpy(arr2, arr1, 10);
//	printf("%s", arr2);
//
//	return 0;
//}
//char* my_strncat(char* destination, const char* source, size_t num)
//{
//	char* ret = destination;
//	while (*destination)
//	{
//		destination++;
//	}
//
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		if (*destination++=*source++)
//		{
//			;
//		}
//		else 
//		{
//			break;
//		}
//
//	}
//
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	my_strncat(arr1, arr2, 2);
//	printf("%s", arr1);
//
//	return 0;
//}
//void* my_memcpy(void* destination, const void* source, size_t num)
//{
//	char* s1 = (char*)destination;
//	const char* s2 = (const char*)source;
//
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*s1 = *s2;
//		s1++;
//		s2++;
//	}
//
//	return destination;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6 };
//	int arr2[10] = { 10,20,30 };
//	
//	//memcpy��c�����У��Լ������Լ�û�й涨�Ľ��
//	//�Լ������Լ��Ľ��Ҫʹ��memmove����
//	my_memcpy(arr1+2, arr1, 12);
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}
void* my_memmove(void* destination, const void* source, size_t num)
{
	//destination <source ��ǰ���󿽱�
	//destination >=source �Ӻ���ǰ����

	char* s1 = (char*)destination;
	const char* s2 = (const char*)source;
	
	while (num--)
	{
		if (destination < source)
		{
			*s1 = *s2;
			s1++;
			s2++;
		}
		else
		{
			*(s1+num) = *(s2 + num);
		}
	}

	return destination;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6 };

	my_memmove(arr1+2, arr1, 12);

	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}