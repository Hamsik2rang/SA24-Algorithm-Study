#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

typedef struct _Stack
{
	int container[10000];
	int ptr;
}Stack;



void Push(Stack*, const int*);
void Pop(Stack*);
void Size(const Stack* const);
void Empty(const Stack* const);
void Top(const Stack* const);

int main()
{
	Stack st = { {0},0 };
	char command[16]= "";
	int count;
	scanf("%d", &count);
	while (count--)
	{
		scanf("%s", command);

		if (strcmp(command, "push") == 0)
		{
			int data;
			scanf("%d", &data);
			Push(&st, &data);
		}
		else if (strcmp(command, "pop") == 0)
		{
			Pop(&st);
		}
		else if (strcmp(command, "size") == 0)
		{
			Size(&st);
		}
		else if (strcmp(command, "empty") == 0)
		{
			Empty(&st);
		}
		else if (strcmp(command, "top") == 0)
		{
			Top(&st);
		}
	}

	return 0;
}

void Push(Stack* st, const int* data)
{
	st->container[st->ptr++] = *data;
}

void Pop(Stack* st)
{
	if (st->ptr == 0)
	{
		printf("-1\n");
		return;
	}
	printf("%d\n", st->container[--(st->ptr)]);
}

void Size(const Stack* const st)
{
	printf("%d\n", st->ptr);
}

void Empty(const Stack* const st)
{
	printf("%d\n", st->ptr == 0 ? 1 : 0);
}

void Top(const Stack* const st)
{
	if (st->ptr == 0)
	{
		printf("-1\n");
		return;
	}
	printf("%d\n", st->container[(st->ptr) - 1]);
}