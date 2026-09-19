#include <stdio.h>
int main() {
    int n, check = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            check = 1;
            break;
        }
    }
    if (check == 1) {
        printf("%d is not a prime number", n);
    } else {
        printf("%d is a prime number", n);
    }
}