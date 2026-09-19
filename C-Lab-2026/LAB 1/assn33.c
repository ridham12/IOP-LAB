// Program to find max and min out of n numbers
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of no's:  ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter the %d number: ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("The biggest number is: %d\n", max);
    printf("The smallest number is: %d\n", min);
}