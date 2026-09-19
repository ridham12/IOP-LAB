#include <stdio.h>
int main(){
    int n1, n2, n3, max;
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max = (n1 > n2) ? n1 : n2;
    max = (max > n3) ? max : n3;
    printf("%d is the largest number", max);
    return 0;
}