#include <stdio.h>

void main(){
    int termo, seq = 0;

    printf("Digite um termo: ");
    scanf("%d", &termo);

    for(int i = 0; i < termo; i++){
        seq = 2*(seq-1) + 1;
        printf("%d ", seq);
    }
}
