#include<stdio.h>

int main()
{
    int idade;
    printf("digite sua idade para saber se pode votar \n");
    scanf("%d",&idade);

    if(idade>=18) {
        printf("você pode votar");
    } else {
        printf("você não pode votar");
    }

    return 0;
}