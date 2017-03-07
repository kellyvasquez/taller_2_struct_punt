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

    alumno alum[100];
    int cant, prom_may, prom_men, mayor=0, menor=0;
    printf("**********REGISTRO DE ESTUDIANTES**********\n\n");
    printf("\nIngrese la cantidad de estudiantes que desea registrar: "); scanf("%d",&cant);
    system("cls");

    printf("**********DATOS DEL ESTUDIANTE**********\n\n");

    for(int i=0;i<cant;i++){
        printf("Ingrese el nombre %d: ", i+1); scanf("%s",alum[i].nombre);
        printf("\nIngrese el sexo (F o M): "); scanf("%s",alum[i].sexo);
        printf("\nIngrese la edad: "); scanf("%d",&alum[i].edad);
        printf("\nIngrese nota 1: "); scanf("%f",&alum[i].prom.nota1);
        printf("\nIngrese nota 2: "); scanf("%f",&alum[i].prom.nota2);
        printf("\nIngrese nota 3: "); scanf("%f",&alum[i].prom.nota3);
        printf("\nPromedio: %1.1f", (alum[i].prom.nota1+alum[i].prom.nota2+alum[i].prom.nota3)/3); }
    system("cls");

    prom_may=alum[0].prom;
    prom_men=alum[0].prom;

    for(int i=0;i<cant;i++)
    { if(prom_may<=alum[i].prom);
        { prom_may=alum[i].prom;
            mayor=i; }
    }
    for(int i=0;i<cant;i++)
    { if(prom_men>=alum[i].prom)
        { prom_men=alum[i].prom;
            menor=i; }
    }



    printf("**********ESTUDIANTE CON MEJOR PROMEDIO**********\n\n");
    printf("Nombre: %s",alum.nombre);
    printf("\nSexo: %s",alum.sexo);
    printf("\nEdad: %d",alum.edad);
    printf("\nNota 1: %1.1f",alum.prom.nota1);
    printf("\nNota 2: %1.1f",alum.prom.nota2);
    printf("\nNota 3: %1.1f",alum.prom.nota3);
    printf("\n\n");

    printf("**********ESTUDIANTE CON MENOR PROMEDIO**********\n\n");
    printf("Nombre: %s",alum.nombre);
    printf("\nSexo: %s",alum.sexo);
    printf("\nEdad: %d",alum.edad);
    printf("\nNota 1: %1.1f",alum.prom.nota1);
    printf("\nNota 2: %1.1f",alum.prom.nota2);
    printf("\nNota 3: %1.1f",alum.prom.nota3);
    printf("\n\n");

    return 0;
}
