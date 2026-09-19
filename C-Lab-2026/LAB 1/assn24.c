#include <stdio.h>
int main() {
    float y,x;
    int n;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n==1){
        y = 1 + x;
    }
    else if (n == 2){
        y = 1 + x / n;

    }
    else if (n == 3){
        y = 1.0;
        for(int i = 1; i<=n; i++){
            y = y *x;
        }
        y = 1 + y;
    }
    else if(n>3 || n<1){
        y = 1 + x * n;
    }
    printf("The value of y is: %f", y);
    return 0;
}