#include <stdio.h>

void main(){
    int menuComanda = 1, classItem, espetinho, bebida, acompanhamento;
    float subTotal, total = 0;

    while(menuComanda != 0){
        printf("Informe o que deseja fazer com a comanda: \n");
        printf("##########################################\n");
        printf("1 - Incluir item\n");
        printf("##########################################\n");
        printf("2 - Fechar comanda\n");
        printf("##########################################\n");
        printf("3 - Nova comanda");
        printf("##########################################\n");
        printf("0 - Sair do programa\n");
        printf("##########################################\n");
        scanf("%d", &menuComanda);

        switch(menuComanda){
            case 1:
                printf("Selecione o item que deseja incluir: \n");
                printf("1 - Espetinhos\n");
                printf("2 - Bebidas\n");
                printf("3 - Acompanhamentos\n");
                scanf("%d", &classItem);

                switch(classItem){
                    case 1:
                        printf("1 - Espetinho de Alcatra ------------------- R$12.00\n");
                        printf("2 - Espetinho de Fraldinha ----------------- R$11.00\n");
                        printf("3 - Espetinho de Picanha ------------------- R$15.00\n");
                        printf("4 - Espetinho de Patinho ------------------- R$12.00\n");
                        printf("5 - Espetinho de Frango -------------------- R$9.00\n");
                        printf("6 - Espetinho de Linguiça ------------------ R$9.00\n");
                        printf("7 - Espetinho Misto ------------------------ R$10.00\n");
                        scanf("%d", &espetinho);

                        switch(espetinho){
                            case 1:
                                printf("Espetinho de Alcatra adicionado!\n\n");
                                subTotal = 12;
                                total += subTotal;
                                break;
                            case 2:
                                printf("Espetinho de Fraldinha adicionado!\n\n");
                                subTotal = 11;
                                total += subTotal;
                                break;
                            case 3:
                                printf("Espetinho de Picanha adicionado!\n\n");
                                subTotal = 15;
                                total += subTotal;
                                break;
                            case 4:
                                printf("Espetinho de Patinho adicionado!\n\n");
                                subTotal = 12;
                                total += subTotal;
                                break;
                            case 5:
                                printf("Espetinho de Frango adicionado!\n\n");
                                subTotal = 9;
                                total += subTotal;
                                break;
                            case 6:
                                printf("Espetinho de Linguiça adicionado!\n\n");
                                subTotal = 12;
                                total += subTotal;
                                break;
                            case 7:
                                printf("Espetinho Misto adicionado!\n\n");
                                subTotal = 10;
                                total += subTotal;
                                break;
                            default:
                                printf("Opção não identificada!\n");
                        }
                        break;

                    case 2:
                        printf("1 - Água 350ml ----------------------------- R$3.00\n");
                        printf("2 - Baré lata ------------------------------ R$5.00\n");
                        printf("3 - Guaraná Antártica lata ----------------- R$5.00\n");
                        printf("4 - Coca-cola lata ------------------------- R$6.00\n");
                        printf("5 - Fanta Laranja lata --------------------- R$6.00\n");
                        printf("6 - Fanta Uva lata ------------------------- R$6.00\n");
                        printf("7 - Brhama Duplo Malte 600ml --------------- R$10.00\n");
                        printf("8 - Antártica 600ml ------------------------ R$10.00\n");
                        printf("9 - Heineken 600ml ------------------------- R$12.00\n");
                        scanf("%d", &bebida);

                        switch(bebida){
                            case 1:
                                printf("Água adicionada!\n\n");
                                subTotal = 3;
                                total += subTotal;
                                break;
                            case 2:
                                printf("Baré lata adicionado!\n\n");
                                subTotal = 5;
                                total += subTotal;
                                break;
                            case 3:
                                printf("Guaraná Antártica lata adicionado!\n\n");
                                subTotal = 5;
                                total += subTotal;
                                break;
                            case 4:
                                printf("Coca-cola lata adicionado!\n\n");
                                subTotal = 6;
                                total += subTotal;
                                break;
                            case 5:
                                printf("Fanta Laranja lata adicionado!\n\n");
                                subTotal = 6;
                                total += subTotal;
                                break;
                            case 6:
                                printf("Fanta Uva lata adicionado!\n\n");
                                subTotal = 6;
                                total += subTotal;
                                break;
                            case 7:
                                printf("Brhama Duplo Malte 600ml adicionada!\n\n");
                                subTotal = 10;
                                total += subTotal;
                                break;
                            case 8:
                                printf("Antártica 600ml adicionada!\n\n");
                                subTotal = 10;
                                total += subTotal;
                                break;
                            case 9:
                                printf("Heineken 600ml adicionada!\n\n");
                                subTotal = 12;
                                total += subTotal;
                                break;
                            default:
                                printf("Opcao nao identificada!\n\n");
                        }
                        break;

                    case 3:
                        printf("1 - Arroz ---------------------------------- R$5.50\n");
                        printf("2 - Farofa --------------------------------- R$2.00\n");
                        printf("3 - Vinagrete ------------------------------ R$4.50\n");
                        printf("4 - Queijo coalho -------------------------- R$6.00\n");
                        printf("5 - Vatapá --------------------------------- R$4.50\n");
                        scanf("%d", &acompanhamento);

                        switch(acompanhamento){
                            case 1:
                                printf("Arroz adicionado!\n\n");
                                subTotal = 5.5;
                                total += subTotal;
                                break;
                            case 2:
                                printf("Farofa adicionada!\n\n");
                                subTotal = 2;
                                total += subTotal;
                                break;
                            case 3:
                                printf("Vinagrete adicionado!\n\n");
                                subTotal = 4.5;
                                total += subTotal;
                                break;
                            case 4:
                                printf("Queijo Coalho adicionado!\n\n");
                                subTotal = 6;
                                total += subTotal;
                                break;
                            case 5:
                                printf("Vatapá adicionado!\n\n");
                                subTotal = 4.5;
                                total += subTotal;
                                break;
                            default:
                                printf("Opção não identificada!\n\n");
                        }
                        break;

                    default:
                        printf("Opção não idenficada, tente novamente!\n");
                        system)("cls");
                        main();
                }
                break;

            case 2:


        }
    }
}
