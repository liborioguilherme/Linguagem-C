#include<stdio.h>

int main()
{
int a,b,c,d,difereca;
printf("digite o valor A,B,C,D para saber a diferença");
scanf("%d %d %d %d", &a,&b,&c,&d);
difereca = (a*b - c*d);
    printf("A diferença é %d" , difereca);
    return 0;
}