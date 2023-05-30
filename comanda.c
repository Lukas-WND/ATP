#include <stdio.h>
#include <string.h>

int main(){

    int menuComanda = 1, classItem, qntItens, espetinho, bebida, acompanhamento, itemCancelado, opcaoCupom = 0, count = 0, pedidos[100]; //o array pedidos[100] será utilizado para incrementar os itens pedidos pelo cliente
    float pagamento, troco, subTotal = 0, total = 0;
    char cupom[15], //este array irá armazenar o cupom de desconto informado pelo cliente
        cupom1[] = "ALUNOIFAM10", //os seguintes arrays são as strings de cupons de desconto
        cupom2[] = "ALUNOIFAM20",
        cupom3[] = "ALUNOIFAM30";

    printf("Bem vindo ao restaurante Espetinhos do IFAM!\n");
    while(menuComanda != 0){ //esta variável armazena as opções da comanda, sendo 0 a opção de encerrar o programa
        printf("Informe a acao desejada: \n");
        printf("1 - Incluir item\n");
        printf("2 - Fechar comanda\n");
        printf("3 - Nova comanda\n");
        printf("4 - Cancelar Item\n");
        printf("0 - Sair do programa\n");
        scanf("%d", &menuComanda);

        qntItens = 1;

        switch(menuComanda){
            case 1:
                system("cls"); //função utilizada para limpar a tela
                printf("Selecione o item que deseja incluir: \n");
                printf("1 - Espetinhos\n");
                printf("2 - Bebidas\n");
                printf("3 - Acompanhamentos\n");
                scanf("%d", &classItem);

                switch(classItem){ //Aqui é feita uma classificação de itens, sendo eles espetinhos, bebidas e acompanhamentos
                    case 1:
                        system("cls");
                        printf("------------------MENU DE ESPETINHOS----------------\n");
                        printf("1 - Espetinho de Alcatra ------------------- R$12.00\n");
                        printf("2 - Espetinho de Fraldinha ----------------- R$11.00\n");
                        printf("3 - Espetinho de Picanha ------------------- R$15.00\n");
                        printf("4 - Espetinho de Patinho ------------------- R$12.00\n");
                        printf("5 - Espetinho de Frango -------------------- R$9.00\n");
                        printf("6 - Espetinho de Linguica ------------------ R$9.00\n");
                        printf("7 - Espetinho Misto ------------------------ R$10.00\n");
                        scanf("%d", &espetinho);
                        printf("Qual quantidade voce deseja?\n");
                        scanf("%d", &qntItens);

                        switch(espetinho){
                            case 1:
                                system("cls");
                                printf("Espetinho de Alcatra adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+i] = 1; //o array pedidos na posição count irá armazenar o valor 1, que é a referência para Espetinho de Alcatra, e assim por diante
                                }
                                count -= qntItens-1;
                                subTotal += (12.0*qntItens); //Ao sub total é incrementado o valor correspondente ao item pedido
                            break;

                            case 2:
                                system("cls");
                                printf("Espetinho de Fraldinha adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+1] = 2;
                                }
                                count -= qntItens-1;
                                subTotal += (11.0*qntItens);
                            break;

                            case 3:
                                system("cls");
                                printf("Espetinho de Picanha adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+1] = 3;
                                }
                                count -= qntItens-1;
                                subTotal += (15.0*qntItens);
                            break;

                            case 4:
                                system("cls");
                                printf("Espetinho de Patinho adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+1] = 4;
                                }
                                count -= qntItens-1;
                                subTotal += (12.0*qntItens);
                            break;

                            case 5:
                                system("cls");
                                printf("Espetinho de Frango adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+1] = 5;
                                }
                                count -= qntItens-1;
                                subTotal += (9.0*qntItens);
                            break;

                            case 6:
                                system("cls");
                                printf("Espetinho de Linguica adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+1] = 6;
                                }
                                count -= qntItens-1;
                                subTotal += (9.0*qntItens);
                            break;

                            case 7:
                                system("cls");
                                printf("Espetinho Misto adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+1] = 7;
                                }
                                count -= qntItens-1;
                                subTotal += (10.0*qntItens);
                            break;
                            default:
                                system("cls");
                                printf("Opcao nao identificada!\n");
                            break;
                        }
                    break;

                    case 2:
                        system("cls");
                        printf("-------------------MENU DE BEBIDAS-----------------\n");
                        printf("1 - Agua 350ml ----------------------------- R$3.00\n");
                        printf("2 - Bare lata ------------------------------ R$5.00\n");
                        printf("3 - Guarana Antartica lata ----------------- R$5.00\n");
                        printf("4 - Coca-cola lata ------------------------- R$6.00\n");
                        printf("5 - Fanta Laranja lata --------------------- R$6.00\n");
                        printf("6 - Fanta Uva lata ------------------------- R$6.00\n");
                        printf("7 - Brhama Duplo Malte 600ml --------------- R$10.00\n");
                        printf("8 - Antartica 600ml ------------------------ R$10.00\n");
                        printf("9 - Heineken 600ml ------------------------- R$12.00\n");
                        scanf("%d", &bebida);
                        printf("Qual quantidade voce deseja?\n");
                        scanf("%d", &qntItens);

                        switch(bebida){
                            case 1:
                                system("cls");
                                printf("Agua adicionada!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+i] = 8;
                                }
                                count -= qntItens-1;
                                subTotal += 3;
                            break;
                            case 2:
                                system("cls");
                                printf("Bare lata adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+i] = 9;
                                }
                                count -= qntItens-1;
                                subTotal += 5;
                            break;
                            case 3:
                                system("cls");
                                printf("Guarana Antartica lata adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+i] = 10;
                                }
                                count -= qntItens-1;
                                subTotal += 5;
                            break;
                            case 4:
                                system("cls");
                                printf("Coca-cola lata adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+i] = 11;
                                }
                                count -= qntItens-1;
                                subTotal += 6;
                            break;
                            case 5:
                                system("cls");
                                printf("Fanta Laranja lata adicionado!\n\n");
                                for(int i = 0; i < qntItens; i++){
                                    pedidos[count+i] = 12;
                                }
                                count -= qntItens-1;
                                subTotal += 6;
                            break;
                            case 6:
                                system("cls");
                                printf("Fanta Uva lata adicionado!\n\n");
                                pedidos[count] = 13;
                                subTotal += 6;
                            break;
                            case 7:
                                system("cls");
                                printf("Brhama Duplo Malte 600ml adicionada!\n\n");
                                pedidos[count] = 14;
                                subTotal += 10;
                            break;
                            case 8:
                                system("cls");
                                printf("Antartica 600ml adicionada!\n\n");
                                pedidos[count] = 15;
                                subTotal += 10;
                            break;
                            case 9:
                                system("cls");
                                printf("Heineken 600ml adicionada!\n\n");
                                pedidos[count] = 16;
                                subTotal += 12;
                            break;
                            default:
                                system("cls");
                                printf("Opcao nao identificada!\n\n");
                            break;
                        }
                    break;

                    case 3:
                        system("cls");
                        printf("---------------MENU DE ACOMPANHAMENTOS-------------\n");
                        printf("1 - Arroz ---------------------------------- R$5.50\n");
                        printf("2 - Farofa --------------------------------- R$2.00\n");
                        printf("3 - Vinagrete ------------------------------ R$4.50\n");
                        printf("4 - Queijo coalho -------------------------- R$6.00\n");
                        printf("5 - Vatapa --------------------------------- R$4.50\n");
                        scanf("%d", &acompanhamento);

                        switch(acompanhamento){
                            case 1:
                                system("cls");
                                printf("Arroz adicionado!\n\n");
                                pedidos[count] = 17;
                                subTotal += 5.5;
                            break;
                            case 2:
                                system("cls");
                                printf("Farofa adicionada!\n\n");
                                pedidos[count] = 18;
                                subTotal += 2;
                            break;
                            case 3:
                                system("cls");
                                printf("Vinagrete adicionado!\n\n");
                                pedidos[count] = 19;
                                subTotal += 4.5;
                            break;
                            case 4:
                                system("cls");
                                printf("Queijo Coalho adicionado!\n\n");
                                pedidos[count] = 20;
                                subTotal += 6;
                            break;
                            case 5:
                                system("cls");
                                printf("Vatapa adicionado!\n\n");
                                pedidos[count] = 21;
                                subTotal += 4.5;
                            break;
                            default:
                                system("cls");
                                printf("Opcao nao identificada!\n\n");
                            break;
                        }
                    break;

                    default:
                        system("cls");
                        printf("Opcao nao idenficada, tente novamente!\n");
                        main();
                }
            break;

            case 2:
                system("cls");
                while(1){ //um loop infinito é iniciado
                    printf("Comanda fechada!\n\n");

                    for(int i = 0; i < count; i++){ //este loop tem como objetivo exibir na tela tudo o que foi pedido pelo cliente
                        switch (pedidos[i]){ //ele irá comparar o valor armazenado dentro de cada posição do array pedidos[] com a referência do item pedido pelo cliente
                            case 1:
                                printf("%d - Espetinho de Alcatra ------------------- R$12.00\n", i+1); //Será exibida uma lista dos itens solicitados, começando pelo índice 1
                            break;

                            case 2:
                                printf("%d - Espetinho de Fraldinha ----------------- R$11.00\n", i+1);
                            break;

                            case 3:
                                printf("%d - Espetinho de Picanha ------------------- R$15.00\n", i+1);
                            break;

                            case 4:
                                printf("%d - Espetinho de Patinho ------------------- R$12.00\n", i+1);
                            break;

                            case 5:
                                printf("%d - Espetinho de Frango -------------------- R$9.00\n", i+1);
                            break;

                            case 6:
                                printf("%d - Espetinho de Linguica ------------------ R$9.00\n", i+1);
                            break;

                            case 7:
                                printf("%d - Espetinho Misto ------------------------ R$10.00\n", i+1);
                            break;

                            case 8:
                                printf("%d - Agua 350ml ----------------------------- R$3.00\n", i+1);
                            break;

                            case 9:
                                printf("%d - Bare lata ------------------------------ R$5.00\n", i+1);
                            break;

                            case 10:
                                printf("%d - Guarana Antartica lata ----------------- R$5.00\n", i+1);
                            break;

                            case 11:
                                printf("%d - Coca-cola lata ------------------------- R$6.00\n", i+1);
                            break;

                            case 12:
                                printf("%d - Fanta Laranja lata --------------------- R$6.00\n", i+1);
                            break;

                            case 13:
                                printf("%d - Fanta Uva lata ------------------------- R$6.00\n", i+1);
                            break;

                            case 14:
                                printf("%d - Brhama Duplo Malte 600ml --------------- R$10.00\n", i+1);
                            break;

                            case 15:
                                printf("%d - Antartica 600ml ------------------------ R$10.00\n", i+1);
                            break;

                            case 16:
                                printf("%d - Heineken 600ml ------------------------- R$12.00\n", i+1);
                            break;

                            case 17:
                                printf("%d - Arroz ---------------------------------- R$5.50\n", i+1);
                            break;

                            case 18:
                                printf("%d - Farofa --------------------------------- R$2.00\n", i+1);
                            break;

                            case 19:
                                printf("%d - Vinagrete ------------------------------ R$4.50\n", i+1);
                            break;

                            case 20:
                                printf("%d - Queijo coalho -------------------------- R$6.00\n", i+1);
                            break;

                            case 21:
                                printf("%d - Vatapa --------------------------------- R$4.50\n", i+1);
                            break;

                            default:
                            break;
                        }
                    }

                    printf("\n-----------------------------------------------------\n");
                    printf("Total -------------------------------------- R$%.2f\n\n", subTotal);
                    printf("Deseja utilizar algum cupom de desconto?\n");
                    printf("1 - Sim\n");
                    printf("2 - Nao\n");
                    scanf("%d", &opcaoCupom); //A informação de se o cliente deseja adicionar um cupom de desconto é recebida

                    if(opcaoCupom == 1){
                        printf("\nDigite o seu cupom: ");
                        getchar(); //consome o caracter \n pendente no buffer de entrada
                        fgets(cupom, sizeof(cupom), stdin); //a função fgets recebe três parâmetros: um array, o tamanho desse array e o método que será utilizado para entrada de dados
                        cupom[strcspn(cupom, "\n")] = '\0'; //a posição do array que contém o caracter \n irá receber o valor \0, que indica o final de uma string

                        if(!strcmp(cupom, cupom1)){
                            printf("\nCupom de 10 por cento adicionado!\n");
                            total = subTotal*0.9; //O valor total é atualizado de acordo com o cupom de desconto
                            printf("Valor corrigido: %.2f\n", total);
                        } else if(!strcmp(cupom, cupom2)){
                            printf("\nCupom de 20 por cento adicionado!\n");
                            total = subTotal*0.8;
                            printf("Valor corrigido: %.2f\n", total);
                        } else if(!strcmp(cupom, cupom3)){
                            printf("\nCupom de 30 por cento adicionado!\n");
                            total = subTotal*0.7;
                            printf("Valor corrigido: %.2f\n", total);
                        } else {
                            printf("\nCupom nao reconhecido!\n");
                            count--; //Nessa condicional há uma quebra no loop, o código irá continuar normalmente após a condicional e assim irá ocorrer um incremento indesejado ao final dele, para contornar isso foi feito um decremento na variável de contador
                            break;
                        }

                    } else if(opcaoCupom == 2){
                        printf("\nTudo bem, sem cupom adicionado!\n");
                        total = subTotal; //O valor total continua o mesmo pois não houve cupom de desconto
                    } else {
                        printf("\nOpcao nao identificada, tente novamente!\n");
                        count--;
                        break;
                    }

                    printf("\nInforme o valor do pagamento: ");
                    scanf("%f", &pagamento);

                    if(pagamento >= total){
                        troco = pagamento - total;
                        printf("\nO valor do troco eh de R$%.2f\n", troco);
                        printf("Obrigado por comprar no Espetinho do IFAM, volte sempre!\n\n");
                        count--;
                        break;
                    } else {
                        printf("\nO valor do pagamento eh menor que o total, por favor pague corretamente!\n\n");
                    }
                }
            break;

            case 3: //essa opção irá zerar todas as alterações feitas, pedidos, total e o contador do loop
                for(int i = 0; i <= count; i++){
                    pedidos[i] = 0;
                }
                count = 0;
                total = 0;
                system("cls");
                printf("Tudo bem, uma nova comanda foi iniciada!\n");
            break;

            case 4:
                system("cls");
                printf("Informe o item que deseja cancelar!\n");

                for(int i = 0; i < count; i++){ //este loop tem como objetivo exibir na tela tudo o que foi pedido pelo cliente
                    switch (pedidos[i]){ //ele irá comparar o valor armazenado dentro de cada posição do array pedidos[] com a referência do item pedido pelo cliente
                        case 1:
                            printf("%d - Espetinho de Alcatra ------------------- R$12.00\n", i+1); //Será exibida uma lista dos itens solicitados, começando pelo índice 1
                        break;

                        case 2:
                            printf("%d - Espetinho de Fraldinha ----------------- R$11.00\n", i+1);
                        break;

                        case 3:
                            printf("%d - Espetinho de Picanha ------------------- R$15.00\n", i+1);
                        break;

                        case 4:
                            printf("%d - Espetinho de Patinho ------------------- R$12.00\n", i+1);
                        break;

                        case 5:
                            printf("%d - Espetinho de Frango -------------------- R$9.00\n", i+1);
                        break;

                        case 6:
                            printf("%d - Espetinho de Linguica ------------------ R$9.00\n", i+1);
                        break;

                        case 7:
                            printf("%d - Espetinho Misto ------------------------ R$10.00\n", i+1);
                        break;

                        case 8:
                            printf("%d - Agua 350ml ----------------------------- R$3.00\n", i+1);
                        break;

                        case 9:
                            printf("%d - Bare lata ------------------------------ R$5.00\n", i+1);
                        break;

                        case 10:
                            printf("%d - Guarana Antartica lata ----------------- R$5.00\n", i+1);
                        break;

                        case 11:
                            printf("%d - Coca-cola lata ------------------------- R$6.00\n", i+1);
                        break;

                        case 12:
                            printf("%d - Fanta Laranja lata --------------------- R$6.00\n", i+1);
                        break;

                        case 13:
                            printf("%d - Fanta Uva lata ------------------------- R$6.00\n", i+1);
                        break;

                        case 14:
                            printf("%d - Brhama Duplo Malte 600ml --------------- R$10.00\n", i+1);
                        break;

                        case 15:
                            printf("%d - Antartica 600ml ------------------------ R$10.00\n", i+1);
                        break;

                        case 16:
                            printf("%d - Heineken 600ml ------------------------- R$12.00\n", i+1);
                        break;

                        case 17:
                            printf("%d - Arroz ---------------------------------- R$5.50\n", i+1);
                        break;

                        case 18:
                            printf("%d - Farofa --------------------------------- R$2.00\n", i+1);
                        break;

                        case 19:
                            printf("%d - Vinagrete ------------------------------ R$4.50\n", i+1);
                        break;

                        case 20:
                            printf("%d - Queijo coalho -------------------------- R$6.00\n", i+1);
                        break;

                        case 21:
                            printf("%d - Vatapa --------------------------------- R$4.50\n", i+1);
                        break;

                        default:
                        break;
                    }
                }

                scanf("%d", &itemCancelado);

                switch(pedidos[itemCancelado-1]){
                    case 1:
                        subTotal -= 12;
                    break;

                    case 2:
                        subTotal -= 11;
                    break;

                    case 3:
                        subTotal -= 15;
                    break;

                    case 4:
                        subTotal -= 12;
                    break;

                    case 5:
                        subTotal -= 9;
                    break;

                    case 6:
                        subTotal -= 9;
                    break;

                    case 7:
                        subTotal -= 10;
                    break;

                    case 8:
                        subTotal -= 3;
                    break;

                    case 9:
                        subTotal -= 5;
                    break;

                    case 10:
                        subTotal -= 5;
                    break;

                    case 11:
                        subTotal -= 6;
                    break;

                    case 12:
                        subTotal -= 6;
                    break;

                    case 13:
                        subTotal -= 6;
                    break;

                    case 14:
                        subTotal -= 10;
                    break;

                    case 15:
                        subTotal -= 10;
                    break;

                    case 16:
                        subTotal -= 12;
                    break;

                    case 17:
                        subTotal -= 5.5;
                    break;

                    case 18:
                        subTotal -= 2;
                    break;

                    case 19:
                        subTotal -= 4.5;
                    break;

                    case 20:
                        subTotal -= 6;
                    break;

                    case 21:
                        subTotal -= 4.5;
                    break;

                    default:
                    break;
                }

                pedidos[itemCancelado-1] = 0;
                system("cls");
            break;

            case 0:
                system("cls");
                printf("Ate a proxima!\n");
                return 0;
            break;

            default:
                system("cls");
                printf("Opcao nao identificada, tente novamente!\n");
        }
        if(menuComanda == 1 || menuComanda == 2 || menuComanda == 3){ //caso uma das opções disponíveis no menu seja selecionada, o contador será incrementado
            count++;
        }
    }

    return 0;
}
