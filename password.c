#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char password[10], correctPassword[10] = "password", c;
    int i = 0;

    printf("Digite a senha \(max 10 digitos\): ");

    while(1){
        c = getch();
        if(c == 13){
            break;
        }
        password[i] = c;
        i++;
    }

    if(password[0] == correctPassword[0] &&
       password[1] == correctPassword[1] &&
       password[2] == correctPassword[2] &&
       password[3] == correctPassword[3] &&
       password[4] == correctPassword[4] &&
       password[5] == correctPassword[5] &&
       password[6] == correctPassword[6] &&
       password[7] == correctPassword[7] &&
       password[8] == correctPassword[8] &&
       password[9] == correctPassword[9]){
        printf("\nLogin successfuly!\n");
    }
    else {
        printf("\nIncorrect password, try again!\n");
        main();
    }
}
