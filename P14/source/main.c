#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char ch;
	int count = 0;
	int err;


	err = fopen_s(&fptr,"E:\\homework\\10\\107360233_������\\welcome.txt", "r");
	if (err == NULL)
	{
		while ((ch=getc(fptr))!=EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
}