#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//p1
//int main()
//{
//	//��ǰϵͳ��intȡ�õ����ֵ��2,147,483,647
//	//�۲���������
//	int a = 2147483648;
//	printf("%d\n", a);
//	//������������
//	float b = 3.14e100 * 100.0f;
//	printf("%f\n", b);
//	//������������
//	float c = 0.1234e-38;
//	printf("%e\n", c);
//	printf("%e\n", c / 10);
//
//
//	return 0;
//}

//p2
//int main()
//{
//	int ascii_num = 0;
//	scanf("%d", &ascii_num);
//
//	printf("%c", ascii_num);
//
//	return 0;
//}

//p3
//��

//p4
//int main()
//{
//	float a = 0;
//
//	printf("Enter a floating-point value:");
//	scanf("%f", &a);
//
//	//��ԭ�ʹ�ӡ������
//	printf("fixed-point notation:%f\n",a);
//	//��ָ����ʽ��ӡ������a
//	printf("exonential notation:%e\n",a);
//	//��16���ƴ�ӡ������a
//	printf("p notation:%a\n", a);
//
//
//	return 0;
//}

//p5
//int main()
//{
//	int age = 0;
//	double second = 0.0;
//	printf("�������������:");
//
//	scanf("%d", &age);
//
//	second = age * 3.156e7;
//	printf("���Ѿ������ˣ�%e s", second);
//
//	return 0;
//}

//p6
//int main()
//{
//	int quart_number = 0;
//	printf("������ˮ�Ŀ�����:");
//	scanf("%d", &quart_number);
//
//	float gram = 0.0;
//	gram = quart_number * 950;
//
//	double num = 0.0;
//	num = gram / 3.0e-23;
//
//	printf("%d��������ˮ��%e��ˮ����: ", quart_number,num);
//
//	return 0;
//}

//p7ͬ���Ե�λ���㼴��

//p8
int main()
{
	double cup = 0.0;
	printf("�����뱭��:");

	//double����ʱʹ��lfռλ��
	scanf("%lf", &cup);

	printf("%.1f\n", cup);

	printf("%f������%fƷ����\n", cup, cup / 2);
	printf("%f������%f��˾\n", cup, cup *8);
	printf("%f������%f������\n", cup, cup *8*2);
	printf("%f������%fС����\n", cup, cup * 8 * 2 *3);

	return 0;
}