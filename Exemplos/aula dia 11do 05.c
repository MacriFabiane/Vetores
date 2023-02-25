#include <stdio.h>

int main (void)
{
    int i, contdiv=0;
    char ch;
    printf ("Informe um caractere: ");
    scanf ("%c",& ch);

    printf ("%d\n", ch);

    for (i=2; i<ch; i++)
    {
        if (ch%i==0 && ch!=1)
        {
           contdiv++;
           break;
        }

    }
    if (contdiv==0)
    {
        printf ("%d eh primo\n", ch);
    }
    else
    {
        printf ("%d nao eh primo\n", ch);
    }
    return 0;
}
