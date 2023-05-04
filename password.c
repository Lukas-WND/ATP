#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char password[10], correctPassword[10] = "password", c; //declara duas strings, uma com a senha a ser digitada e outra com a senha correta
    int i = 0, result;

    printf("Digite a senha (max 10 digitos): ");

    while(1){ //loop infinito com objetivo de receber os caracteres de uma string
        c = getch();
        if(c == 13){ //de acordo com a tabela ASCII o numero 13 representa a tecla Enter do teclado
            break; //Se a tecla enter for apertada o loop quebra e o código segue o fluxo normal
        }
        printf("*");
        password[i] = c; //atribui o valor capturado do teclado ao índice do Array dessa String
        i++;
    }
    password[i] = '\0'; //define o último dígito dessa string como '\0'

    result = strcmp(password, correctPassword); //função utilizada para comparar strings, ela retorna 0 se elas forem iguais e 1 se não forem
    if(result == 0){ //condicional para determinar as ações caso a senha esteja correta ou não
        printf("\nLogin correto!");
    } else {
        printf("\nSenha incorreta, tente novamente!\n");
        main();
    }
}
