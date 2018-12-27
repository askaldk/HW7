#include<stdio.h>
#include<stdlib.h>
#define MAX 80

int main()
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	int err;
	err = fopen_s(&fptr,"E:\\homework\\10\\107360233_§õ©ùÁ¾\\output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	system("pause");
}