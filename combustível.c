#include<stdio.h>

int main()
{
 int km;
float gasto,combustível;
    printf("Digite quantos km você percorreu \n");
    scanf("%d", &km);
    printf("Digite o consumo do combustível \n");
    scanf("%f",&combustível);
    gasto = km/combustível;
    printf("seu consumo é %f " , gasto);
    
    
    return 0;
}