/* Implemente uma fun��o que recebe por par�metro um vetor num�rico e retorna o n�mero de maior ocorr�ncia no vetor.Use a 
fun��o para verificar o n�mero que ocorre com maior frequ�ncia em um vetor de 10 posi��es com valores aleat�rios entre 1 e 5.
Se ocorrer de mais de um elemento ter a maior frequ�ncia, considere apenas o que ocorre primeiro no vetor.*/
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
