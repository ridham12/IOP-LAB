#include <stdio.h>
int main() {
    int a=10, b=20;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %d\n", a);
    printf("After swapping, value of b = %d\n", b);
    return 0;
}