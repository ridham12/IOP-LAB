#include <stdio.h>
int main() {
    int ch;
    int x;
    ch = getchar();
    x = (ch >= 'a' && ch <= 'z')? 1 : 0;
    if(x==1){
        printf("%c is a small letter\n", ch);
    }
    else{
        printf("%c is not a small letter\n", ch);
    }

        return 0;
}