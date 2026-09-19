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

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    printf("The biggest number is: %d\n", arr[n-1]);
    printf("The second largest number is: %d\n", arr[n-2]);
}