/*Uma locadora de vídeos armazena em um vetor A de 300 posições a quantidade de filmes retirados por seus clientes durante o
ano. A locadora está fazendo uma promoção e para cada 10 filmes retirados, o cliente tem direito a uma locação grátis. Faça 
um programa que crie um vetor B contendo a quantidade de locações gratuitas a que cada cliente tem direito. Declare ambos os
vetores com valores inteiros.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Vetores22.h"
int main (void)
{
	int tam=100, vetorA[tam], vetorB[tam], i=0, lim=1, limIN=100;
	char ch;
	
	do
	{
		printf("\n===VETOR A===\n");
		gerarVetorInteiroDe1aLimite(vetorA, tam, lim, limIN);
		showVetor(vetorA, tam);
		
		for (i=0; i<tam; i++)
		{
			vetorB[i]=vetorA[i]/10;
		}
	
		printf("\n===VETOR B===\n");
		showVetor(vetorB, tam);
		
		
		
			
		printf ("\nDeseja repetir o programa? (S/s) ");
		setbuf(stdin, NULL);
		scanf ("%c", & ch);
	}while (ch=='S'||ch=='s');
}
