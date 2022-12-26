#include<stdio.h>

int main()
{
int preco,quantidade,custo;

printf("digite o preço do produto \n");
scanf("%d", &preco);
printf("digite a quantidade do produto \n");
scanf("%d", &quantidade);
custo = preco*quantidade ;
printf("o custo e %d \n" , custo);
    printf("Hello world!");
    return 0;
}