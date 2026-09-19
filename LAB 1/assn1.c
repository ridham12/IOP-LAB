#include <stdio.h>
int main(){

    int p, n, r;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the number of years: ");
    scanf("%d", &n);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);

    printf("The simple interest is: %d", p*n*r/100);
    return 0;

}