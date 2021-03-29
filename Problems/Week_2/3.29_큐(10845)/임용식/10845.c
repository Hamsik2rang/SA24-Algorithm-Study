#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef int		BOOL;
typedef struct _queue
{
	int container[10000];
	int front;
	int rear;
} Queue;

void	Push(Queue* q, const int data);
int		Pop(Queue* q);
int		Size(const Queue* q);
BOOL	Empty(const Queue* q);
int		Front(const Queue* q);
int		Back(const Queue* q);

int main()
{
	Queue q = { {0},0,0 };
	int n;
	scanf("%d", &n);

	while (n--)
	{
		char command[6] = "";
		scanf("%s", command);
		
		if (!strcmp(command, "push"))
		{
			int data = 0;
			scanf("%d", &data);
			Push(&q, data);
		}
		else if (!strcmp(command, "pop"))
		{
			printf("%d\n", Pop(&q));
		}
		else if (!strcmp(command, "size"))
		{
			printf("%d\n", Size(&q));
		}
		else if (!strcmp(command, "empty"))
		{
			printf("%d\n", Empty(&q));
		}
		else if (!strcmp(command, "front"))
		{
			printf("%d\n", Front(&q));
		}
		else if (!strcmp(command, "back"))
		{
			printf("%d\n", Back(&q));
		}
	}


	return 0;
}

void Push(Queue* q, const int data)
{
	q->container[q->rear++] = data;
}

int Pop(Queue* q)
{
	if (q->front == q->rear)
	{
		return -1;
	}
	return q->container[q->front++];
}

int Size(const Queue* q)
{
	return q->rear - q->front;
}

BOOL Empty(const Queue* q)
{
	return Size(q) ? FALSE : TRUE;
}

int Front(const Queue* q)
{
	if (Empty(q))
	{
		return -1;
	}
	return q->container[q->front];
}
int Back(const Queue* q)
{
	if (Empty(q))
	{
		return -1;
	}
	return q->container[q->rear - 1];
}
