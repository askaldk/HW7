#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr1, *fptr2;
	int err1, err2;
	char ch;
	err1 = fopen_s(&fptr1, "E:\\homework\\10\\107360233_李昂謙\\welcome.txt", "r");
	err2 = fopen_s(&fptr2, "E:\\homework\\10\\107360233_李昂謙\\output.txt", "w");
	if ((err1 == 0) && (err2 == 0))
	{
		while ((ch=getc(fptr1))!=EOF)
		{
			putc(ch, fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成!!\n");
	}
	else
	{
		printf("檔案開啟失敗!!\n");
	}
	system("pause");
}