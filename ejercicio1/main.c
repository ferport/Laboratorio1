#include <stdio.h>
#include <stdlib.h>

//pedir 2 numeros y mostrar la suma de los mismos

int main()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese el primer numero:");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero:");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("La suma de ambos numero es igual a: %d",resultado);
    return 0;
}
