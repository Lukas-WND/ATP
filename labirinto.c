#include <stdio.h>

char grid[100][100];

int L, C, xi, yi, xf, yf;

int obsX[100], obsY[100];

void printMatriz(){
    printf("  ");
    for(int i = 0; i < C; i++){
        printf("%d ", i+1);
    }
    printf("\n");

    for(int i = 0; i < L; i++){
        printf("%d ", i+1);
        for(int j = 0; j < C; j++){
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}

void addObstaculos(int count){
    for(int i = 0; i < count; i++){
        printf("Informe a linha que deseja incluir o %do obstaculo: ", i+1);
        scanf("%d", &obsX[i]);
        printf("Informe a coluna que deseja incluir esse mesmo obstaculo: ");
        scanf("%d", &obsY[i]);
        obsX[i]--;
        obsY[i]--; 

        if(obsX[i] <= 0 || obsY[i] <= 0){
            printf("Posicao invalida!\n");
            i--;
        }
        else {
            if (grid[obsX[i]][obsY[i]] == '.') {
                grid[obsX[i]][obsY[i]] = '#';
            } else {
                printf("Essa posicao ja esta ocupada. Digite outra.\n");
                i--;
            }
            system("cls");
            printMatriz();
        }
    }
}

void findPath(int parent[L][C]) {
    int tmpX,tmpY, curX,curY;
    printf("\nCaminho do inicio ao final:\n");
    tmpX = xf;
    tmpY = yf;

    while (parent[tmpX][tmpY] != -1) {
        grid[tmpX][tmpY] = '*';
        curX = parent[tmpX][tmpY] / 10;
        curY = parent[tmpX][tmpY] % 10;
        tmpX = curX;
        tmpY = curY;
    }

    printMatriz();
}

int main(){
    int qntObstaculos, iPath = 0, fPath = 0;
    int visited[100][100], parent[100][100], queue[10000];

    printf("Informe a quantidade de Linhas do tabuleiro: ");
    scanf("%d", &L);
    printf("Informe a quantidade de Colunas do tabuleiro: ");
    scanf("%d", &C);


    if(L <= 0 || C <= 0){
        printf("Valor de linhas ou colunas invalido!");
        return 0;
    } else {
        for(int i = 0; i < L; i++){
            for(int j = 0; j < C; j++){
                grid[i][j] = '.';
            }
        }
    }

    system("cls");
    printf("Este eh o seu mapa do labirinto: \n");
    printMatriz();

    printf("Informe a linha que deseja iniciar o labirinto (1 a %d): ", L);
    scanf("%d", &xi);
    printf("Informe a coluna que deseja iniciar o labirinto (1 a %d): ", C);
    scanf("%d", &yi);
    xi--;
    yi--;
    grid[xi][yi] = 'o';

    system("cls");
    printMatriz();
    printf("\n");

    printf("Informe a linha que deseja finalizar o labirinto (1 a %d): ", L);
    scanf("%d", &xf);
    printf("Informe a coluna que deseja finalizar o labirinto (1 a %d): ", C);
    scanf("%d", &yf);
    xf--;
    yf--;
    grid[xf][yf] = 'x';

    system("cls");
    printMatriz();
    printf("\n");

    printf("Informe quantos obstaculos deseja adicionar: ");
    scanf("%d", &qntObstaculos);

    if(qntObstaculos <= 0){
        printf("Valor invalido!\n");
        return 0;
    } else {
        addObstaculos(qntObstaculos);
    }

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            visited[i][j] = 0;
            parent[i][j] = -1;
        }
    }

    visited[xi][yi] = 1;
    parent[xi][yi] = -1;
    queue[fPath++] = xi * 10 + yi;

    while (iPath != fPath) {
        int current = queue[iPath++];
        int raw = current / 10;
        int collum = current % 10;

        if (raw == xf && collum == yf) {
            findPath(parent);
            return 0;
        }

        if (raw > 0 && grid[raw - 1][collum] != '#' && visited[raw - 1][collum] == 0) {
            visited[raw - 1][collum] = 1;
            parent[raw - 1][collum] = raw * 10 + collum;
            queue[fPath++] = (raw - 1) * 10 + collum;
        }

        if (raw < (L - 1) && grid[raw + 1][collum] != '#' && visited[raw + 1][collum] == 0) {
            visited[raw + 1][collum] = 1;
            parent[raw + 1][collum] = raw * 10 + collum;
            queue[fPath++] = (raw + 1) * 10 + collum;
        }

        if (collum > 0 && grid[raw][collum - 1] != '#' && visited[raw][collum - 1] == 0) {
            visited[raw][collum - 1] = 1;
            parent[raw][collum - 1] = raw * 10 + collum;
            queue[fPath++] = raw * 10 + collum - 1;
        }

        if (collum < (C - 1) && grid[raw][collum + 1] != '#' && visited[raw][collum + 1] == 0) {
            visited[raw][collum + 1] = 1;
            parent[raw][collum + 1] = raw * 10 + collum;
            queue[fPath++] = raw * 10 + collum + 1;
        }
    }

    printf("Nao foi possivel encontrar um caminho\n");

    return 0;
}
