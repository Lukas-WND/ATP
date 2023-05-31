#include <stdio.h>
#include <string.h>

void exibirItem(int item){ //Método para exibição de itens do cardápio
    switch(item){
        case 1:
            printf("Espetinho de Alcatra ------------------- R$12.00\n"); //Será exibida uma lista dos itens solicitados, começando pelo índice 1
        break;

        case 2:
            printf("Espetinho de Fraldinha ----------------- R$11.00\n");
        break;

        case 3:
            printf("Espetinho de Picanha ------------------- R$15.00\n");
        break;

        case 4:
            printf("Espetinho de Patinho ------------------- R$12.00\n");
        break;

        case 5:
            printf("Espetinho de Frango -------------------- R$9.00\n");
        break;

        case 6:
            printf("Espetinho de Linguica ------------------ R$9.00\n");
        break;

        case 7:
            printf("Espetinho Misto ------------------------ R$10.00\n");
        break;

        case 8:
            printf("Agua 350ml ----------------------------- R$3.00\n");
        break;

        case 9:
            printf("Bare lata ------------------------------ R$5.00\n");
        break;

        case 10:
            printf("Guarana Antartica lata ----------------- R$5.00\n");
        break;

        case 11:
            printf("Coca-cola lata ------------------------- R$6.00\n");
        break;

        case 12:
            printf("Fanta Laranja lata --------------------- R$6.00\n");
        break;

        case 13:
            printf("Fanta Uva lata ------------------------- R$6.00\n");
        break;

        case 14:
            printf("Brhama Duplo Malte 600ml --------------- R$10.00\n");
        break;

        case 15:
            printf("Antartica 600ml ------------------------ R$10.00\n");
        break;

        case 16:
            printf("Heineken 600ml ------------------------- R$12.00\n");
        break;

        case 17:
            printf("Arroz ---------------------------------- R$5.50\n");
        break;

        case 18:
            printf("Farofa --------------------------------- R$2.00\n");
        break;

        case 19:
            printf("Vinagrete ------------------------------ R$4.50\n");
        break;

        case 20:
            printf("Queijo coalho -------------------------- R$6.00\n");
        break;

        case 21:
            printf("Vatapa --------------------------------- R$4.50\n");
        break;

        default:
        break;
    }
}

void exibirCardapio(int tipo){ //Método para exibição do cardápio de acordo com o tipo de item desejado
    switch(tipo){
        case 1:
            system("cls");
            printf("------------------MENU DE ESPETINHOS----------------\n");
            for(int i = 1; i <= 7; i++){
                printf("%d - ", i);
                exibirItem(i);
            }
        break;

        case 2:
            system("cls");
            printf("-------------------MENU DE BEBIDAS-----------------\n");
            for(int i = 1; i <= 9; i++){
                printf("%d - ", i);
                exibirItem(i+7);
            }
        break;

        case 3:
            system("cls");
            printf("---------------MENU DE ACOMPANHAMENTOS-------------\n");
            for(int i = 1; i <= 5; i++){
                printf("%d - ", i);
                exibirItem(i+16);
            }
        break;

        default:
            printf("Erro no sistema\n");
        break;
    }
}

