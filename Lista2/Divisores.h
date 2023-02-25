void mostrardivisores (int vet[], int tam)
{
    int i, j, cont;

    for (j=0; j<tam; j++)
    {
        cont=0;
        printf ("\n%d ---> ", vet[j]);
    
        for (i=1; i<=vet[j]; i++)
        {
            if (vet[j]%i==0)
            {
                printf ("%d\t", i);
                cont++;
            }
           
        }
        qtdeDivisores (vet, j);
        
    }
    
}
void qtdeDivisores (int vector [], int endereco)
{
   int cont=0, j;
   	
   	   for (j=1; j<=vector[endereco]; j++)
   	   {
   	   		if (vector[endereco]%j==0)
   	   		{
   	   			cont++;
			}
		}
		printf ("%d divisores\n", cont);
   
    
}
