#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int numeroDelMedio;

    int max;
    int min;

    printf("Ejercicio numero del medio\n");

    printf("\n");

    printf("Ingrese el primer numero:\n");
    setbuf(stdin, NULL);
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero:\n");
    setbuf(stdin, NULL);
    scanf("%d", &numeroDos);

    printf("Ingrese el tercer numero:\n");
    setbuf(stdin, NULL);
    scanf("%d", &numeroTres);

    if(numeroUno == numeroDos || numeroUno == numeroTres || numeroDos == numeroTres){
            printf("No hay numero del medio.");
    } else {
        max = numeroUno;
        min = numeroUno;

        if(max < numeroDos){
            max = numeroDos;
        }

        if(min > numeroDos){
            min = numeroDos;
        }

        if(max < numeroTres){
            max = numeroTres;
        }

        if(min > numeroTres){
            min = numeroTres;
        }

        if(numeroUno != max && numeroUno != min){
            numeroDelMedio = numeroUno;
        }

        if(numeroDos != max && numeroDos != min){
            numeroDelMedio = numeroDos;
        }

        if(numeroTres != max && numeroTres != min){
            numeroDelMedio = numeroTres;
        }

        printf("El numero del medio es %d\n", numeroDelMedio);
    }

    return 0;
}
