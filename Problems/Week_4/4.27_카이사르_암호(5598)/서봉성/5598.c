#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

char function(char n)
{
	return n +26;
}

void original(char* password)
{
	int len = strlen(password);

	for (int i = 0; i < len; i++)
	{
		char originalcode = *(password + i) - 3;
		if (originalcode < 'A')
			originalcode = function(originalcode);
		printf("%c", originalcode);

	}
}

int main()
{
	char arr[1001];
	scanf("%s", arr);
	original(arr);
	return 0;

}