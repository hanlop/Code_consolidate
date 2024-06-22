#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("mytest.txt", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("mytest.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	//fgetc返回的就是整型
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//标准输入流和输出流
//stdin与stdout

//int main()
//{
//	fputc('c', stdout);
//	fputc('b', stdout);
//	fputc('a', stdout);
//
//	printf("\n");
//	int ch=fgetc(stdin);
//	printf("%c", ch);
//
//	return 0;
//}

//fgets与fputs
//int main()
//{
//	FILE* pf = fopen("mytest.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fputs("my name is ...\n", pf);
//	fputs("my name is ...\n", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("mytest.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char arr[30] = "xxxxxxxxxxxxxxxxxxxxxxxx";
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	fgets(arr, 20, stdin);
//
//	fputs(arr, stdout);
//
//	return 0;
//}

//fscanf与fprintf
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	/*char arr[10];*/
//	//scanf("%s",arr);
//
//	//printf("%d",1);
//	FILE* pf=fopen("mytest.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct stu s = { "han",18,99.0 };
//	fprintf(pf, "%s %d %lf", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//}

//int main()
//{
//	/*char arr[10];*/
//	//scanf("%s",arr);
//
//	//printf("%d",1);
//	FILE* pf = fopen("mytest.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	struct stu s;
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.score));
//
//	注意转换说明的一致(占位符一致)
//	/*printf("%s %d %f", s.name, s.age, s.score);*/
//	fprintf(stdout, "%s %d %lf\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//}

//sscanf与sprintf
//int main()
//{
//	//char arr[10];
//	//sscanf(arr,"%d %s %f",)
//
//	char arr[20];
//	sprintf(arr, "%d %s %lf", 14, "han", 3.14);
//
//	int a = 0;
//	char copy[20];
//	double f = 0.0;
//
//	sscanf(arr, "%d %s %lf", &a, copy, &f);
//	printf("%s", arr);
//	printf("\n");
//	printf("%d %s %f", a, copy, f);
//
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("mytest.txt", "wb");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int arr[10] = { 10,20,30,40,50,60,70 };
//
//	//写文件
//	fwrite(arr, sizeof(arr) / sizeof(arr[0]), 6, pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("mytest.txt", "rb");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int arr[10] = { 0 };
//
//	//写文件
//	fread(arr, sizeof(arr) / sizeof(arr[0]), 6, pf);
//
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	fputs("abcdef", pf);
//	fseek(pf, 2, SEEK_SET);
//	fputs("haha", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}