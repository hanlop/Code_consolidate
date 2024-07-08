#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int n=fgetc(stdin);
//
//	fputc(n, stdout);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	printf("%d", a);
//
//	return 0;
//}


//int main() {
//    FILE* file;
//    char buffer[100];
//
//    // 以追加读写模式打开文件
//    file = fopen("example.txt", "a+");
//    if (file == NULL) {
//        perror("无法打开文件");
//        return 1;
//    }
//
//    // 读取文件内容并打印
//    fgets(buffer, sizeof(buffer), file);
//    printf("读取的内容：%s", buffer);
//
//    // 将指针移动到文件末尾，进行写入操作
//    //fseek(file, 0, SEEK_SET);
//    fputs("追加内容!\n", file);
//
//    // 关闭文件
//    if (fclose(file) != 0) {
//        perror("无法关闭文件");
//        return 1;
//    }
//
//    return 0;
//}

//int main()
//{
//	FILE* p = fopen("example.txt", "a+");
//	if (p == NULL)
//	{
//		perror("文件操作失败");
//		return 1;
//	}
//	
//	char* buffer[100] = { 0 };
//	fgets(buffer, sizeof(buffer), p);
//
//
//	printf("%s", buffer);
//
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}


//#include <stdio.h>

//int main() {
//    FILE* file;
//    char buffer[100];
//
//    // 以追加读写模式打开文件
//    file = fopen("example.txt", "a+");
//    if (file == NULL) {
//        perror("无法打开文件");
//        return 1;
//    }
//
//    // 将指针移动到文件开头，写入内容（这不是a+模式的正常使用方式）
//    fseek(file, 0, SEEK_SET);
//    fputs("覆盖原有内容!\n", file);
//
//    // 将指针移动到文件开头，读取文件内容并打印
//    fseek(file, 0, SEEK_SET);
//    while (fgets(buffer, sizeof(buffer), file) != NULL) {
//        printf("读取的内容：%s", buffer);
//    }
//
//    // 关闭文件
//    if (fclose(file) != 0) {
//        perror("无法关闭文件");
//        return 1;
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    FILE* file;
//
//    // 以追加读写模式打开文件
//    file = fopen("example.txt", "a+");
//    if (file == NULL) {
//        perror("无法打开文件");
//        return 1;
//    }
//
//    // 将指针移动到文件开头，读取文件内容并打印
//    fseek(file, 0, SEEK_SET);
//    char buffer[100];
//    fgets(buffer, sizeof(buffer), file);
//    printf("读取的内容：%s", buffer);
//
//    // 将指针移动到文件末尾，追加内容
//    fseek(file, 0, SEEK_END);
//    fputs("追加内容!", file);
//
//    // 关闭文件
//    if (fclose(file) != 0) {
//        perror("无法关闭文件");
//        return 1;
//    }
//
//    return 0;
//}

//int main()
//{
//	写入
//	FILE* pflie = fopen("test.txt", "w+");
//
//	打开文件失败,直接退出程序
//	if (pflie == NULL)
//	{
//		return 1;
//	}
//
//	向文件写入信息
//	fputs("abcdef", pflie);
//
//	 将文件指针重新定位到文件开头
//	fseek(pflie, 0, SEEK_SET);
//
//	char* str1[10] = { 0 };
//	fgets(str1, 6, pflie);
//
//	printf("%s", str1);
//
//	fclose(pflie);
//	pflie = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pflie = fopen("test.txt", "r");
//
//	if (pflie == NULL)
//	{
//		perror("打开文件错误:");
//		return 1;
//	}
//
//	int c = 0;
//	while ((c = fgetc(pflie)) != EOF)
//	{
//		printf("%c", c);
//	}
//
//	fclose(pflie);
//
//	return 0;
//}

//int main()
//{
//	FILE* pflie = fopen("test.txt", "wb");
//
//	if (pflie == NULL)
//	{
//		perror("打开文件错误:");
//		return 1;
//	}
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	fwrite(arr, sizeof(int), 10, pflie);
//
//
//	fclose(pflie);
//
//	return 0;
//}

//int main()
//{
//	FILE* pflie = fopen("test.txt", "rb");
//
//	if (pflie == NULL)
//	{
//		perror("打开文件错误:");
//		return 1;
//	}
//
//	int arr[10] = {0};
//	size_t read_num = fread(arr, sizeof(int), 10, pflie);
//	if (read_num!=10)
//	{
//		perror("读取数据发生错误\n");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	FILE* pflie = fopen("test.txt", "w");
//	
//	if (pflie == NULL)
//	{
//		perror("打开文件错误:");
//		return 1;
//	}
//
//	fprintf(pflie, "我是你爹%s", "你爹我是");
//
//	fclose(pflie);
//
//	return 0;
//}


//int main()
//{
//	//FILE* pflie = fopen("test.txt", "w");
//
//	//if (pflie == NULL)
//	//{
//	//	perror("打开文件错误:");
//	//	return 1;
//	//}
//
//	char arr[100] = { 0 };
//	sprintf(arr, "我是你爹%s", "你爹我是");
//
//	printf("%s", arr);
//
//	//fclose(pflie);
//
//	return 0;
//}


//int main()
//{
//	FILE* pflie = fopen("test.txt", "r");
//
//	if (pflie == NULL)
//	{
//		perror("打开文件错误:");
//		return 1;
//	}
//
//	fseek(pflie, 2, SEEK_SET);
//	char arr[100] = { 0 };
//	fgets(arr, 2, pflie);
//
//	printf("%s", arr);
//
//	rewind(pflie);
//	fgets(arr, 2, pflie);
//	printf("%s", arr);
//
//	int n=ftell(pflie);
//	printf("%d", n);
//
//	fclose(pflie);
//
//	return 0;
//}


//#include <stdio.h>

//int main() {
//    FILE* file = fopen("example.txt", "rb");
//    if (file == NULL) {
//        perror("无法打开文件");
//        return 1;
//    }
//
//    // 将文件指针移动到文件开头之后的 10 个字节处
//    fseek(file, 10, SEEK_SET);
//
//    // 获取文件指针的当前位置
//    long int position = ftell(file);
//    if (position != -1L) {
//        printf("Current position: %ld\n", position);
//    }
//
//    int ch = 0;
//    while ((ch = fgetc(file)) != EOF)
//    {
//
//    }
//
//    if (feof(file))
//    {
//        printf("已经到达结尾");
//    }
//
//    fclose(file);
//    return 0;
//
#include <Windows.h>
int main() {
    FILE* file = fopen("example1.txt", "w");
    if (file == NULL) {
        perror("无法打开文件");
        return 1;
    }


    fputs("刷新缓冲区", file);
    //睡眠10秒,我们这时候看文件中,是没有内容的
    Sleep(10000);
    
    //没刷新缓冲区前.数据不会写到文件中
    fflush(file);
    Sleep(1000);

    //fclose关闭文件的时候,也会刷新缓冲区
    fclose(file);
    return 0;
}