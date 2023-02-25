/*Gerar um vetor com 20 elementos aleatórios entre 5 e 20. Ordenar o vetor. Percorrer o vetor ordenado e 
mostrar os pares e a soma dos pares de cada um dos valores armazenados. Caso existam elementos 
repetidos, considerar apenas um deles*/
#include <stdio.h>
#include "Vetores22.h"
#include "Pares.h"
int main (void)
{
	int tam=20, limIn=5, limSup=20, i, j, k ;
	int vetor[tam];
	char ch;
	do
	{
		printf ("\n====VETOR ORIGINAL====\n");
		gerarVetorInteiroComFaixa (vetor, tam, limSup, limIn);
		showVetor(vetor, tam);
		
		printf ("\n====VETOR ORDENADO====\n");
		ordenavetor(vetor, tam);
		showVetor(vetor, tam);
		
		for (i = 0; i < tam; i++) // deixa o vetor sem repetição
        {
            for (j = i + 1; j < tam;)
            {
                if (vetor[j] == vetor[i])
                {
                    for (k = j; k < tam; k++)
                    {
                        vetor[k] = vetor[k + 1];
                    }

                    tam--;
                    
                }
                else
                {
                    j++;
                }
            }
        }

		printf("\n===PARES===\n");
		mostrarPares(vetor, tam);

		
		
		
		printf ("\nDeseja repetir o codigo? ");
		setbuf(stdin, NULL);
		scanf("%c", &ch);
		
		
	}while (ch=='S'||ch=='s');
	return 0;
}
