/*Gerar dois vetores com 10 elementos cada, os elementos devem ser distintos. Os valores são aleatórios e 
entre 1 e 15 para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor com a 
interseção dos valores dos vetores anteriores. Utilizar o conceito matemático de intersecção entre conjuntos. 
Mostrar os três vetores.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Vetores22.h"
int main (void)
{
	int tam=10, lim1=15, lim2=10, vetA[tam], vetB[tam], intersecao[tam], j=0, k=0,i=0;
	char ch;
	do
	{
		k=0;
		printf ("\n===VETOR A===\n");
		gerarVetorSemRepeticao(vetA, tam, lim1);
		showVetor(vetA, tam); 
		
		printf("\n===VETOR B===\n");
		gerarVetorSemRepeticao(vetB, tam, lim2);
		showVetor(vetB, tam); 
		
		for (i=0; i<tam; i++)
	    {
		for (j=0; j<tam; j++)
		{
			if(vetA[i]==vetB[j])
			{
				intersecao[k]=vetA[i];
				k++;
			}
		}
		
	    }
	    printf ("\n===INTERSECAO===\n");
	    showVetor(intersecao, k);
		
		
		
		
		
	    printf ("\nDeseja repetir o programa (S/s)? ");
		setbuf (stdin, NULL);
		scanf("%c", & ch);
	
	}while (ch=='s'||ch=='S');
}
