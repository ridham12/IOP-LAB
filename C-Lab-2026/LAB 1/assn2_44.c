#include <stdio.h>

int main() {
    int arr[10];
    int even = 0, repeated = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even++;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i] == arr[j]) {
                repeated++;
                 // count each repeated value once
            }
        }
        printf("%d is repeated %d times\n", arr[i], repeated);
        repeated = 0;
    }

    printf("Total no. of even elements: %d\n", even);

    return 0;
}