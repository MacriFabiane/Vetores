/*a) Gerar um vetor float com 10 elementos aleatórios entre 0 e 1, exibir o vetor e mostrar a soma de todos os 
elementos do vetor.b) Gerar um vetor float com 50 elementos aleatórios entre 0 e 100 e exibir o vetor. Criar outros dois
vetores numéricos do tipo float, em um deles armazenar os valores menores que 50 e em outro os maiores que 50. 
Mostrar os vetores gerados*/
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include "Vetores22.h"
int main (void)
{
	int tam1=10, tam2=50, i=0, j=0, k=0, cont50=0, cont51=0;
	float vetor1[tam1], vetor2[tam2], vetor50[tam2], vetor51[tam2];
	char ch;
	
	do
	{
		cont50=0;
		cont51=0;
		
		printf("\n===VETOR 1===\n");
		gerarVetorFloat0a1(vetor1, tam1);
		mostrarVetorFloat(vetor1, tam1);
		printf("\nSoma= %.2f", somarVetorFloat(vetor1, tam1));
		
		printf ("\n===VETOR 2===\n");
		gerarVetorFloat0a100(vetor2, tam2);
		mostrarVetorFloat(vetor2, tam2);
		
		for (i=0; i<tam2;i++)
		{
		
			
			if ( vetor2[i]<50.00)
			{
				vetor50[j]=vetor2[i];
				j++;
			}
			else if (vetor2[i]>50.0)
			{
				vetor51[k]=vetor2[i];
				k++;
			}	
		}
		
		
		printf ("\n===VETOR 3===\n");
		mostrarVetorFloat(vetor50,j );
		
		printf ("\n===VETOR 4===\n");
		mostrarVetorFloat(vetor51, k);
		
	
        
		printf ("\nDeseja repetir o programa? ");
		setbuf(stdin, NULL);
		scanf("%c", & ch);
		
	}while (ch=='S'||ch=='s');
}
