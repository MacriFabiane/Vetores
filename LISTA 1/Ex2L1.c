//Gerar elementos inteiros e aleatórios entre 1 e 25 em um vetor de tamanho 15. Gerar outros dois vetores, um contendo os valores
// pares e outro os ímpares e mostrar os três vetores
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "Vetores.h"

int main (void)
{
    char ch;
    int tam=15, limite=15, i, limiteIn=1;
    do
    {
        tam=15;
        limite=25;
        limiteIn=1;
        int vetor[tam];

        gerarVetorInteiroDe1aLimite(vetor, tam, limite, limiteIn);
        printf ("\n===Vetor===\n");
        showVetor(vetor,tam);

        printf ("\n===Vetor de Pares===\n");
        for (i=0; i<tam; i++)
        {
        if (vetor[i]%2==0)
        {
           printf ("%d\t", vetor[i]);
        }
        }

        printf ("\n===Vetor de Impares===\n");
        for (i=0; i<tam; i++)
        {
        if (vetor[i]%2==1)
        {
            printf ("%d\t", vetor[i]);
        }
        }


        printf ("\nDeseja repetir o programa? (S/s) ");
        setbuf(stdin, NULL);
        scanf ("%c", &ch);

    }while (ch=='S'||ch=='s');


    return 0;
}
