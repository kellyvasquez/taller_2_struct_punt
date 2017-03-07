#include <stdio.h>
#include <stdlib.h>

struct estudiante {
    char nombre[30];
    int edad;
    int grado;
    float promedio; };

int main(){

    estudiante estud[3];
    int mayor=0;
    float prom;

    printf("**********DATOS DEL ESTUDIANTE**********\n\n");

    for(int i=0;i<3;i++)
    {   printf("Ingrese su nombre: "); scanf("%s", estud[i].nombre);
        printf("Ingrese su edad: "); scanf("%d", &estud[i].edad);
        printf("Ingrese el grado: "); scanf("%d", &estud[i].grado);
        printf("Ingrese el promedio: "); scanf("%f", &estud[i].promedio);
        printf("-----------------------------------------------\n"); }

        system("cls");

        prom=estud[0].promedio;

        for(int i=0;i<3;i++){
        if(prom<=estud[i].promedio)
        { prom=estud[i].promedio;
            mayor=i; }
        }

    printf("**********MEJOR PROMEDIO**********\n\n");
    printf("Nombre: %s",estud[mayor].nombre);
    printf("\nEdad: %d",estud[mayor].edad);
    printf("\nGrado: %d",estud[mayor].grado);
    printf("\nPromedio: %1.1f",estud[mayor].promedio);

    return 0;
}
