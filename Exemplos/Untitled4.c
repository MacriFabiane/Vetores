#include<stdio.h>
int main (void)
{
    char ch;
    int i, j,k, num, contDiv;
    do
    {
        do{
        printf ("Informe um numero positivo: ");
        scanf ("%d",& num);
        }while(num<0);

        for (i=num; i<=num+10; i++)
        {
            contDiv=0;
            printf ("\n%d --> ", i);
            for (k=1; k<=i; k++)
            {

            for (j=2; j<k; j++)
           {
            if  (k%j==0)
            {
                contDiv++;
                break;
            }
            if (contDiv==0)
            {
               printf ("%d,\t", k);
            }
          }
        }
        }




        printf ("\nDeseja repetir o programa? ");
        setbuf (stdin,NULL);
        scanf ("%c", &ch);

    }while (ch=='S'||ch=='s');
}
