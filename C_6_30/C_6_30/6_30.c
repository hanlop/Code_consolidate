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
//     声明并初始化一个数组
//    int myArray[5] = { 1, 2, 3, 4, 5 };
//
//     声明一个指向数组第一个元素的指针
//    int* ptr = myArray;
//
//     使用指针访问和修改数组元素
//    printf("Using pointer to access array elements:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("myArray[%d] = %d\n", i, *(ptr + i));  // 使用指针访问数组元素
//    }
//
//     修改数组元素的值
//    *(ptr + 0) = 10;
//    *(ptr + 1) = 20;
//
//    printf("\nAfter modifying array elements using pointer:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("myArray[%d] = %d\n", i, myArray[i]);  // 直接访问数组元素
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
//    int* ptr = &a;     // ptr 是一个指针，指向变量 a
//    int** pptr = &ptr; // pptr 是一个二级指针，指向指针 ptr
//
//    // 打印变量 a 的值
//    printf("Value of a: %d\n", a);
//    printf("Value of a using ptr: %d\n", *ptr);
//    printf("Value of a using pptr: %d\n", **pptr);
//
//    // 修改变量 a 的值
//    **pptr = 20;
//
//    // 打印修改后的值
//    printf("Value of a after modification: %d\n", a);
//
//    return 0;
//}

int main() {
    // 声明一个指针数组并初始化为字符串数组
    char* strArray[] = { "Apple", "Banana", "Cherry", "Date" };

    // 计算数组的大小
    int arraySize = sizeof(strArray) / sizeof(strArray[0]);

    // 打印字符串数组的每个元素
    for (int i = 0; i < arraySize; i++) {
        printf("strArray[%d]: %s\n", i, strArray[i]);
    }

    return 0;
}
