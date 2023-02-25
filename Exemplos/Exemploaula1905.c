#include<stdio.h>
#include <locale.h>

setlocale (ALL, "Portuguese");

void ordenavetor (int vetor [], int tam)
{
    int aux, i, j;

    for (j=tam-1; j>0; j--)
    {
        for (i=0; i<j; i++)//quantidade de interações, tam-1 pois ele não pode compara o último com algo de fora.
        {
            if (vetor[i]>vetor [i+1]) //vai puxando o maior para a ultima casa
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1]; //troca das variaveis nas posições dos vetores
                vetor[i+1]=aux;
            }
        }
    }
}
int main (void)
{



    return 0;
}
