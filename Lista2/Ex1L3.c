/*Gerar aleatoriamente um vetor com 5 elementos inteiros entre 1 a 9. Mostrar a tabuada de cada um dos elementos armazenados
no vetor. A tabuada deve ser mostrada por uma função, que recebe como parâmetro o número e apresenta a respectiva tabuada.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Vetores22.h"
int main (void)
{
	int i=0, lim=1, limSup=9, tam=5, vetor[tam], k;
	char ch;
	do
	{
		i=0;
		printf ("\n===VETOR===\n");
		gerarVetorInteiroDe1aLimite(vetor, tam, lim, limSup);
		showVetor(vetor, tam);
		
		for(i=0; i<tam; i++)
		{
			k=vetor[i];
			gerarTabuada(k);
		}
		
		
		
		
		printf ("\nDeseja repetir o programa (S/s)? ");;
		setbuf (stdin, NULL);
		scanf("%c", & ch);
	}while (ch=='s'||ch=='S');
	return 0;
}
