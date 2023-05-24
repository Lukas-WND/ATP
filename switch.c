#include <stdio.h>

void main(){
    char op, cont = 's';
    float num1, num2, result = 0;

    while(cont == 's'){
        printf("Informe o primeiro numero: ");
        scanf("%f", &num1);

        printf("\nInforme a operacao que deseja realizar (+, -, * ou /): ");
        scanf(" %c", &op);

        printf("\nInforme o segundo numero: ");
        scanf("%f", &num2);

        switch(op){
            case '+':
                result = num1 + num2;
                printf("\nO resultado de %.2f %c %.2f eh: %.2f\n", num1, op, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("\nO resultado de %.2f %c %.2f eh: %.2f\n", num1, op, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("\nO resultado de %.2f %c %.2f eh: %.2f\n", num1, op, num2, result);
                break;
            case '/':
                if(num2 == 0){
                    printf("\nNao eh possivel dividir por 0");
                } else {
                    result = num1 / num2;
                    printf("\nO resultado de %.2f %c %.2f eh: %.2f\n", num1, op, num2, result);
                }
                break;
            default:
                printf("\nPor favor, selecione uma opcao valida!");
                main();
        }
            printf("\n\nDeseja continuar calculando? \nDigite 's' para continuar\n");
            scanf(" %c", &cont);

        }

}
