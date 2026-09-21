#include <stdio.h>
int main() {
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", mod);

    return 0;
}