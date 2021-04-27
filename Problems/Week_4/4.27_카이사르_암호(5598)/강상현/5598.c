#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char word[1000];

    scanf("%s", word);
    int i;
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] > 67) {
            word[i] -= 3;
        }
        else if(word[i] <= 67) {
            word[i] += 23;
        }
    }
    
    int j;

    for (j = 0; word[j] != '\0'; j++) {
        printf("%c", word[j]);
    }

    return 0;
}