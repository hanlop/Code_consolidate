#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("This code is in file:%s\n", __FILE__);
//	printf("This code is at line:%d\n", __LINE__);
//	printf("This code is compiled on:%s\n", __DATE__);
//	printf("This code is compiled at:%s\n", __TIME__);
//
//#ifdef __STDC__
//	printf("This compiler conforms to the ANSI C standard.\n");
//#else
//	printf("This compiler does not conform to the ANSI C standard.\n");
//#endif
//
//	return 0;
//}

//#define SQUARE(x)  ((x)*(x))
//#define MAX(a,b) ((a)>(b)?(a):(b))
//#define ABS(x) ((x)>0?(x):(-x))

//#define PRINT_VALUES(a, b) do { \
//    printf("a: %d\n", a);       \
//    printf("b: %d\n", b);       \
//} while (0)


//#define FOR(x) do{\
//	printf("��н����\n");\
//	x--;\
//}while(x)
//
//int main()
//{
//	//int a = -10;
//	//printf("%d", ABS(a));
//	int a = 10;
//	FOR(a);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d", SQUARE(a));
//
//	int b = 20;
//	printf("%d", MAX(a,b));
//
//	return 0;
//}
//#define MAX(a, b) ((a) > (b) ? (a) : (b))
//
//int main() {
//    int x = 5, y = 10;
//    printf("Max of %d and %d is %d\n", x, y, MAX(x, y));
//    return 0;
//}'

//#define MAX 10
//#define MAXIMUM_VALUE 100
//
//#define MAXD(MAX) (MAX)*MAX
//
//int main()
//{
//	printf("%d\n", MAX);
//	printf("%d\n", MAXIMUM_VALUE);
//	printf("%d\n", MAXD(10));
//
//	return 0;
//}

#define PRINT(a) printf("The value of " #a " is %d",x)
//int main()
//{
//	int x = 10;
//	PRINT(x);
//
//	return 0;
//}
//int int_add(int x, int y)
//{
//	return x + y;
//}
//
//double double_add(double x, double y)
//{
//	return x + y;
//}
//
//#define FUN(type,x,y) type##_add(x,y)
//int main()
//{
//	int x = FUN(int, 10, 10);
//	double c = FUN(double, 10.5, 10.0);
//
//	printf("%d %lf", x, c);
//
//	return 0;
//}

#include <stdio.h>

//
//void first_function() {
//#define VALUE 10
//
//    printf("VALUE in first_function: %d\n", VALUE); // ��� "VALUE in first_function: 10"
////#undef VALUE
//}
//
//void second_function() {
//#define VALUE 20
//    printf("VALUE in second_function: %d\n", VALUE); // ��� "VALUE in second_function: 20"
//#undef VALUE
//}

//
//int main() {
//    first_function();
//    //second_function();
////#define VALUE 20
//
//#ifdef VALUE
//    printf("VALUE in main: %d\n", VALUE);
//#else
//    printf("VALUE is not defined in main.\n"); // ��� "VALUE is not defined in main."
//#endif
//
//    return 0;
//}
//
//printf(" %d ", 10);
#include <stdio.h>

// ���ݲ�ͬƽ̨���岻ͬ�ĺ�
//#if defined(_WIN32)
//#define PLATFORM_NAME "Windows"
//#include <windows.h> // Windows ƽ̨�ض�ͷ�ļ�
//#elif defined(__linux__)
//#define PLATFORM_NAME "Linux"
//#include <unistd.h> // Linux ƽ̨�ض�ͷ�ļ�
//#elif defined(__APPLE__)
//#define PLATFORM_NAME "Mac OS"
//#include <sys/types.h> // macOS ƽ̨�ض�ͷ�ļ�
//#else
//#define PLATFORM_NAME "Unknown"
//#endif
//
//int main() {
//    // ���ݲ�ͬƽ̨�����ͬ����Ϣ���ض���ϵͳ����
//    printf("Running on %s.\n", PLATFORM_NAME);
//
//    // ƽ̨�ض�����ʾ��
//#if defined(_WIN32)
//    // Windows ƽ̨����
//    DWORD pid = GetCurrentProcessId();
//    printf("Current process ID: %lu\n", pid);
//#elif defined(__linux__)
//    // Linux ƽ̨����
//    pid_t pid = getpid();
//    printf("Current process ID: %d\n", pid);
//#elif defined(__APPLE__)
//    // macOS ƽ̨����
//    pid_t pid = getpid();
//    printf("Current process ID: %d\n", pid);
//#else
//    // δ֪ƽ̨����
//    printf("Platform-specific operations not supported.\n");
//#endif
//
//    return 0;
//}

#include <stdio.h>
//#define DEBUG_MODE
//
//int main()
//{
//#ifdef DEBUG_MODE
//	printf("Debug mode is enabled.\n");
//#endif
//
//	return 0;
//}

#define DEBUG_MODE
#define RELEASE
int main()
{
#ifndef DEBUG_MODE
	printf("Debug mode is enabled.\n");
#elif defined(RELEASE)
	printf("RELEASE mode is enabled.\n");
#endif

	return 0;
}