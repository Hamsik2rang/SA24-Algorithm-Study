#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int stack[10000];
int Size = 0;
void push(int data);
void pop();
int size();
int empty();
int top();
void push(int data)
{
	stack[Size++] = data;
}
void pop()
{
	Size--;
}
int size()
{
	return Size;
}
int empty()
{
	return !Size ? 1 : 0;
}
int top()
{
	return stack[Size - 1];
}

int main()
{
	int order;
	char misson[7];
	int num;
	scanf("%d", &order);
	for (int i = 0; i < order; i++)
	{
		scanf("%s", misson);
		if (strcmp(misson, "push")==0)
		{
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(misson, "pop")==0)
		{
			if (Size != 0)
			{
				pop();
				printf("%d\n", stack[Size]);
			}
			else
			{
				printf("-1\n");
			}
		}
		else if (strcmp(misson, "size")==0)
		{
			int t = size();
			printf("%d\n", t);
		}
		else if (strcmp(misson, "empty")==0)
		{
			int q = empty();
			printf("%d\n", q);
		}
		else if (strcmp(misson, "top")==0)
		{
			if (Size != 0)
			{
				int l = top();
				printf("%d\n", l);
			}
			else
			{
				printf("-1\n");
			}
		}
	}
}