#include <stdio.h>
int main(){
    int n[10], sum=0;
    for(int i=0;i<10;i++){
        printf("Enter a number: ");
        scanf("%d", &n[i]);
    }

    for(int i=0;i<10;i++){
        sum = sum + n[i];
    }

    printf("Sum: %d", sum);
}