#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//struct stu
//	//{
//	//	char name;
//	//};
//	int a;
//	a = 10;
//
//	return 0;
//}

// �ṹ��Ķ���
//typedef struct Person {
//    char name[50];
//    int age;
//    float height;
//}Pe;
//
//int main()
//{
//    Pe person1;
//
//    return 0;
//}

// �ṹ��Ķ���
//��Ŀ��(�ṹ��Ƕ������)
//struct s1
//{
//    char a1;//������Ϊ1  
//    int b1;//������Ϊ4
//    char a2;//������1
//};
//
//struct s2
//{
//    char a1;//1
//    struct s1 b1;//12
//    double c1;//8
//};
//
//
//int main()
//{
//    printf("%d\n", sizeof(struct s2));
//
//    return 0;
//}

//�޸�Ĭ�϶�����
#pragma pack(2)//����Ĭ�϶�����Ϊ2
struct s1
{
    char a1;//������Ϊ1  
    int b1;//������Ϊ2
    char a2;//������1
};
#pragma pack()//ȡ�����õĶ�����

//struct s2
//{
//    char a1;//������Ϊ1  
//    int b1;//������Ϊ2
//    char a2;//������1
//};
//int main()
//{
//    printf("memory size of s1 is %d\n", sizeof(struct s1));
//    printf("memory size of s2 is %d\n", sizeof(struct s2));
//
//	return 0;
//}

//// �������λ�εĽṹ��
//struct Flags {
//    unsigned int flag1 : 1;  // 1λ
//    unsigned int flag2 : 3;  // 3λ
//    unsigned int flag3 : 4;  // 4λ
//    unsigned int flag4 : 2;  // 2λ
//};
//
//int main() {
//    struct Flags f = { 0 };
//
//    // ����λ�ε�ֵ
//    f.flag1 = 1;
//    f.flag2 = 5;  // �����Ʊ�ʾΪ 101
//    f.flag3 = 10; // �����Ʊ�ʾΪ 1010
//    f.flag4 = 3;  // �����Ʊ�ʾΪ 11
//
//    // ���ÿ��λ�ε�ֵ
//    printf("Flag1: %u\n", f.flag1);
//    printf("Flag2: %u\n", f.flag2);
//    printf("Flag3: %u\n", f.flag3);
//    printf("Flag4: %u\n", f.flag4);
//
//    // ��������ṹ��Ĵ�С
//    printf("Size of struct Flags: %zu bytes\n", sizeof(f));
//
//    return 0;
//}
//
//union u1
//{
//    char a1;
//    int a2;
//    int a3;
//};
//
//int main()
//{
//    union u1 u;
//    printf("������Ĵ�С:%d", sizeof(u));
//
//    return 0;
//}

//union u1
//{
//    short a1[7];//������Ϊ2
//    int a2;//������Ϊ4
//};
//
//int main()
//{
//    printf("������Ĵ�С:%d", sizeof(union u1));
//
//    return 0;
//}


//union u
//{
//    char a1;
//    int a2;
//};
//int main()
//{
//    //������Ķ���ͳ�ʼ��
//
//    union u u1 = { 0 };
//    u1.a2 = 0x11223344;
//
//    printf("δ�ı�a1ʱa2��ֵ:%x\n", u1.a2);
//    u1.a1 = 0x88;
//
//    printf("a2:%x\n", u1.a2);
//
//    return 0;
//}
//int main()
//{
//    union u u1;
//    
//    //��ӡ������Ա�����ĵ�ַ
//    printf("a1�ĵ�ַΪ:%p\n", &u1.a1);
//    printf("a2�ĵ�ַΪ:%p\n", &u1.a2);
//    printf("u1�ĵ�ַΪ:%p\n", &u1);
//
//    return 0;
//}


#include <stdio.h>

union Example {
    char a1[7];//������Ϊ1  ����Ķ�����,���������ʹ�С,������������Ĵ�С
    int  a2;//������Ϊ4
};

int main() {
    printf("Size of union Example: %zu bytes\n", sizeof(union Example)); // ���8
    return 0;
}