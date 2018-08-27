#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;

    printf("Ejercicio numero el medio:\n");

    printf("Ingrese el primer numero:\n");
    setbuf(stdin, NULL);
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero:\n");
    setbuf(stdin, NULL);
    scanf("%d", &numeroDos);

    printf("Ingrese el tercer numero:\n");
    setbuf(stdin, NULL);
    scanf("%d", &numeroTres);


    return 0;
}
