#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ռλ����ʹ��
//int main()
//{
//	printf("%d %o %x %#o %#x\n", 10,10,10,10,10);
//	double a = 1.0;
//	float b = 3.14e6;
//	printf("%lf\n", a);
//	printf("%f\n", b);
//
//	//�˽��ƺ�ʮ�����Ƶ�ռλ��
//	printf("%a and %e\n", b,b);
//	printf("%A and %E\n", b,b);
//
//	//�ַ�ռλ��
//	printf("%c\n", 'a');
//
//	//��ַ��ӡ
//	printf("%p\n", &a);
//
//	printf("%%");
//
//	return 0;
//}

//��ӡ���޶����
//int main()
//{
//	int a = 10;
//	printf("%5d\n", a);
//	printf("%-5d", a);
//	printf("%-5d\n", a);
//
//	double b = 123.40;
//	printf("%-12lf", b);
//	printf("%12lf", b);
//
//	printf("\n");
//	printf("%12.1lf", b);
//	printf("\n");
//
//	printf("%*.*lf\n", 12, 1, b);
//
//
//	printf("%.5s", "heloohahahah");
//
//	return 0;
//}

//scanf������ʹ��
//int main()
//{
//	//int a, b, c;
//	//float d = 1.0;
//	////scanf("%d     %f	%d	%d", &a, &d, &b, &c);
//	////printf("%d %f %d %d", a, d, b, c);
//
//	////scanf�з���ֵ
//	//int num = scanf("%d",&a);
//	//printf("%d", num);
//
//	//scanf("%[1-10]d", a);err%[]�����ַ���
//	//printf("%d\n", a);
//
//	//ռΪ��%c������Կհ��ַ�
//	char d = 'a';
//
//	scanf("%c", &d);
//	printf("%c", d);
//
//	return 0;
//}

//����������
//int main()
//{
//	printf("%s", 18 > 16 ? "̸����" : "��̸����");
//
//	return 0;
//}

//switch���
//switch(��������Ҫ���ͱ��ʽ)
//case ������Ҫ���ͳ���
//�ַ��������ͼ��� ʹ��ʱ��Ҫ����''
//int main()
//{
//	int day = 0;
//	printf("����������:");
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char jud = 'c';
//	scanf("%c", &jud);
//
//	switch (jud)
//	{
//	case 'a':
//		printf("�����ַ�a\n");
//		break;
//	case 'b':
//		printf("�����ַ�b\n");
//		break;
//	}
//
//	return 0;
//}

//continue
int main()
{
	int a = 0;
	while (a < 10)
	{
		//�����ѭ���������û��ʹ��
		if (a == 5)
			continue;

		printf("%d ", a);
		a++;
	}

	return 0;
}