#include <stdio.h>
#include <stdlib.h>

/*1)De 5  personas que ingresan al hospital se deben tomar y
validar los siguientes datos.
temperatura hasta 45, sexo f/m y edad 15 y 90, inicial del nombre
a)informar la cantidad de personas de cada sexo.
b)la edad promedio en total
c)la mujer con más temperatura(si la hay)*/

int main()
{
    float temperatura;
    char sexo;
    int edad;
    char inicialNombre;
    int contM = 0;
    int contF = 0;
    int acumEdad = 0;
    float promedioEdad;
    char inicialMaxTemp;
    float maxTemp;


    for(int i = 0; i < 5; i++)
    {
        printf("Ingrese la temperatura: ");
        scanf("%f",&temperatura);
        while(temperatura < 33 || temperatura > 45)
        {
            printf("Error! Ingrese una temperatura valida(33 a 45): ");
            scanf("%f",&temperatura);
        }

    printf("Ingrese el sexo (f/m): ");
        fflush(stdin);
        scanf("%c",&sexo);
        while(sexo != 'f' || sexo != 'm')
        {
            printf("Error! Ingrese un sexo valido(f/m): ");
            fflush(stdin);
            scanf("%c",&sexo);
        }

        printf("Ingrese la edad: ");
        scanf("%d",&edad);
        while(edad < 15 || edad >90)
        {
            printf("Error! Ingrese una edad valida(15 a 90): ");
            scanf("%d",&edad);
        }

        printf("Ingrese la inicial: ");
        fflush(stdin);
        scanf("%c",&inicialNombre);

        if(sexo == 'f'){
            if(contF == 0 || maxTemp > temperatura){
                inicialMaxTemp = inicialNombre;
                maxTemp = temperatura;
            }
            contF ++;
        }else{
            contM ++;
        }

        acumEdad = acumEdad + edad;

    }

    promedioEdad = (float)acumEdad / 5;

    printf("A) Hay %d hombres y %d mujeres\n",contM,contF);
    printf("B) El promedio de edad es de: %f\n",promedioEdad);
    if(contF == 0){
        printf("C) No se ingresaron mujeres\n");
    }else{
        printf("C) La inicial de la mujer con mas temperatura es %c y tiene %f°\n",inicialMaxTemp,maxTemp);
    }

    return 0;
}
