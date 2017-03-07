#include <stdio.h>
#include <stdlib.h>

struct promedio {
    float nota1;
    float nota2;
    float nota3;
    float prom; };

struct alumno {
    char nombre[30];
    char sexo[10];
    int edad;
    promedio nota[100]; };

int main (){

    alumno alum[100];
    int cant, mayor=0, menor=0;
    float prom_may, prom_men;
    printf("**********REGISTRO DE ESTUDIANTES**********\n\n");
    printf("\nIngrese la cantidad de estudiantes que desea registrar: "); scanf("%d",&cant);
    system("cls");

    printf("**********DATOS DEL ESTUDIANTE**********\n\n");

    for(int i=0;i<cant;i++){
        printf("Ingrese el nombre %d: ", i+1); scanf("%s",alum[i].nombre);
        printf("\nIngrese el sexo (F o M): "); scanf("%s",alum[i].sexo);
        printf("\nIngrese la edad: "); scanf("%d",&alum[i].edad);
        printf("\nIngrese nota 1: "); scanf("%f",&alum[i].nota[i].nota1);
        printf("\nIngrese nota 2: "); scanf("%f",&alum[i].nota[i].nota2);
        printf("\nIngrese nota 3: "); scanf("%f",&alum[i].nota[i].nota3);
        printf("\n-------------------------------------------\n\n");
        alum[i].nota[i].prom=(alum[i].nota[i].nota1+alum[i].nota[i].nota2+alum[i].nota[i].nota3)/3; }
    system("cls");

    prom_may=alum[0].nota[0].prom;
    prom_men=alum[0].nota[0].prom;

    for(int i=0;i<cant;i++)
    { if(prom_may<=alum[i].nota[i].prom);
        { prom_may=alum[i].nota[i].prom;
            mayor=i; }
    }
    for(int i=0;i<cant;i++)
    { if(prom_men>=alum[i].nota[i].prom)
        { prom_men=alum[i].nota[i].prom;
            menor=i; }
    }



    printf("**********ESTUDIANTE CON MEJOR PROMEDIO**********\n\n");
    printf("Nombre: %s",alum[mayor].nombre);
    printf("\nSexo: %s",alum[mayor].sexo);
    printf("\nEdad: %d",alum[mayor].edad);
    printf("\nNota 1: %1.1f",alum[mayor].nota[mayor].nota1);
    printf("\nNota 2: %1.1f",alum[mayor].nota[mayor].nota2);
    printf("\nNota 3: %1.1f",alum[mayor].nota[mayor].nota3);
    printf("\nPromedio: %1.1f", prom_may);
    printf("\n\n");

    printf("**********ESTUDIANTE CON MENOR PROMEDIO**********\n\n");
    printf("Nombre: %s",alum[menor].nombre);
    printf("\nSexo: %s",alum[menor].sexo);
    printf("\nEdad: %d",alum[menor].edad);
    printf("\nNota 1: %1.1f",alum[menor].nota[menor].nota1);
    printf("\nNota 2: %1.1f",alum[menor].nota[menor].nota2);
    printf("\nNota 3: %1.1f",alum[menor].nota[menor].nota3);
    printf("\nPromedio: %1.1f", prom_men);
    printf("\n\n");


    return 0;
}
