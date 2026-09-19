#include <stdio.h>
int main(){
    int n[10], sum=0, pos=0, neg=0, zero=0;
    for(int i=0;i<10;i++){
        printf("Enter a number: ");
        scanf("%d", &n[i]);
    }

    for(int i=0;i<10;i++){
        if(n[i]>0){
            pos++;
        }
        else if(n[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);  
    printf("Zero numbers: %d\n", zero);
}