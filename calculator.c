#include <stdio.h>
#include <conio.h>

void main(){
    int num1, num2; //declaração das variáveis a serem operadas
    float resultado; //o resultado de uma divisão pode nao ser um número inteiro
    char operador; //variável que irá armazenar o identificador de operações
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("\nDigite a operacao que deseja fazer (+, -, * ou /): ");
    scanf(" %c", &operador); //o espaço vazio é necessário pois o identificador %c não ignora espaços em branco
    printf("\nDigite o outro numero inteiro: ");
    scanf("%d", &num2);
    
    //Estrutura de condicionais para verificar a operação a ser realizada
    if(operador == '+'){
        resultado = num1 + num2;
    } else if(operador == '-'){
        resultado = num1 - num2;
    } else if (operador == '*'){
        resultado = num1 * num2;
    } else if(operador == '/'){
        resultado = (float) num1 / num2;
    } else { //Se o caracter de operador informado não for identificado, o programa irá começar denovo
        printf("\nOperacao nao identificada, tente novamente!\n");
        main();
    }

    printf("O resultado da operacao %d %c %d eh de: %.2f\n", num1, operador, num2, resultado);
}
