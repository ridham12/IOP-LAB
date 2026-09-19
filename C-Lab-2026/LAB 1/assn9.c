#include <stdio.h>
int main() {
    int hour, min ,sec;
    int total_seconds;
    printf("Enter hours: ");
    scanf("%d", &hour);
    printf("Enter minutes: "); 
    scanf("%d", &min);
    printf("Enter seconds: ");
    scanf("%d", &sec);
    total_seconds = hour * 3600 + min * 60 + sec;
    printf("Total seconds: %d", total_seconds);
    return 0;
}