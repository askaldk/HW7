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
	err = fopen_s(&fptr, "E:\\homework\\10\\107360233_������\\output.txt", "a");
	printf("�п�J�r��A���UENTER�䵲����J:\n");
	while ((ch = getchar()) !='\n'&&i<MAX)
	{
		str[i++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");

}