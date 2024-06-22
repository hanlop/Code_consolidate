#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//打开文件
	FILE* pread = fopen("data.txt", "r");
	FILE* pwrite = fopen("data_copy.txt", "w");
	if (pread == NULL||pwrite == NULL)
	{
		perror("fopen");
	}


	int ch = 0;
	while ((ch=fgetc(pread)) != EOF)
	{
		fputc(ch, pwrite);
	}

	//关闭文件
	fclose(pread);
	pread = NULL;

	fclose(pwrite);
	pwrite = NULL;
	return 0;
}