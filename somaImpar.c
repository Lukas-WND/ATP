#include <stdio.h>

int somaImpar(int vetor[1000]){
    int soma = 0;

    for(int i = 0; i < 1000; i++){
        if(i % 2 != 0){
            soma += vetor[i]; // soma = soma + vetor[i]
        }
    }

    return soma;
}

void main(){
    int vetor[1000], resultado;

    for(int i = 0; i < 1000; i++){
        vetor[i] = i+1; //atribui um valor qualquer, eu n vou digitar 1000 valores aqui pelo amor de deus
    }

    resultado = somaImpar(vetor);

    printf("O resultado da soma das posicoes impares do vetor eh: %d\n", resultado);
}
