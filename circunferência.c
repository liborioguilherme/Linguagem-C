#include<stdio.h>

int main()
{
float raio,pi,area;
pi = 3.14;
    printf("digite o RAIO pata saber a circunferência \n");
    scanf("%f",&raio);
    area = pi*raio*2;
    printf("a circunferência e %f ", area);
    return 0;
}