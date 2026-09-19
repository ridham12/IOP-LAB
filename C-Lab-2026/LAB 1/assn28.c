#include <stdio.h>
int main() {
    int n , x, y,digits = 0, sum=0, mult = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int copy = n;
    int test = n;
    while(n!=0){
        x = n % 10;
        n = n / 10;
        digits++;
        }  

    while(copy!=0){
        y = copy % 10;
        copy = copy / 10;
        for(int i = 0; i<digits; i++){
            mult = mult * y;
        }
        sum = sum + mult;
        mult = 1;
    }
    if(sum == test){
        printf("is an Armstrong number");
    }
    else{
        printf("is not an Armstrong number");
    }
}