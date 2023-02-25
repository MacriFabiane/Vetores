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
void gerarVetorInteiroComFaixa(int vet[], int tam, int limSup, int limIn)
{
    int i;
    srand (time (NULL));

    for (i=0; i<=tam; i++)
    {
        vet[i]= rand() % ((limSup-limIn)+1) + limIn;
    }
}
void ordenavetor(int vetor[], int tam)
{
    int aux, i, j;

    for (j=tam-1; j>0; j--)
    {
        for (i=0; i<j; i++)
        {
            if (vetor[i]>vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}
void deixarVetorsemRepeticao (int tam)
{
    int i, j, k, vet[tam];

    for( i = 0; i < tam; i++ )
    {
        for( j = i + 1; j < tam; )
        {
            if( vet[j] == vet[i] )
            {
                for( k = j; k < tam; k++ )
                {
                    vet[k] = vet[k + 1];

                     tam--;
                }
            }
            else
            {
                j++;
            }
        }
    }

}

void gerarVetorFloat0a1 (float vetor[], int tam) 
{
	int i=0;
	
	srand(time(NULL));
	
	for (i=0; i<tam; i++)
	{
		vetor[i] = (float)(rand()) / RAND_MAX; 
	}
}
void gerarVetorFloat0a100 (float vetor[], int tam) 
{
	int i=0;
	
	srand(time(NULL));
	
	for (i=0; i<tam; i++)
	{
		vetor[i] = (float)(rand()) / RAND_MAX *100; 
	}
}
void mostrarVetorFloat (float vetor[], int tam)
{
	int i=0;
	
	for (i=0; i<tam; i++)
	{
		printf ("%4.2f\t", vetor[i]);
	}
}
float somarVetorFloat(float vetor[], int tam)//retorno para a main
{
	int i=0;
	float soma=0;
	
	for (i=0;i<tam; i++)
	{
		soma=soma+vetor[i];
	}
	return (soma);
}
void gerarVetorCharMinuscula (char vetor[], int tam)
{
	int i=0;
	srand(time(NULL));
	for (i=0; i<tam; i++)
	{
		vetor[i] = rand() % 26 + 97;
	}
	
}
void gerarVetorCharMaiuscula (char vetor[], int tam)
{
	int i=0;
	srand(time(NULL));
	for (i=0; i<tam; i++)
	{
		vetor[i] = rand() % 26 + 65;
	}
}
void mostrarVetorChar (char vetor[], int tam, int n)
{
	int i=0, cont=0;
	
	for (i=0; i<tam; i++)
	{ 
	    
		printf ("%c ", vetor[i]);
		cont++;
		if (cont==n)
		{
			printf("\n");
			cont=0;
		}
	}
}
void gerarVetorPositivoNegativo(int vet[], int tam,  int limNeg, int limPos)
{
	int i=0;
	
	srand(time(NULL));
	for (i=0; i<tam; i++)
	{
	 vet[i]=rand() % (limPos - limNeg) + (limNeg+1);

	}
}
void gerarTabuada (int num)
{
	int i=0;
	printf("\n===TABUADA DE %d===\n", num);
	for (i=0; i<=10; i++)
	{
		printf ("%d * %d = %d\n", num, i, num*i);
	}
}
int verElementoDeMaiorFrequencia(int vetor[], int tam)
{
	int i=0, cont=0, j=0, qtdeMaior=0;
	
	qtdeMaior=vetor[i];
	for (i=0; i<tam; i++)
	{
		cont=0;
		for (j=i; j<tam; j++)
		{
			if(vetor[i]==vetor[j])
			{
				cont++;
			}
		}
		
	}
	if (cont>qtdeMaior)
	{
		qtdeMaior=cont;
		cont=vetor[i];
	}
	
	return (qtdeMaior);
} 
void gerarVetorSemRepeticao (int vetor[], int tam, int lim)
{
	int i, k;
	srand(time(NULL));
		
	for (i=0; i<tam; i++)
	{
		vetor[i]=rand()% lim + 1;
          
        for(k=0; k <i; k++ )
        {
            if (vetor[i] ==vetor[k])
            {
             	i--;
                break;
			}

        }    
    
	}
}

