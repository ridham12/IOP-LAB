#include <stdio.h>
int main(){
    int phy, chem, math, hist, iocs, total;
    float percentage;
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chem);
    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &math);
    printf("Enter marks obtained in History: ");
    scanf("%d", &hist);
    printf("Enter marks obtained in IOCS: ");
    scanf("%d", &iocs);
    total = phy + chem + math + hist + iocs;
    percentage = total / 5.0;
    printf("The total marks obtained is: %d\n", total);
    printf("The percentage is: %.2f", percentage);
    return 0;
}