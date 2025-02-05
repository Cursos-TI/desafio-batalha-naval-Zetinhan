//Batalha Naval -- Posicionamento de Navios

#include <stdio.h>

int main()
{
    int matriz[3][3] = { //determinando matriz 3x3
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //prints executando o código e demonstrando o posicionamento dos barcos
    printf("Bem vindo! aqui mostraremos as posições dos barcos que colocamos nessa matrix 3x3!\n");
    printf("1, 2, 3\n");
    printf("4, 5, 6\n");
    printf("7, 8, 9\n");
    printf("O Barco 1 está posicionado em: X = %d e Y = %d!\n", matriz[0][0], matriz[0][1]);
    printf("Enquanto o Barco 2 está posicionado em: X = %d e Y = %d!\n",matriz[0][2], matriz[1][2]);

    return 0;
}