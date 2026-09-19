#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    char exp; 
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &exp);
    switch (exp) {
        case '+':
            printf("%d + %d = %d", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%d - %d = %d", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%d * %d = %d", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%d / %d = %d", n1, n2, n1 / n2);
            break;
        default:
            printf("Invalid operator");
            break;
    }
    return 0;
}