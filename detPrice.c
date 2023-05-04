#include <stdio.h>
#include <string.h>

int main(){
    char produto[25], ctipoProduto[25]; // Declara vaiáveis do nome do produto e seu tipo
    float peso, precoQuilo, precoUnit, precoFinal; // Variáveis de valor real
    int quantidade; // Variável de quantidade de produtos
    
    printf("Digite o nome do produto: ");
    gets(produto); // Le string produto
    printf("\nDigite o tipo de produto (unit ou peso)?: ");
    gets(ctipoProduto); // Lê string ctipoProduto
    printf("\n\nAs strings lidas sao:\n * %s \n * %s", produto, ctipoProduto); // Imprime as strings
    
    /* Nessa estrutura de condicionais é verificada se a string ctipoProduto é igual a uma string já predefinida,
    a função strcmp retorna 0 caso as duas strings passadas como argumento sejam iguais, o que pode ser considerado
    falso pela condicional if(), por isso o valor retornado foi invertido usando o operador lógico ! de negação
    */
    if (!strcmp(ctipoProduto, "unit")){ // Função utilizada para comparar duas strings

        printf("\n\nproduto do tipo unitario: %s ",ctipoProduto ); // Imprime o tipo de produto lido pelo sistema e informado
        
        printf("\nInforme o preco da unidade: ");
        scanf("%f", &precoUnit); 
        printf("\nInforme a quantidade de produtos: ");
        scanf("%d", &quantidade);
        
        precoFinal = precoUnit * quantidade;
        
        printf("\nO valor total do produto \"%s\" eh de: R$%.2f\n", produto, precoFinal); // Imprime o produto e seu valor final

    } else if(!strcmp(ctipoProduto, "peso")){

        printf("\n\nProduto do tipo peso variavel: %s \n",ctipoProduto ); // Imprime o tipo de produto lido pelo sistema e informado
        
        printf("\nInforme o preco do quilo: ");
        scanf("%f", &precoQuilo); 
        printf("\nInforme o peso do produto: ");
        scanf("%f", &peso);
        
        precoFinal = precoQuilo * peso;
        
        printf("\nO valor total do produto \"%s\" eh de: R$%.2f\n", produto, precoFinal); // Imprime o produto e seu valor final

    } else {
        printf("\n\n Tipo nao identificado, tente novamente!\n"); // Caso o tipo de produto informado não for identificado o programa começa novamente
        main();
    }
    
    return 0;
}
