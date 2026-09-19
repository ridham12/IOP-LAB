#include <stdio.h>
int main() {
    int a = 50, b = 20, c;
    c = a;
    a = b;
    b = c;
    printf("After swapping, value of a = %d\n", a);
    printf("After swapping, value of b = %d\n", b);
    return 0;
}