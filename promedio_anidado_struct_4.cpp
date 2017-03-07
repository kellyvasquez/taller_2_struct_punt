#include <stdio.h>
#include <stdlib.h>

struct promedio {
    float nota1;
    float nota2;
    float nota3; };

struct alumno {
    char nombre[30];
    char sexo[10];
    int edad;
    promedio prom; };

int main (){

    alumno alum;

    printf("**********DATOS DEL ESTUDIANTE**********\n\n");
    printf("Ingrese el nombre: "); scanf("%s",alum.nombre);
    printf("\nIngrese el sexo (F o M): "); scanf("%s",alum.sexo);
    printf("\nIngrese la edad: "); scanf("%d",&alum.edad);
    printf("\nIngrese nota 1: "); scanf("%f",&alum.prom.nota1);
    printf("\nIngrese nota 2: "); scanf("%f",&alum.prom.nota2);
    printf("\nIngrese nota 3: "); scanf("%f",&alum.prom.nota3);
    system("cls");

    printf("**********INFORMACION COMPLETA DEL ESTUDIANTE**********\n\n");
    printf("Nombre: %s",alum.nombre);
    printf("\nSexo: %s",alum.sexo);
    printf("\nEdad: %d",alum.edad);
    printf("\nNota 1: %1.1f",alum.prom.nota1);
    printf("\nNota 2: %1.1f",alum.prom.nota2);
    printf("\nNota 3: %1.1f",alum.prom.nota3);
    printf("\nPromedio: %1.1f", (alum.prom.nota1+alum.prom.nota2+alum.prom.nota3)/3);
    printf("\n\n");

    return 0;
}

