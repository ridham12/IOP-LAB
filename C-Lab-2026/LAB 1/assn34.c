#include <stdio.h>
// Fibonacci series in C
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, c, i;
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}