#include <stdio.h>
int main() {
    int n, sum=0,x;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n; i=i+2){
        printf("%d ", i);
    }
}