#include <stdio.h>
int main() {
    int n , x, y=0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n!=0){
        x = n % 10;
        n = n / 10;
        y = y + x;
        }  
   
    printf("The sum of the digits is: %d", y);}