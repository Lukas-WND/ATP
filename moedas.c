#include <stdio.h>

void somaMoeda(int *total){
    *total = *total + 1;
}

void diminuiMoeda(int *total){
    *total = *total - 1;
}

int main(){
    int moedas, opcao;

    printf("Informe a quantidade de moedas: ");
    scanf("%d", &moedas);

    printf("Menu\n");
    printf("1 - Somar moedas\n");
    printf("2 - Diminuir moedas\n");
    printf("3 - Sair do programa\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Adicionando moedas!\n");
            printf("Quantidade anterior: %d\n", moedas);
            somaMoeda(&moedas);
            printf("Quantidade atual: %d\n", moedas);
        break;
        case 2:
            printf("Diminuindo moedas!\n");
            printf("Quantidade anterior: %d\n", moedas);
            diminuiMoeda(&moedas);
            printf("Quantidade atual: %d\n", moedas);
        break;
        case 3:
            printf("Saindo do programa!\n");
            return 0;
        break;
    
        default:
            printf("Opcao nao identificada\n");
        break;
    }
}
