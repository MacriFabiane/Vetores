
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Vetores.h"
int main (void)
{
    int limIA=1, limFA=10, limIB=1, limFB=15, tamA, tamB, i, j, k, l, m;
    char ch;
    do
    {
        do
        {
            printf ("Informe o tamanho do vetor A: ");
            scanf ("%d", & tamA);

            if (tamA<=0)
            {
                printf ("Valor invalido!\n");
            }
        }while (tamA<=0);

        do
        {
            printf ("Informe o tamanho do vetor B: ");
            scanf ("%d", & tamB);

            if (tamB<=0)
            {
                printf ("Valor invalido!\n");
            }
        }while (tamB<=0);

        int vetorA[tamA], vetorB[tamB];

        gerarVetorInteiroDe1aLimite(vetorA, tamA, limIA, limFA);
        printf ("\n===VETOR A===\n");
        showVetor(vetorA, tamA);

        gerarVetorInteiroDe1aLimite(vetorB, tamB, limIB, limFB);
        printf ("\n===VETOR B===\n");
        showVetor(vetorB, tamB);

        if (tamB> tamA)
        {
           int vetorC[tamB];

        for (i=0; i<=tamA; i++)
        {
            if(vetorA[i]>vetorB[i])
            {
                vetorC[i]=1;
            }

            if(vetorA[i]==vetorB[i])
            {
                vetorC[i]=0;
            }

            if(vetorA[i]<vetorB[i])
            {
                vetorC[i]=-1;
            }
            k=i;
        }
        for (j=k; j<tamB; j++)
        {
            vetorC[j]=-1;
        }
        printf ("\n===Vetor C===\n");
        showVetor(vetorC, tamB);
        }

        if (tamA> tamB)
        {
           int vetorC[tamA];

        for (m=0; m<=tamB; m++)
        {
            if(vetorA[m]>vetorB[m])
            {
                vetorC[m]=1;
            }

            if(vetorB[m]==vetorA[m])
            {
                vetorC[m]=0;
            }

            if(vetorA[m]<vetorB[m])
            {
                vetorC[m]=-1;
            }
            l=m;
        }
        for (j=l; j<tamA; j++)
        {
            vetorC[j]=1;
        }
        printf ("\n===Vetor C===\n");
        showVetor(vetorC, tamA);
        }


        printf ("\nDeseja repetir o programa? (S/s) ");
        setbuf(stdin, NULL);
        scanf ("%c", &ch);

    }while (ch=='S'|| ch=='s');
    return 0;
}
