#include <stdio.h>
int main() {
    int time = 31558150; 
    int days = time / 86400;
    int hours = (time % 86400) / 3600;
    int minutes = (time % 3600) / 60;
    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    return 0;
}