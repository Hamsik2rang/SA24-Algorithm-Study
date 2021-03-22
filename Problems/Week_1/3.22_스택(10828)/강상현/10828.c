#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_STACK_SIZE 100
#include <string.h>

int stack[MAX_STACK_SIZE];
int space = -1;

void empty() {
    if (space == -1) {
        printf("1\n");
    }
    if (space != -1) {
        printf("0\n");
    }
}

void push(data) {
    space++;
    stack[space] = data;
}

void pop() {
    if (space != -1) {
        int temp = stack[space];
        space--;
        printf("%d\n", temp);
        return 0;
    }
    if (space == -1) {
        printf("-1\n");
    }
}

void size() {
    printf("%d\n", space + 1);
}

void top() {
    if (space != -1) {
        int temp = stack[space];
        printf("%d\n", temp);
    }
    if (space == -1) {
        printf("-1\n");
    }
}

int main() {
    char command[10];
    int num,time;
    scanf("%d", &time);
    int n = 0;

    while (n <= time) {
        scanf("%s %d", &command, &num);
        ++n;
        if (strcmp(command, "push") == 0) {
            int data = num;
            push(data);
        }
        if (strcmp(command, "pop") == 0) {
            pop();
        }
        if (strcmp(command, "size") == 0) {
            size();
        }
        if (strcmp(command, "top") == 0) {
            top();
        }
        if (strcmp(command, "empty") == 0) {
            empty();
        }
    }
}