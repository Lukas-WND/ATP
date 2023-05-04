#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char password[10], correctPassword[10] = "password", c;
    int i = 0, result;

    printf("Digite a senha (max 10 digitos): ");

    while(1){
        c = getch();
        if(c == 13){
            break;
        }
        printf("*");
        password[i] = c;
        i++;
    }
    password[i] = '\0';

    result = strcmp(password, correctPassword);
    if(result == 0){
        printf("\nLogin correto!");
    } else {
        printf("\nSenha incorreta, tente novamente!\n");
        main();
    }
}
