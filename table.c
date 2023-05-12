#include <stdio.h>

void main(){
    int j = 0, table = 80;

    for(int i = 1; i <= (table*table); i++){

        if(i == (j*table)+(j+1)){
           printf("1");
        } else {
            printf("0");
        }

        if(i%table == 0){
            printf("\n");
            j++;
        }
    }
}
