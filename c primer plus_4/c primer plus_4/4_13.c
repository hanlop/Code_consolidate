#define _CRT_SECURE_NO_WARNINGS 1
#define PRAISE "you are an extraordinary being. "
#include <stdio.h>
#include <string.h>
#include <limits.h>

//��ʾ����
int main()
{
	printf("Maximum int value on this system = %d\n", INT_MAX);

	return 0;
} 
//const�޶���
//int main()
//{
//	const int MONTHS = 12;
//	MONTHS�ı���ֻ���Դ�ӡ�������޸�
//	MONTHS = 13;//err
//
//	printf("%d", MONTHS);
//
//	return 0;
//}
//int main()
//{
//	float a = 31.49;
//	//����������
//	printf("%1.1f", a);
//	
//	return 0;
//}
//sizeof��strlen������
//int main()
//{
//	char name[20];
//	printf("What's your name:");
//
//	//������������ǵ�ַ
//	scanf("%s", name);
//
//	printf("Hello,%s.%s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name), sizeof(name));
//
//	printf("The phrase of praise has %zd letters\n", strlen(PRAISE));
//	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
//
//	return 0;
//}
//int main()
//{
//	char name[20];
//	printf("What's your name:");
//
//	//������������ǵ�ַ
//	scanf("%s", name);
//
//	printf("Hello,%s.%s", name, PRAISE);
//
//
//	return 0;
//}