#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char ch;
	int count = 0;
	int err;


	err = fopen_s(&fptr,"E:\\homework\\10\\107360233_李昂謙\\welcome.txt", "r");
	if (err == NULL)
	{
		while ((ch=getc(fptr))!=EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else
	{
		printf("檔案開啟失敗!!\n");
	}
	system("pause");
}