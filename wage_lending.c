#include <stdio.h>

void main(){
    float salario, emprestimo, valorParcela, valorLimite;
    int parcelas;

    printf("Informe seu salario: ");
    scanf("%f", &salario);
    printf("\nInforme o valor do emprestimo: ");
    scanf("%f", &emprestimo);
    printf("\nInforme a quantidade de parcelas: ");
    scanf("%d", &parcelas);

    valorParcela = emprestimo/parcelas;
    valorLimite = (salario*30)/100;

    if(valorParcela > valorLimite){
        printf("Valor limite das parcelas: %.2f\n", valorLimite);
        printf("Valor das parcelas: %.2f\n\n", valorParcela);
        printf("Emprestimo Negado!\n");
    } else {
        printf("Valor limite das parcelas: %.2f\n", valorLimite);
        printf("Valor das parcelas : %.2f\n\n", valorParcela);
        printf("Emprestimo Aprovado!\n");
    }
}
