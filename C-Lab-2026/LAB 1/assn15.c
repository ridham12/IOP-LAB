// Program to read marks of 5 subjects and print division
#include <stdio.h>
int main() {
    int marks[5], total = 0;
    float percentage;
    printf("Enter marks of 5 subjects: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    percentage = (float)total / 5;
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if(percentage >= 60) {
        printf("Division: First Division\n");
    } else if(percentage >= 50) {
        printf("Division: Second Division\n");
    } else if(percentage >= 40) {
        printf("Division: Third Division\n");
    } else {
        printf("Division: Fail\n");
    }
    
    return 0;
}