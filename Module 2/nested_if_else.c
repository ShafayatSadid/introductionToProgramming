#include <stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("Gorur gosh khabo\n");

        if(tk >= 200){
            printf("Ami burger khabo");
        }
        else{
            printf("khabona.");
        }   
    }
    else{
        printf("ami kisui khabona.");
    }
}