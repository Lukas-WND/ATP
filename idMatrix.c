#include <stdio.h>

void main(){
    int table = 120;

    for(int i = 0; i < (table*table); i++){
        if(i%table == i/table)){
            printf("1");
        } else {
            printf("0");
        }

        if((i+1)%table == 0){
            printf("\n");
        }
    }
}
