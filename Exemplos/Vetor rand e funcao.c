#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void gerarInteirosDe0aLimite (int vet[],int tamanho, int lim);
void mostrarVetorInteiros (int vetor [], int tam);

int main (void)
{
    int i, limite, tam;
    printf ("Informe o tamanho do vetor: ");
    scanf ("%d", &tam);
    int vetor[tam];

    printf ("Informe o limite do sorteio dos elemento: ");
    scanf ("%d", &limite);

    /*printf ("==VETOR antes funcao==\n");
    for (i=0; i<tam; i++)
    {
        printf ("%d\t", vetor[i]);
    }*/
    gerarInteirosDe0aLimite (vetor, tam, limite);

    printf ("\n==Depois da funcao===\n");
    /*for (i=0; i<tam; i++)
    {
        printf ("%d\t", vetor[i]);
    }*/
    mostrarVetorInteiros(vetor, tam);

    return 0;
}

void gerarInteirosDe0aLimite (int vet[],int tamanho, int lim)
{
    int i;
    srand(time(NULL));

    for (i=0; i<tamanho; i++)
    {
        vet [i]=rand()%(lim+1);

    }
}

void mostrarVetorInteiros (int vet[], int tamanho)
{
    int i;
    for (i=0; i<tamanho; i++)
    {
        printf ("%d  ", vet[i]);
    }
}
