#include <stdio.h>
int main() {
    int n, even=0, odd=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i%2==0){
            even = even + i;
            
        }
        else{
            odd =odd+ i;
            
        }
    }
    printf("Sum of even numbers: %d\n", even);
    printf("Sum of odd numbers: %d\n", odd);
}