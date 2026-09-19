#include <stdio.h>
int main() {
    int total_seconds;
    int hour, min ,sec;
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    hour = total_seconds / 3600;
    min = (total_seconds % 3600) / 60;
    sec = total_seconds % 60;
    printf("Time: %d hours, %d minutes, %d seconds", hour, min, sec);
    return 0;
}