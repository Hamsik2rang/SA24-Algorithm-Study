#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define max 100

int Size = 0;
void rubduck();
void prob();
int ends();
void prob()
{
	Size++;
}
void rubduck()
{
	if (Size == 0)
	{
		Size += 2;
	}
	else
	{
		Size--;
	}
}
int ends()
{
	return Size;
}

int main()
{
	int result;
	char start[max] = "";
	scanf("%[^\n]s", start);
	for (int i = 0; ; i++)
	{
		char misson[max] = "";
		scanf("%[^\n]s",misson);
		getchar();
		if (strcmp(misson, "����") == 0)
		{
			prob();
		}
		else if (strcmp(misson, "������") == 0)
		{
			rubduck();
		}
		else if (strcmp(misson, "������ ����� ��") == 0)
		{
			result = ends();
			break;
		}
	}
	if (result !=0)
	{
		printf("����");
	}
	if (result == 0)
	{
		printf("�������� �����");
	}
	return 0;
}