#include<stdio.h>

int main()
{
int calc,ano,dias,minutos,segundos;

    printf("Digite seu ano de nascimento \n");
    scanf("%d",&ano);
    calc = 2022 - ano;
    dias = calc*365;
    minutos = dias*60;
    segundos = minutos *60;
    printf("Você fez esse ano %d anos \n",calc);
    printf("Você já viveu %d dias \n ",dias);   
    printf("Você já viveu %d minutos \n ", minutos);
    printf("Você já viveu %d segundos", segundos);
    
     return 0;
}