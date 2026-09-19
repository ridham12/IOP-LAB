#include <stdio.h>
int main() {
    int n, power, calc=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &power);
    for (int i = 0; i<power; i++){
        calc = calc * n;

    }
    printf("%d raised to the power %d is: %d", n, power, calc);
    return 0;
    
}
