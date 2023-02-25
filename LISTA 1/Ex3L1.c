/*Gerar elementos inteiros aleatórios entre 1 e 10 em um vetor A de tamanho 10 e criar um vetor B de mesma dimensão e com os mesmos
elementos de A, mas em ordem invertida, ou seja, o primeiro elemento de A será o último de B, o segundo elemento de A será o
penúltimo de B e assim sucessivamente.*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "Vetores.h"

int main (void)
{
    char ch;
    int tam=10, limite=10, i, limiteIn=1;
    do
    {

        int vetor[tam];

        gerarVetorInteiroDe1aLimite(vetor, tam, limite, limiteIn);
        printf("\n===Vetor A===\n");
        showVetor(vetor, tam);

        printf("\n===Vetor B===\n");
        showVetorContrario(vetor, tam);


        printf ("\nDeseja repetir o programa? (S/s) ");
        setbuf(stdin, NULL);
        scanf ("%c", &ch);

    }while (ch=='S'||ch=='s');

}
