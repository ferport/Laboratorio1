#include <stdio.h>
#include <stdlib.h>
//pedir 2 numero y mostrar el promedio entre ambos
int main()
{
    int num1;
    int num2;
    int suma;
    float promedio;

    printf("Ingrese el primer numero:");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero:");
    scanf("%d", &num2);

    suma = num1 + num2;
    promedio = (float)suma/2; // el float del parentesis es cartear (casting) y sirve para decirle a la maquina que lo que esta a la izquierda es flotante

    printf("El promedio entre estos numeros es: %.2f",promedio);
    return 0;
}
