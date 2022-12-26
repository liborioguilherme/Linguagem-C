#include<stdio.h>

int main()
{
int num;
    printf("digite um numero! \n");
    scanf("%d",&num);
    if(num > 0){
     printf("positivo");
    }else if(num <0){
     printf("negativo");
    }
    return 0;
}