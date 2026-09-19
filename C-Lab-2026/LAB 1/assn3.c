#include <stdio.h>
int main(){
    int gross = 0;
    char *types[] = {"Basic Salary", "HRA", "OA", "Bonus"};
    int values[4];
    for (int i = 0; i < 4; i++){
        printf("Enter %s: ", types[i]);
        scanf("%d", &values[i]);
        gross += values[i];
    }
    printf("Gross Salary: %d\n", gross);
    return 0;
}

    

