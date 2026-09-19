#include <stdio.h>
int main() {
    int n , x, y=0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n!=0){
        x = n % 10;
        n = n / 10;
        y = y*10 + x;
        }  
   
    printf("The reverse of the number is: %d", y);
}