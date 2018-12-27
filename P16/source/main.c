#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 80

int main()
{
	FILE*fptr;
	char str[MAX] = { 0 }, ch;
	int i = 0;
	int err;
	err = fopen_s(&fptr, "E:\\homework\\10\\107360233_李昂謙\\output.txt", "a");
	printf("請輸入字串，按下ENTER鍵結束輸入:\n");
	while ((ch = getchar()) !='\n'&&i<MAX)
	{
		str[i++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("pause");

}