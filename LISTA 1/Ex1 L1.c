/*Gerar números inteiros em um vetor em que a quantidade de elementos e o valor do limite sejam informados pelo usuário. Validar as e-
ntradas para que sejam informados valores inteiros positivos.b) Mostrar o vetor de números inteiros.c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a média dos números pares que estão armazenados no vetor. Validar para que não seja realizada divisão por zero no cálculo da média.*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Vetores.h"
int main (void)
{

    int tam, limS, i, menor, posicao, contP=0;
    float soma=0;
    char ch;

    do
    {
        do
        {

            printf ("Informe o tamanho do vetor: ");
            scanf ("%d", & tam);


        }
        while (tam<0);
        do
        {
            printf ("Informe o valor de n: ");
            scanf ("%d", & limS);

        }
        while (limS<0);

        int vetor[tam];

        vetoresInteiros(vetor, tam, limS);

        printf ("===VETOR GERADO===\n");
        showVetor(vetor, tam);

        menor=vetor[0];
        posicao=0;

        for (i=0; i<=tam; i++)
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
        printf ("\nMedia dos pares: %.2f", soma/contP);

        printf ("Deseja repetir o Programa? (S/s ) ");
        setbuf (stdin, NULL);
        scanf ("%c", & ch);

    }while (ch=='S'||ch=='s');
    return 0;
}
