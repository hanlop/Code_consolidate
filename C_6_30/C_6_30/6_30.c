#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>

//#define my_offsetof(type,num) (size_t)&(((type*)0)->num)
//struct stu
//{
//	int a;
//	char b;
//	double c;
//};
//int main()
//{
//
//	int a1 = (int)my_offsetof(struct stu, a);
//	int a2 = (int)my_offsetof(struct stu, b);
//	int a3 = (int)my_offsetof(struct stu, c);
//
//	printf("%d %d %d", a1, a2, a3);
//
//	return 0;
//}

//#define CHANGE(x) (((x&0x55555555)<<1)+((x&0xaaaaaaaa)>>1))
//int main()
//{
//	int a = 1;
//	printf("%d", CHANGE(a));
//
//	return 0;
//}
//#define INT_PTR int*
//typedef int* int_ptr;
//
//int main()
//{
//	INT_PTR a, b;
//	int_ptr c, d;
//
//
//	return 0;
//}

//void Modify(int* arr, int length)
//{
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	Modify(arr, sizeof(arr) / sizeof(arr[0]));
//
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr = %p\n", arr);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr = %p\n", arr);
//	printf("&arr = %p\n", &arr);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0] + 1);
//	printf("arr = %p\n", arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr = %p\n", &arr);
//	printf("&arr+1 = %p\n", &arr + 1);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//     ��������ʼ��һ������
//    int myArray[5] = { 1, 2, 3, 4, 5 };
//
//     ����һ��ָ�������һ��Ԫ�ص�ָ��
//    int* ptr = myArray;
//
//     ʹ��ָ����ʺ��޸�����Ԫ��
//    printf("Using pointer to access array elements:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("myArray[%d] = %d\n", i, *(ptr + i));  // ʹ��ָ���������Ԫ��
//    }
//
//     �޸�����Ԫ�ص�ֵ
//    *(ptr + 0) = 10;
//    *(ptr + 1) = 20;
//
//    printf("\nAfter modifying array elements using pointer:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("myArray[%d] = %d\n", i, myArray[i]);  // ֱ�ӷ�������Ԫ��
//    }
//
//    return 0;
//}

//void print_length(int arr[])
//{
//	printf("%d", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int length = sizeof(arr) / sizeof(arr[0]);
//	printf("%d ", length);
//
//	print_length(arr);
//
//	return 0;
//}


//int main() {
//    int a = 10;
//    int* ptr = &a;     // ptr ��һ��ָ�룬ָ����� a
//    int** pptr = &ptr; // pptr ��һ������ָ�룬ָ��ָ�� ptr
//
//    // ��ӡ���� a ��ֵ
//    printf("Value of a: %d\n", a);
//    printf("Value of a using ptr: %d\n", *ptr);
//    printf("Value of a using pptr: %d\n", **pptr);
//
//    // �޸ı��� a ��ֵ
//    **pptr = 20;
//
//    // ��ӡ�޸ĺ��ֵ
//    printf("Value of a after modification: %d\n", a);
//
//    return 0;
//}

int main() {
    // ����һ��ָ�����鲢��ʼ��Ϊ�ַ�������
    char* strArray[] = { "Apple", "Banana", "Cherry", "Date" };

    // ��������Ĵ�С
    int arraySize = sizeof(strArray) / sizeof(strArray[0]);

    // ��ӡ�ַ��������ÿ��Ԫ��
    for (int i = 0; i < arraySize; i++) {
        printf("strArray[%d]: %s\n", i, strArray[i]);
    }

    return 0;
}
