#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{	
	//打开文件
	FILE* pf = fopen("test.txt", "w");

	//写文件
	fputc('c', pf);
	fputc('d', pf);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}