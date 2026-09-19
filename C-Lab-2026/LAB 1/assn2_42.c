#include <stdio.h>
int main(){
    for (int i = 1; i <= 7; i++){

        if(i<=4){
             for(int x = 4; x >i; x--){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
        }

        else{
            for(int x = 5; x <=i; x++){
            printf(" ");
        }
        for (int j = 7; j >= i; j--){
            printf("* ");
        }
        printf("\n");
        }
       
    // }
}
}