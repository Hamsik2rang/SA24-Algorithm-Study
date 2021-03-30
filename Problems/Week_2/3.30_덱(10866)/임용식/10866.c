#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int BOOL;
typedef struct _deque Deque;

#define LENGTH 20000
#define TRUE 1
#define FALSE 0

struct _deque
{
	int container[LENGTH];
	int front;
	int rear;
};

void PushFront(Deque* const, const int);
void PushBack(Deque* const, const int);
int PopFront(Deque* const);
int PopBack(Deque* const);
int Size(const Deque* const);
BOOL Empty(const Deque* const);
int Front(const Deque* const);
int Back(const Deque* const);

int main()
{
	Deque dq = { {0},LENGTH / 2 - 1,LENGTH / 2 };

	int n;
	scanf("%d", &n);

	while (n--)
	{
		char command[16] = "";
		scanf("%s", command);

		if (0 == strcmp(command, "push_front"))
		{
			int data = 0;
			scanf("%d", &data);
			PushFront(&dq, data);
		}
		else if (0 == strcmp(command, "push_back"))
		{
			int data = 0;
			scanf("%d", &data);
			PushBack(&dq, data);
		}
		else if (0 == strcmp(command, "pop_front"))
		{
			printf("%d\n", PopFront(&dq));
		}
		else if (0 == strcmp(command, "pop_back"))
		{
			printf("%d\n", PopBack(&dq));
		}
		else if (0 == strcmp(command, "size"))
		{
			printf("%d\n", Size(&dq));
		}
		else if (0 == strcmp(command, "empty"))
		{
			printf("%d\n", Empty(&dq));
		}
		else if (0 == strcmp(command, "front"))
		{
			printf("%d\n", Front(&dq));
		}
		else if (0 == strcmp(command, "back"))
		{
			printf("%d\n", Back(&dq));
		}
	}

	return 0;
}

void PushFront(Deque* const dq, const int data)
{
	dq->container[dq->front--] = data;
}
void PushBack(Deque* const dq, const int data)
{
	dq->container[dq->rear++] = data;
}
int PopFront(Deque* const dq)
{
	return Empty(dq) ? -1 : dq->container[++dq->front];
}
int PopBack(Deque* const dq)
{
	return Empty(dq) ? -1 : dq->container[--dq->rear];
}

int Size(const Deque* const dq)
{
	return dq->rear - dq->front - 1;
}
BOOL Empty(const Deque* const dq)
{
	return (dq->rear - dq->front == 1) ? TRUE : FALSE;
}
int Front(const Deque* const dq)
{
	return Empty(dq) ? -1 : dq->container[dq->front + 1];
}
int Back(const Deque* const dq)
{
	return Empty(dq) ? -1 : dq->container[dq->rear - 1];
}
