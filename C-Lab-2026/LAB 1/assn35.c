#include <stdio.h>
int main() {
    int n, sum=0,x;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    while(1) {
        x = n % 10;
        sum = sum + x;
        n = n / 10;
        if(n == 0) {
            if(sum >9){
                n = sum;
                sum = 0;
                continue;
            }
            else{
                printf("The sum of the digits is: %d", sum);
                break;
            }
        }
    }
    return 0;
}