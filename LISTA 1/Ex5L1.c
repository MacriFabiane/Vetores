
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Vetores.h"

int main (void)
{
    char ch;
    int tam=100, i, cont=0, k, j, t=0, tamB, contB=0;

    do
    {
        int vetorA[tam];

        gerarVetorDe0e1 (vetorA, tam);
        printf ("\n===Vetor A===\n");
        showVetor(vetorA, tam);


        int vetorB[tam];
        printf("\n===Vetor B===\n");
      // Era para criar para o valor máximo possivel e o máximo é todos os elementos de A serem 0
        for (i=0; i<tam; i++)
        {

        if (vetorA[i]==0)
        {
            cont++;
        }
        else if (vetorA[i]==1 && cont!=0)
        {
            contB++;
            k=contB;
            vetorB[k]= cont;
            printf ("%d\t", vetorB[k]);

            cont=0;
        }
        }

//printf ("%d\t", vetorB[contB]);



        printf ("\nDeseja repetir o programa? ");
        setbuf(stdin, NULL);
        scanf ("%c", &ch);

    }while(ch=='s' || ch== 'S');

    return 0;
}
