#include <stdio.h>

int main(){
    char produto[25], ctipoProduto[25];
    float quantidade, peso, precoQuilo, precoUnit, precoFinal;
    
    printf(" Digite o nome do produto: ");
    gets(produto); /* Le string produto*/
    printf("\n Digite o tipo de produto (unit ou peso)?: ");
    gets(ctipoProduto); /* Lê string ctipoProduto*/
    printf("\n\n As strings lidas sao:\n %s \n %s", produto, ctipoProduto); /* Imprime as strings*/
    
    if (ctipoProduto=='unit'){
        printf("\n\n Tipo Unitário: %s ",ctipoProduto ); /* Imprime as strings se for do tipo peso unitário*/
        
        printf("\nInforme o preco da unidade: ");
        scanf("%f", precoUnit);
        
        printf("\nInforme a quantidade de produtos: ");
        scanf("%f", quantidade);
        
        precoFinal = precoUnit * quantidade;
        
        printf("\nO valor total eh de: %f", precoFinal);
    }
    else {
        printf("\n\n Tipo peso variável: %s \n",ctipoProduto ); /* Imprime as strings se for do tipo peso variável*/
        
        printf("\nInforme o preco do quilo: ");
        scanf("%f", precoQuilo);
        
        printf("\nInforme o peso do produto: ");
        scanf("%f", peso);
        
        precoFinal = precoQuilo * peso;
        
        printf("\nO valor total eh de: %f", precoFinal);
    }
    
    return 0;
}
