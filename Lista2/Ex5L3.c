/* ) Gerar dois vetores com 10 elementos cada, os elementos devem ser distintos. Os valores são aleatórios e entre 1 e 15 
para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor com a união dos valores dos vetores
anteriores. Utilizar o conceito matemático de união entre conjuntos. Mostrar os três vetores.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Vetores22.h"
int main (void)
{
	
	char ch;
	do 
	{
		int tam=10, tam2=(tam+tam), lim1=15, lim2=10, vetA[tam], vetB[tam], uniao[tam], k=0, i=0, j=0;
		k=0;
		
		printf ("\n===VETOR A===\n");
		gerarVetorSemRepeticao(vetA, tam, lim1);
		showVetor(vetA, tam); 		
		printf("\n===VETOR B===\n");
		gerarVetorSemRepeticao(vetB, tam, lim2);
		showVetor(vetB, tam); 
		
		for (j=0; j<tam2; j++)
		{
	       if (j<tam)
	       {
			uniao[j]=vetA[i];
			i++;
	       }
	       else
		   {
			uniao[j]=vetB[k];
			k++;
		   }
		}
	    printf ("\n===UNIAO===\n");
	    for( i = 0; i < tam2; i++ )
    {
        for( j = i + 1; j < tam2; j++ )
        {
            if( uniao[j] == uniao[i] )
            {
                for( k = j; k < tam2; k++ )
                {
                    uniao[k] = uniao[k + 1];

                }
                tam2--;
            }
        }
    }

	    showVetor(uniao, tam2);
	 
		
	    printf ("\nDeseja repetir o programa (S/s)? ");
		setbuf (stdin, NULL);
		scanf("%c", & ch);
	
	}while (ch=='s'||ch=='S');
}
