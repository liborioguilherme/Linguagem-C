#include<stdio.h>

int main()
{
int a,b,escolha,soma,sub,multi,divi,res1,res2,res3,res4;
    printf("digite dois numeros \n");
    scanf("%d %d" , &a,&b);
    printf("Qual operação deseja fazer ? \n 1 - adição \n 2 - subtração \n 3 - multiplicação \n 4 - divisão \n");
    scanf("%d", &escolha);
    if(escolha==1){
    soma = a+b;
    printf(" O resultado é %d " , soma); 
    }else if(escolha==2){
    sub = a-b;
     printf(" O resultado é %d",sub);
    }else if(escolha==3){
     multi = a*b;
    printf("O resultado é %d", multi);
    }else if(escolha ==4){
    divi = a/b;
    printf("O resultado é %d ",divi);
    }
    printf(" \n Deseja continuar as operações ? \n 5 - Sim \n 6 - Não \n");    
    scanf("%d",&escolha);
    if(escolha == 5){
    printf("digite dois numeros");
    scanf("%d %d" , &a,&b);
    printf("Qual operação deseja fazer ? \n 1 - adição \n 2 - subtração \n 3 - multiplicação \n 4 - divisão \n");
    scanf("%d", &escolha);
    if(escolha==1){
    soma = a+b;
    printf(" O resultado é %d " , soma); 
    }else if(escolha==2){
    sub = a-b;
     printf(" O resultado é %d",sub);
    }else if(escolha==3){
     multi = a*b;
    printf("O resultado é %d", multi);
    }else if(escolha ==4){
    divi = a/b;
    printf("O resultado é %d ",divi);
    }
    }else if(escolha == 6){
     printf("obrigado" );
    }
    
    
    
    return 0;
}