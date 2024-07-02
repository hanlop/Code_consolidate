#define _CRT_SECURE_NO_WARNINGS 1
//字符分类函数

#include <stdio.h>
#include <ctype.h>
//void test1()
//{
//	if (iscntrl('\n'))
//	{
//		printf("是控制字符");
//	}
//	else
//	{
//		printf("不是控制字符");
//	}
//}
//void test2()
//{
//	if (isspace(' '))
//	{
//		printf("nnn");
//	}
//}
//void test3()
//{
//
//	if (isxdigit('A'))
//	{
//		printf("是16进制");
//	}
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	char str[100];
//	int i = 0;
//
//	fgets(str, sizeof(str), stdin);
//
//	while (str[i])
//	{
//		if (islower(str[i]))
//		{
//			str[i] = toupper(str[i]);
//		}
//		i++;
//	}
//
//	printf("%s", str);
//
//	return 0;
//}


//int main() {
//    char str[100];
//    int i = 0;
//
//    // 提示用户输入一个字符串
//    printf("请输入一个字符串：");
//    fgets(str, sizeof(str), stdin);
//
//    // 将字符串中的小写字母转换为大写字母
//    while (str[i]) {
//        str[i] = toupper(str[i]);
//        i++;
//    }
//
//    // 输出转换后的字符串
//    printf("转换后的字符串：%s\n", str);
//
//    return 0;
//}
#include <string.h>
//int main()
//{
//	char str[10] = "sdasd";
//	int num=strlen(str);
//
//	printf("%d", num);
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "abcd";
//	char str2[] = { 'a','b','c','d' };
//
//	printf("str1的长度: %d\n", strlen(str1));
//	printf("str2的长度: %d\n", strlen(str2));
//
//	return 0;
//}
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//int main()
//{
//	char str1[] = "abcd";
//	printf("str1的长度: %zd\n", my_strlen(str1));
//
//	return 0;
//}

//int main()
//{
//	char str1[] = {'a','b','c'};
//	char str2[20];
//
//	strcpy(str2, str1);//err错误,源字符串无'\0'
//	printf("%s", str2);
//
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//
//	return ret;
//}
//int main()
//{
//	char str1[] = "world";
//	char str2[20] = "hello ";
//
//	my_strcat(str2, str1);
//	printf("%s", str2);
//
//	return 0;
//}
//
//int main()
//{
//	char str1[] = "da";
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;
//    while (*dest != '\0')
//    {
//        *dest = *src;
//        if (*src == '\0')
//            break;
//        dest++;
//        src++;
//    }
//
//    return ret;
//}
//int main()
//{
//    char src[] = "Hello, World!";
//    char dest[20];
//
//    // 复制字符串
//    my_strcpy(dest, src);
//
//    printf("复制后的目标字符串: %s\n", dest);
//
//    return 0;
//}

//int my_strcmp(const char* dest, const char* src)
//{
//	while (*dest!='\0'&&*src!='\0')
//	{
//		if (*dest > *src)
//		{
//			return 1;
//		}
//		else if (*dest < *src)
//		{
//			return -1;
//		}
//
//		dest++;
//		src++;
//	}
//
//	if (*src == 0 && *dest == 0)
//	{
//		return 0;
//	}
//	else if (*dest == '\0')
//	{
//		return -1;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abcd";
//
//	printf("%d", my_strcmp(str1, str2));
//
//	return 0;
//}

//strncpy的使用
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		if (*src != '\0')
//		{
//			*dest = *src;
//			src++;
//		}
//		else
//		{
//			*dest = '\0';
//		}
//
//		dest++;
//	}
//
//	return ret;
//}
//int main()
//{
//	char str1[] = "hello";
//	char str2[20];
//	
//	my_strncpy(str2, str1, 8);
//	str2[5] = '\0';
//
//	printf("%s", str2);
//	return 0;
//}

int main()
{
	char str1[20] = "hello";
	char str2[] = "worldd";

	strncat(str1, str2, 10);
	printf("%s", str1);

	return 0;
}