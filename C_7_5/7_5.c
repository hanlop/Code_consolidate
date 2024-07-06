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

// 结构体的定义
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

// 结构体的定义
//题目二(结构体嵌套问题)
//struct s1
//{
//    char a1;//对齐数为1  
//    int b1;//对齐数为4
//    char a2;//对齐数1
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

//修改默认对齐数
#pragma pack(2)//设置默认对齐数为2
struct s1
{
    char a1;//对齐数为1  
    int b1;//对齐数为2
    char a2;//对齐数1
};
#pragma pack()//取消设置的对齐数

//struct s2
//{
//    char a1;//对齐数为1  
//    int b1;//对齐数为2
//    char a2;//对齐数1
//};
//int main()
//{
//    printf("memory size of s1 is %d\n", sizeof(struct s1));
//    printf("memory size of s2 is %d\n", sizeof(struct s2));
//
//	return 0;
//}

//// 定义包含位段的结构体
//struct Flags {
//    unsigned int flag1 : 1;  // 1位
//    unsigned int flag2 : 3;  // 3位
//    unsigned int flag3 : 4;  // 4位
//    unsigned int flag4 : 2;  // 2位
//};
//
//int main() {
//    struct Flags f = { 0 };
//
//    // 设置位段的值
//    f.flag1 = 1;
//    f.flag2 = 5;  // 二进制表示为 101
//    f.flag3 = 10; // 二进制表示为 1010
//    f.flag4 = 3;  // 二进制表示为 11
//
//    // 输出每个位段的值
//    printf("Flag1: %u\n", f.flag1);
//    printf("Flag2: %u\n", f.flag2);
//    printf("Flag3: %u\n", f.flag3);
//    printf("Flag4: %u\n", f.flag4);
//
//    // 输出整个结构体的大小
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
//    printf("联合体的大小:%d", sizeof(u));
//
//    return 0;
//}

//union u1
//{
//    short a1[7];//对齐数为2
//    int a2;//对齐数为4
//};
//
//int main()
//{
//    printf("联合体的大小:%d", sizeof(union u1));
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
//    //联合体的定义和初始化
//
//    union u u1 = { 0 };
//    u1.a2 = 0x11223344;
//
//    printf("未改变a1时a2的值:%x\n", u1.a2);
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
//    //打印两个成员变量的地址
//    printf("a1的地址为:%p\n", &u1.a1);
//    printf("a2的地址为:%p\n", &u1.a2);
//    printf("u1的地址为:%p\n", &u1);
//
//    return 0;
//}


#include <stdio.h>

union Example {
    char a1[7];//对齐数为1  数组的对齐数,看他的类型大小,不看整个数组的大小
    int  a2;//对齐数为4
};

int main() {
    printf("Size of union Example: %zu bytes\n", sizeof(union Example)); // 输出8
    return 0;
}