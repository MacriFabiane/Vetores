#include <stdio.h>

int main (void)
{
    int i;
    int vetorA [10], vetorB [10];

    for (i=0; i<10; i++)
    {
        printf ("Informe um valor: ");
        scanf ("%d", &vetorA[i]);
    }
    for (i=0; i<10; i++)
    {
        vetorB[i]=vetorA[i]*2;
        printf ("\n%d\t", vetorB[i]);
    }
    return 0;

}
