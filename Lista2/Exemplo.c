
#include<stdio.h>
int main (void)
{
	int i=0;
	char maiuscula[51], minuscula[51], string[51];
	
	printf("Insira um texto: ");
	setbuf(stdin, NULL);
	fgets(string, 51, stdin);
	
	while (string[i] !='\0')
	{
		if (string[i]>=65 && string[i]<=90)
		{
		   maiuscula[i]=string[i];
		   minuscula[i]=maiuscula[i]+32;
		}
		else if(string[i]>=97 && string[i]<=122)
		{
			minuscula[i]=string[i];
			maiuscula[i]=minuscula[i]-32;
		}
		else 
		{
			maiuscula[i]=string[i];
			minuscula[i]=string[i];
		}
		
		i++;
	}
	maiuscula[i]='\0';
	minuscula[i]='\0';
	printf ("String: %s\n", string);
	
	printf("Maiuscula: %s\n", maiuscula);
	
	printf ("Minuscula: %s\n", minuscula);
	
}
