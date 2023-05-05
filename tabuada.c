#include <stdio.h>

void main(){
    char operador;
    int soma, sub, mult;
    float div;

    printf("Digite a operacao a qual deseja ver a tabuada (+, -, * ou /): ");
    scanf(" %c", &operador);

    if(operador == '+'){
        for(int i=1; i<=10; i++){
            for(int j=0; j<=10; j++){
                soma = i + j;
                printf("\n%d + %d = %d", i, j, soma);
            }
            printf("\n");
        }
    } else if(operador == '-'){
        for(int i=1; i<=10; i++){
            for(int j=0; j<=10; j++){
                sub = i - j;
                printf("\n%d - %d = %d", i, j, sub);
            }
            printf("\n");
        }
    } else if(operador == '*'){
        for(int i=1; i<=10; i++){
            for(int j=0; j<=10; j++){
                mult = i * j;
                printf("\n%d x %d = %d", i, j, mult);
            }
            printf("\n");
        }
    } else if(operador == '/'){
        for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                div = (float) i / j;
                printf("\n%d / %d = %.2f", i, j, div);
            }
            printf("\n");
        }
    }
}
