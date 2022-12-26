#include<stdio.h>
#include<math.h>

int main()
{
 int num1,num2,res1,res2,op;
    printf("digite dois numeros");
    scanf("%d %d",&num1,&num2);
    printf("Digite a operação desejada \n \n 1 - soma \n 2 - subtração \n 3 - divisão \n 4- multiplicação \n 5 - módulo da divisão \n 6- potência \n 7 - raiz \n");
    scanf("%d",&op);
    if(op==1){
    res1 = num1+ num2;
     printf("A soma e %d",res1);
    }
    if(op==2){
    res1 = num1-num2;
     printf("A subtração e %d",res1);
    }
    if(op==3){
    res1 = num1/num2;
     printf("A divisão e %d",res1);
    }
    if(op==4){
    res1 = num1* num2;
     printf("A multiplicação é %d",res1);
    }
    if(op==5){
    res1 = num1%num2;
    printf("o módulo da divisão  e %d",res1);
    }
    if(op==6){
    res1 = pow(num1,2);
    res2 = pow(num2,2);
     printf("a potência de %d %d \n",num1,res1);
    printf("a potência de %d %d ",num2,res2);
    }
    if(op==7){
     res1 = sqrt(num1);
    res2 = sqrt(num2);
    printf("a raiz de %d %d \n",num1,res1);
    printf("a raiz de %d %d",num2,res2);
    }
    return 0;
}