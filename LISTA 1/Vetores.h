void vetoresInteiros (int vet[],int tamanho, int limite)
{
    int i;
    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vet[i]=rand()%(limite+1);
    }
}

void showVetor (int vet[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
         printf ("%d\t", vet[i]);
    }
}
void showVetorContrario (int vet[], int tamanho)
{
    int i;

    for(i=tamanho-1; i>=0; i--)
    {
         printf ("%d\t", vet[i]);
    }
}

void gerarVetorInteiroDe1aLimite (int vetor [], int tam, int lim, int limIN)
{
    int i;

    srand(time(NULL));

    for (i=0; i<=tam; i++)
    {
        vetor[i]=rand()%(lim-limIN)+(lim+1);
    }
}
void gerarVetorDe0e1 (int vetor [], int tam)
{
    int i;

    srand(time(NULL));

    for (i=0; i<=tam; i++)
    {
        vetor[i]=rand()%2;
    }
}


