#include <stdio.h>
int main(){
    char *subjects[] = {"Physics", "Chemistry", "Mathematics", "Entrance"};
    int cutoff = 0, marks[4];
    for (int i = 0; i < 4; i++){
        printf("Enter Marks for %s: ", subjects[i]);
        scanf("%d", &marks[i]);
        if(subjects[i] == "Entrance")
            cutoff += marks[i];
        else   
        cutoff += marks[i]/2;
    }
    printf("Cutoff: %d", cutoff);
    return 0;
}