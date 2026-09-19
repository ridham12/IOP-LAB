#include <stdio.h>
int main() {
    int c;
    char ch;
    printf("Enter a character: ");
    c = getchar();
    ch = (char)c;
    printf("The ASCII value of the character '%c' is: %d",ch, c);
    return 0;
}