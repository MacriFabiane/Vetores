/*Gerar um vetor A de inteiros com 100 elementos, com valores entre -50 e +50. Armazenar em um vetor B 
somente os valores positivos do vetor A.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Vetores22.h"
int main (void)
{
	signed int limPos=50, limNeg=-50, tam=100, vetorA[tam], vetorB[tam], i=0, j=0;
	char ch;
	
	do
	{
		i=0;
		j=0;
		printf ("\n===VETOR A===\n");
		gerarVetorPositivoNegativo(vetorA, tam, limNeg, limPos);
		showVetor(vetorA, tam);
		
		for (i=0; i<tam; i++)
		{
			if (vetorA[i]>0)
			{
				vetorB[j]=vetorA[i];
				j++;
			}
		}
		printf ("\n===VETOR B===\n");
		showVetor(vetorB, j);
		
		
		
		printf ("\nDeseja repetir o programa? (S/s) ");
		setbuf(stdin, NULL);
		scanf ("%c", & ch);
	}while (ch=='S'||ch=='s');
}
