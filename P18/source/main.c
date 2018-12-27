#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in, *out;
	int cnt;
	int err1,err2;
	char str[100];
	err1 = fopen_s(&in, "E:\\homework\\10\\107360233_§õ©ùÁ¾\\welcome.txt", "r");
	err2 = fopen_s(&out, "E:\\homework\\10\\107360233_§õ©ùÁ¾\\output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf_s(in, "%s", str,100);
		if (cnt > 0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
	system("pause");
}