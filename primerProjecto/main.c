#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracion de variables
    //tipoDeDato nombreVariable;
    //mascaras enteros : %d flotantes : %f cacarteres : %c cadenas: %s

    int edad;
    float peso;
    char sexo;
    char nombre[20];

    //printf("La edad vale: %d y el peso vale: %.2f y el sexo es: %c y se llama: %s",edad,peso,sexo,nombre);

    printf("Ingrese edad: ");
    scanf("%d", &edad); //si es un string no hace falta poner el &

    printf("Ingrese el peso: ");
    scanf("%f", &peso);

    printf("Ingrese el sexo: ");
    fflush(stdin); //Esta funcion sirvew para limpiar los buffer,se le pasa stdin para limpiar el input por defecto
    scanf("%c", &sexo);

    printf("Ingrese el nombre: ");
    fflush(stdin);
    scanf("%s", nombre);

    printf("La edad es: %d\n",edad);
    printf("El peso es: %.2f\n",peso);
    printf("El sexo es: %c\n",sexo);
    printf("El nombre es: %s\n",nombre);
}