int main(){
    int menu = 1, cont = 0, quantidade, classItem, cancItem, espetinho, bebida, acompanhamento, opcaoDesconto;
    float subtotal = 0, total = 0, pagamento, desconto, troco, cardapio[3][9], pedidos[100][3];
    char cupom[15],
         cupom1[] = "ALUNOIFAM10",
         cupom2[] = "ALUNOIFAM20",
         cupom3[] = "ALUNOIFAM30";

    //Espetinhos
    cardapio[0][0] = 12.0;
    cardapio[0][1] = 11.0;
    cardapio[0][2] = 15.0;
    cardapio[0][3] = 12.0;
    cardapio[0][4] = 9.0;
    cardapio[0][5] = 9.0;
    cardapio[0][6] = 10.0;

    //Bebidas
    cardapio[1][0] = 3.0;
    cardapio[1][1] = 5.0;
    cardapio[1][2] = 5.0;
    cardapio[1][3] = 6.0;
    cardapio[1][4] = 6.0;
    cardapio[1][5] = 6.0;
    cardapio[1][6] = 10.0;
    cardapio[1][7] = 10.0;
    cardapio[1][8] = 12.0;

    //Acompanhamentos
    cardapio[2][0] = 5.5;
    cardapio[2][1] = 2.0;
    cardapio[2][2] = 4.5;
    cardapio[2][3] = 6.0;
    cardapio[2][4] = 4.5;

    printf("Bem vindo ao restaurante Espetinhos do IFAM!\n");

    while(menu != 0){
        printf("Informe a acao desejada: \n");
        printf("1 - Incluir item\n");
        printf("2 - Fechar comanda\n");
        printf("3 - Nova comanda\n");
        printf("4 - Cancelar Item\n");
        printf("0 - Sair do programa\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                system("cls"); //função utilizada para limpar a tela
                printf("Selecione o item que deseja incluir: \n");
                printf("1 - Espetinhos\n");
                printf("2 - Bebidas\n");
                printf("3 - Acompanhamentos\n");
                scanf("%d", &classItem);

                switch(classItem){
                    case 1:
                        exibirCardapio(classItem);
                        scanf("%d", &espetinho);
                        printf("Qual quantidade voce deseja?\n");
                        scanf("%d", &quantidade);

                        if((espetinho >= 1 && espetinho < 8) && (quantidade > 0)){
                            system("cls");
                            printf("Espetinho adicionado\n");
                            for(int i = 0; i < quantidade; i++){
                                for(int j = 0; j < 2; j++){
                                    if(j == 0){
                                        pedidos[cont+i][j] = espetinho;
                                    }
                                    else {
                                        pedidos[cont+i][j] = cardapio[classItem-1][espetinho-1];
                                    }
                                }
                            }
                            cont = (cont + quantidade) - 1;
                        }
                        else {
                            printf("Item selecionado ou quantidade invalida, tente novamente!");
                            cont--;
                        }
                    break;

                    case 2:
                        exibirCardapio(classItem);
                        scanf("%d", &bebida);
                        printf("Qual quantidade voce deseja?\n");
                        scanf("%d", &quantidade);

                        if((bebida >= 1 && bebida < 10) && (quantidade > 0)){
                            system("cls");
                            printf("Bebida adicionada\n");
                            for(int i = 0; i < quantidade; i++){
                                for(int j = 0; j < 2; j++){
                                    if(j == 0){
                                        pedidos[cont+i][j] = bebida + 7;
                                    }
                                    else {
                                        pedidos[cont+i][j] = cardapio[classItem-1][bebida-1];
                                    }
                                }
                            }
                            cont = (cont + quantidade) - 1;
                        }
                        else {
                            printf("Item selecionado ou quantidade invalida, tente novamente!");
                            cont--;
                        }
                    break;

                    case 3:
                        exibirCardapio(classItem);
                        scanf("%d", &acompanhamento);
                        printf("Qual quantidade voce deseja?\n");
                        scanf("%d", &quantidade);

                        if((acompanhamento >= 1 && acompanhamento < 6) && (quantidade > 0)){
                            system("cls");
                            printf("Acompanhamento adicionado\n");
                            for(int i = 0; i < quantidade; i++){
                                for(int j = 0; j < 2; j++){
                                    if(j == 0){
                                        pedidos[cont+i][j] = acompanhamento + 16;
                                    }
                                    else {
                                        pedidos[cont+i][j] = cardapio[classItem-1][acompanhamento-1];
                                    }
                                }
                            }
                            cont = (cont + quantidade) - 1;
                        }
                        else {
                            printf("Item selecionado ou quantidade invalida, tente novamente!");
                            cont--;
                        }
                    break;

                    default:
                        system("cls");
                        printf("Opcao nao identificada!");
                        cont--;
                    break;
                }
            break;

            case 2:
                system("cls");
                printf("Comanda fechada!\n\n");
                while(1){
                    for(int i = 0; i < cont; i++){
                        if(i < 9){
                            printf("0%d - ", i+1);
                        } else {
                            printf("%d - ", i+1);
                        }

                        if(pedidos[i][0] == 0){
                            printf("ITEM CANCELADO\n");
                        }
                        else{
                            exibirItem(pedidos[i][0]);
                        }                       
                        subtotal += (float) pedidos[i][1];
                    }

                    printf("\n-----------------------------------------------------\n");
                    printf("Total -------------------------------------- R$%.2f\n\n", subtotal);
                    printf("Deseja oferecer alguma forma de desconto?\n");
                    printf("1 - Cupom de desconto\n");
                    printf("2 - Desconto de um valor especifico\n");
                    printf("3 - Sem desconto\n");
                    printf("0 - Voltar ao menu principal\n");
                    scanf("%d", &opcaoDesconto);

                    if(opcaoDesconto == 0 || opcaoDesconto > 3 || opcaoDesconto < 0){
                        system("cls");
                        break;
                    }

                    switch(opcaoDesconto){
                        case 1:
                            printf("\nDigite o seu cupom: ");
                            getchar(); //consome o caracter \n pendente no buffer de entrada
                            fgets(cupom, sizeof(cupom), stdin); //a função fgets recebe três parâmetros: um array, o tamanho desse array e o método que será utilizado para entrada de dados
                            cupom[strcspn(cupom, "\n")] = '\0';

                            if(!strcmp(cupom, cupom1)){
                                printf("\nCupom de 10 por cento adicionado!\n");
                                total = subtotal*0.9; //O valor total é atualizado de acordo com o cupom de desconto
                                printf("Valor corrigido: %.2f\n", total);
                            } else if(!strcmp(cupom, cupom2)){
                                printf("\nCupom de 20 por cento adicionado!\n");
                                total = subtotal*0.8;
                                printf("Valor corrigido: %.2f\n", total);
                            } else if(!strcmp(cupom, cupom3)){
                                printf("\nCupom de 30 por cento adicionado!\n");
                                total = subtotal*0.7;
                                printf("Valor corrigido: %.2f\n", total);
                            } else {
                                printf("\nCupom nao reconhecido!\n");
                            }
                        break;

                        case 2:
                            printf("Informe o valor que deseja descontar: ");
                            scanf("%f", &desconto);
                            total = subtotal - desconto;
                            printf("Valor corrigido: %.2f\n", total);
                        break;

                        case 3:
                            printf("Sem desconto adicionado!\n");
                        break;

                        default:
                            printf("Opcao nao identificada\n\n");
                        break;
                    }


                    printf("Informe o valor do pagamento: ");
                    scanf("%f", &pagamento);

                    if(pagamento >= total){
                        troco = pagamento - total;
                        printf("\nO troco eh de: R$%.2f\n", troco);
                        printf("\nObrigado por comprar no Espetinhos do IFAM, volte sempre!\n\n");
                        break;
                    } else {
                        printf("Valor abaixo do total, por favor pague corretamente!\n\n");
                    }
                }

            break;

            case 3:
                for(int i = 0; i < cont; i++){
                    pedidos[i][i] = 0;
                }
                cont = 0;
                subtotal = 0;
                total = 0;
                system("cls");
                printf("Tudo bem, uma nova comanda foi iniciada!\n");
            break;

            case 4:
                system("cls");
                printf("Selecione o item que deseja cancelar!\n");

                for(int i = 0; i < cont; i++){
                    printf("%d - ", i+1);
                    exibirItem(pedidos[i][0]);
                }

                scanf("%d", &cancItem);

                pedidos[cancItem-1][0] = 0;
                pedidos[cancItem-1][1] = 0;

            break;

            case 0:
                system("cls");
                printf("Tudo bem, ate a proxima!\n");
                return 0;
            break;

            default:
                system("cls");
                printf("Opcao nao identificada, tente novamente");
            break;
        }

        if(menu == 1){
            cont++;
        }
        quantidade = 1;
        subtotal = 0;
    }

    return 0;
}
