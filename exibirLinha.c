#include <stdio.h>

void exibirLinha(int matriz[100][100], int linha){
    for(int i = 0; i < 1000; i++){
        printf("%d ", matriz[linha][i]);
    }
}

int main(){
    int matriz[100][100], linha; //n deu pra fazer 1000 porque consome mt memória

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            matriz[i][j] = i*j;
        }
    }

    printf("Selecione a linha que deseja acessar: ");
    scanf("%d", &linha);

    exibirLinha(matriz, linha);

    return 0;
}
