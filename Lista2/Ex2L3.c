/* Implemente uma função que recebe por parâmetro um vetor numérico e retorna o número de maior ocorrência no vetor.Use a 
função para verificar o número que ocorre com maior frequência em um vetor de 10 posições com valores aleatórios entre 1 e 5.
Se ocorrer de mais de um elemento ter a maior frequência, considere apenas o que ocorre primeiro no vetor.*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Vetores22.h"
int main (void)
{
	int tam=10, vetor[tam], lim=1, limSup=5;
	char ch;
	do
	{
		printf ("\n===VETOR===\n");
		gerarVetorInteiroDe1aLimite(vetor, tam, lim, limSup);
		showVetor(vetor, tam);
		
		printf ("\nElemento de maior ocorrencia foi:%d ", verElementoDeMaiorFrequencia(vetor, tam));
		
		
		printf ("\nDeseja repetir o programa (S/s)? ");;
		setbuf (stdin, NULL);
		scanf("%c", & ch);
	
	}while (ch=='s'||ch=='S');
	return 0;
}
