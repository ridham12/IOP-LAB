#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    printf("Enter three integers: ");

    if (scanf("%d %d %d", &n1, &n2, &n3) != 3) {
        printf("Invalid input. Please enter three integers.\n");
        return 1;
    }

    if (n1 >= n2) {
        if (n1 >= n3) {
            printf("%d is the largest number.\n", n1);
        } else {
            printf("%d is the largest number.\n", n3);
        }
    } else {
        if (n2 >= n3) {
            printf("%d is the largest number.\n", n2);
        } else {
            printf("%d is the largest number.\n", n3);
        }
    }

    return 0;
}
