#include<stdio.h>

int main()
{

int cod1,quantidade1, valor1, cod2, quantidade2,valor2,soma;
    printf("digite o código da peça 1 \n");
   scanf("%d %d %d %d %d %d",&cod1,&quantidade1, &valor1, &cod2,&quantidade2,&valor2);
  
    soma = valor1 + valor2;
    printf("o código da peça 1 e %d \n" , cod1);
    printf(" a  quantidade da peça 1 e %d \n", quantidade1);
    printf(" o valor da peça 1 e %d \n",valor1);
    printf("o código da peça 2 e %d \n ", cod2);
    printf("a quantidade da peça 2 e %d \n",quantidade2);
    printf("o valor da peça 2 e %d \n",valor2);
    printf("o total a pagar e %d", soma);
    
    
    
    
    
     return 0;
}