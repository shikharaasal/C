#include <stdio.h>

int main() {
    int number[3];
    int i;

    printf("Enter 3 numbers:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &number[i]);
    }

    printf("\nYou entered:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}