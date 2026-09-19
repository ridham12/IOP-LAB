#include <stdio.h>
int main() {
    int n , x, y=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int copy = n;

    while(n!=0){
        x = n % 10;
        n = n / 10;
        y = y*10 + x;
        }  
   
    if(y == copy){
        printf("is an palindrome number");
    }
    else{
        printf("is not an palindrome number");
    }
}