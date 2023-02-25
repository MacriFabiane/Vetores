
#include <stdio.h>

int main (void)
{
    int i, tam=5;
    float notas [tam], media=0;

    for (i=0; i<tam; i++)
    {
        printf ("Digite a nota do aluno %d: ", i);
        scanf ("%f", &notas[i]);

        media= media+notas[i];

    }
    media=media/5;

    printf ("\nMedia das notas: %.2f\n", media);


    return 0;
}

