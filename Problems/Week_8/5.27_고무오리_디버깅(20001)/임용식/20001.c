#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 65

int main()
{
	int rubberDuck = 0;

	char start[MAX_STR_LEN] = "";
	scanf("%[^\n]s", start);

	while (1)
	{
		char input[MAX_STR_LEN] = "";
		scanf(" %[^\n]s", input);

		if (!strcmp(input, "����"))
		{
			rubberDuck++;
		}
		else if (!strcmp(input, "������"))
		{
			if (rubberDuck)
			{
				rubberDuck--;
			}
			else
			{
				rubberDuck += 2;
			}
		}
		else
		{
			break;
		}
	}

	printf("%s", (rubberDuck ? "����" : "�������� �����"));

	return 0;
}