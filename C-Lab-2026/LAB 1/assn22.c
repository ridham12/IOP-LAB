#include <stdio.h>
int main() {
    int n1, fact=1;
    printf("Enter an integer: ");
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d", n1, fact);
    return 0;
}