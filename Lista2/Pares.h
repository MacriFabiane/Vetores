void mostrarPares (int vet[], int tam)
{
	int i, j=2, k;
	for (i=0; i<=tam; i++)
	{
		printf("\n%d=>", vet[i]);
		k=vet[i];
		for ( j=2; j<=k; j+=2) 
		{
           printf (" %d\t",j);
        }
		
		somarPares (vet, i);
	}
}

void somarPares (int vet[], int end)
{
	int j, k;
	int soma=0;
	k= vet[end];
	j=2;
	
	while(j<=k)
	{
		soma=soma+j;
		j=j+2;	    
	}
		
	printf ("Soma= %d\n", soma);	

}

