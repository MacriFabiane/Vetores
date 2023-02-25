#include <stdio.h>

int main (void)
{
    int i;
    float notas [5], media=0;

    for (i=0; i<5; i++)
    {
        printf ("Digite as notas: ");
        scanf ("%f", & notas[i]);

        media= media+notas[i];

    }
    media=media/5;

    printf ("\nMedia das notas: %.2f\n", media);


    return 0;
}

