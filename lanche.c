#include<stdio.h>

int main()
{
int cod,quanti,res,valor;
printf("Digite o código do produto para saber o nome e o preço \n");
scanf("%d",&cod);
if(cod==1){
valor = 4;
 printf("Cachorro quente \n");
printf("O valor é %d \n",valor);
printf("Digite a quantidade de itens \n");
scanf("%d",&quanti);
res = valor * quanti;
printf("O valor a pagar e %d ",res);
}
else if(cod==2){
 valor = 4;
printf("X - salada \n");
printf("O valor é %d \n",valor);
printf("Digite a quantidade de itens \n");
scanf("%d",&quanti);
res = valor * quanti;
printf("O valor a pagar e %d ",valor);
  } 
    else if(cod==3){
     valor = 5;
    printf("X - bacon \n");
    printf("O valor e %d \n",valor);
    printf("Digite a quantidade de itens \n");
    scanf("%d",&quanti);
    res = valor * quanti;
    printf("O valor total a pagar e %d",valor);
    }
    else if(cod == 4){
     valor = 2;
    printf("Torrada simples \n");
    printf("O valor e %d \n",valor);
    printf("Digite a quantidade de itens \n");
    scanf("%d",&quanti);
    res = valor * quanti;
    printf("O valor total a pagar e %d",valor);
    }
    else if(cod == 5){
     valor = 1;
    printf("Refrigerante \n");
    printf("O valor e %d \n",valor);
    printf("Digite a quantidade de itens \n");
    scanf("%d",&quanti);
    res = valor * quanti;
    printf("O valor total a pagar e %d",res);
    }

    
    return 0;
}