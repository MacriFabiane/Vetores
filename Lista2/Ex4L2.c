/*a) Gerar um vetor com 100 caracteres alfabéticos minúsculos.b) Gerar um vetor com 200 caracteres alfabéticos maiúsculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha, sendo cada caractere deve ser 
separado por um espaço*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Vetores22.h"
int main (void)
{
	int tam1=100, n=0, tam2=200;
	char vetor[tam1], ch, vetor2[tam2];
	
	do
	{
		printf ("\nQuantos caracteres deseja mostrar em cada linha? ");
		scanf("%d",& n);
		
		printf ("\n===VETOR DE MINUSCULAS===\n");
		gerarVetorCharMinuscula (vetor, tam1);
		mostrarVetorChar(vetor, tam1, n);
		
		printf ("\n===VETOR DE MAIUSCULAS===\n");
		gerarVetorCharMaiuscula (vetor2, tam2);
		mostrarVetorChar(vetor2, tam2, n);
		
		
		printf ("\n Deseja repetir o programa? ");
		setbuf(stdin, NULL);
		scanf ("%c", & ch);
		
	}while(ch =='S' ||ch =='s');
	
	return 0;
}
