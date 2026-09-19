#include <stdio.h>
int main() {
    float farh, cel;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &farh);
    cel = (farh - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f", cel);
    return 0;
}