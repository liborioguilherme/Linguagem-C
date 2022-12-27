#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[50];
    int tamanho = 0;
    printf("Digite seu nome: \n");
    fgets(nome,50,stdin);
    tamanho = strlen(nome);
    printf("Seu nome tem %d letras \n",tamanho);

    return 0;
}
