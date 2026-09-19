#include <stdio.h>
int main() {
    int height, base;
    printf("Enter the height of the triangle: ");  
    scanf("%d", &height);
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    printf("The area of the triangle is: %.2f", 0.5 *height * base);
    return 0;
}   