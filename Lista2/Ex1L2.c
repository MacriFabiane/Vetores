/*Usando a funcaoo gerarVetorInteiroComFaixa(), gerar aleatoriamente um vetor com 20 elementos entre 5 e 20.
Em seguida ordenar o vetor. Percorrer o vetor ordenado e mostrar os divisores e a quantidade de divisores de
cada um dos valores armazenados. Caso existam elementos repetidos, considerar apenas um deles.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Vetores22.h"
#include "Divisores.h"

int main(void)
{
    int tam = 20, limIn = 5, limSup = 20, i, j,k; 
    int vetor[tam];
    char ch;

    do
    {

        gerarVetorInteiroComFaixa(vetor, tam, limSup, limIn);
        printf("====VETOR ORIGINAL====\n");
        showVetor(vetor, tam);
        printf("\n====VETOR ORDENADO====\n");
        ordenavetor(vetor, tam);
        showVetor(vetor, tam);

        printf("\n===Divisores===\n");
        // deixarVetorsemRepeticao(tam);
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

        mostrardivisores(vetor, tam); 
       
        

        printf("\nDeseja repetir o codigo? ");
        setbuf(stdin, NULL);
        scanf("%c", &ch);
    } while (ch == 'S' || ch == 's');

    return 0;
}
