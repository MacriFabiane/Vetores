#include <stdio.h>

int main (void)
{
    int valor[10], i, contP=0, contIm=0;

    for (i=0; i<10; i++)
    {
       printf ("Informe o valor para o vetor da posicao %d: ", i);
       scanf ("%d", &valor[i]);
    }
    printf ("====PARES====\n");
    for (i=0; i<10; i++)
    {

    if (valor[i]%2==0)
    {
        contP++;
        printf ("numeros[%d] = %d <--- %do nro par\n", i, valor[i], contP);
    }
    }
    printf ("====IMPARES====\n");
    for (i=0; i<10; i++)
    {

    if (valor[i]%2!=0)
    {
      contIm++;
     printf ("numeros [%d] = %d <--- %do nro impar\n", i, valor[i], contIm);
    }
    }

    printf ("Porcentagem de impares(%d): %.2f%%\n",contIm, 100*contIm/10.0);
    printf ("Porcentagem de pares (%d): %.2f%%\n",contP, 100*contP/10.0);

    return 0;

}
