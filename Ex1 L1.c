/*Gerar n�meros inteiros em um vetor em que a quantidade de elementos e o valor do limite sejam informados pelo usu�rio. Validar as e-
ntradas para que sejam informados valores inteiros positivos.b) Mostrar o vetor de n�meros inteiros.c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a m�dia dos n�meros pares que est�o armazenados no vetor. Validar para que n�o seja realizada divis�o por zero no c�lculo da m�dia.*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Vetores.h"
int main (void)
{
    int tam, limS, i, menor, posicao, contP=0;
    float soma=0;
    do{

    printf ("Informe o tamanho do vetor: ");
    scanf ("%d", & tam);
    printf ("Informe o limite para o sorteio dos numeros: ");
    scanf ("%d", & limS);

    }while (tam<0 || limS<0);

    int vetor[tam];

    vetoresInteiros(vetor, tam, limS);

    showVetor(vetor, tam);

    menor=vetor[0];
    posicao=0;

    for (i=0; i<tam; i++)
    {
    if (vetor[i]<menor)
    {
      menor=vetor[i];
      posicao=i;
    }
    }
    printf ("\n%d menor", menor);
    printf ("\t posicao %d", posicao);

    for (i=0; i<tam; i++)
    {
        if (vetor[i]%2==0)
        {
            contP++;
            soma=soma+vetor[i];
        }
    }
    printf ("Media dos pares: %.2f", soma/contP);
    return 0;
}
