#include <stdio.h>

int main()
{
    float valor, somaDosPositivos = 0;
    int numeroDePositivos = 0;

    for(int i = 0; i < 6; i++)
    {
        scanf("%f", &valor);

        if(valor > 0)
        {
            numeroDePositivos++;
            somaDosPositivos = somaDosPositivos + valor;
            valor = 0;
        }
    }
    
    printf("%d valores positivos\n", numeroDePositivos);
    printf("%.1f\n", somaDosPositivos/numeroDePositivos);
    
    return 0;
}