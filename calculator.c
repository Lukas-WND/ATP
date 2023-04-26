#include <stdio.h>
#include <conio.h>

void main(){
    int num1, num2, resultado;
    char operador;
    
    printf("Digite um numero: ");
    scanf("%d", num1);
    printf("\nDigite a operacao que deseja fazer \(+ ou -\): ");
    scanf("%c", operador);
    printf("\nDigite o outro numero: ");
    scanf("%d", num2);
    
    if(operador == "+"){
        resultado = num1+num2;
        printf("\nO resultado da soma eh: %d", resultado);
    } else if(operador == "-"){
        resultado = num1 - num2;
        printf("\no resultado da subtracao eh: %d", resultado);
    }
}
