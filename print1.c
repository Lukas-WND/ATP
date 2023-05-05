#include <stdio.h>

void main(){
    int qnt;

    printf("Digite quantos 1's devem ser imprimidos na tela: ");
    scanf("%d", &qnt);

    if(qnt > 100){
       printf("Valor nao permitido, maximo 100, tente novamente!\n");
       main();
    } else if(qnt == 0){
        return 0;
    } else {
        for(int i = 1; i <= qnt; i++){
            if(i%10 == 0){
                printf("1\n");
            } else if(i == qnt){
                printf("1");
            } else {
                printf("1-");
            }

        }
    }
}
