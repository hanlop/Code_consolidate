#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//�����λ��5�����λ����5���λ��
//	printf("%.2e\n", 0.0001235);
//	printf("%.2e\n", 0.0001237);
//
//	//���λ
//	printf("%.3f\n", 1.2235);
//
//	printf("%.3s\n", "hellow");
//
//	//�и������������
//	printf("% 3.2f\n", -1.22);
//	//�޸���������ո�
//	printf("% 3.2f\n", 1.22);
//
//	//0���
//	printf("%010d", 23);
//	return 0;
//}

//int main()
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%-5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//
//	return 0;
//}

//�ַ��������η��ͱ��
//#define BLURB "Authentic imitation!"
//int main()
//{
//	printf("[%2s]\n", BLURB);
//	printf("[%24s]\n", BLURB);
//	printf("[%24.5s]\n", BLURB);
//	printf("[%-24.5s]\n", BLURB);
//
//
//	return 0;
//}

//��ƥ��ĵ�����ת��
//short int��ȡֵ��Χ 32767��ȡ�����Χ
#define PAGES 336
#define WORDS 65618

int main()
{
	//������ᷢ���ض� �����ڹ�����ȡֵ��Χ�ڽ���ת��
	printf("%hd %hu\n", PAGES, PAGES);
	printf("%hd %hu\n", -PAGES, -PAGES);

	//%c����256ȡģ�ĵ������� Ȼ�󽫸����ֶ�Ӧascii��� ת������Ӧ���ַ�
	//�ù��̷����ض�
	printf("%d %c", WORDS, WORDS);

	return 0;
}