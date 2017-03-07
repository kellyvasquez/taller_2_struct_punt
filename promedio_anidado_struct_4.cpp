#include <stdio.h>

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

    printf("Ingrese nombre: "); scanf("%s",alum.nombre);
    printf("Ingrese el sexo (F o M): "); scanf("%s",alum.sexo);
    printf("Ingrese edad: "); scanf("%d",&alum.edad);
    printf("Ingrese nota 1: "); scanf("%f",&alum.prom.nota1);
    printf("Ingrese nota 2: "); scanf("%f",&alum.prom.nota2);
    printf("Ingrese nota 3: "); scanf("%f",&alum.prom.nota3);



    printf("Nombre: %s",alum.nombre);
    printf("Sexo: %s",alum.sexo);
    printf("Edad: %d",alum.edad);
    printf("Nota 1: %1.1f",alum.prom.nota1);
    printf("Nota 2: %1.1f",alum.prom.nota2);
    printf("Nota 3: %1.1f",alum.prom.nota3);
    printf("Promedio: %1.1f", (alum.prom.nota1+alum.prom.nota2+alum.prom.nota3)/3);

    return 0;
}

