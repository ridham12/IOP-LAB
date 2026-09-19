#include <stdio.h>
int main(){
    for (int i = 65; i <= 69; i++){
        for(int x = 69; x >= i; x--){
            printf(" ");
        }
        for (int j = 65; j <= i; j++){
            printf("%c", i);
        }
        printf("\n");
    }
}