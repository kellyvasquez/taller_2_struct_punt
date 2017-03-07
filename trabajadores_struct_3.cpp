#include <stdio.h>
#include <stdlib.h>

struct trabajadores{
    char nombre[30];
    int salario; };

int main()
{
    trabajadores trabajador[100];
    int cant;
    printf("\nIngrese la cantidad de trabajadores que desea registrar: "); scanf("%d",&cant);
    system("cls");

    for(int i=0;i<cant;i++)
    {   printf("Ingrese nombre trabajador %d: ",i+1); scanf("%s",trabajador[i].nombre);
        printf("Ingrese salario: "); scanf("%d",&trabajador[i].salario);
        printf("-------------------------------------------\n"); }
    system("cls");

    printf("**********MEYOR SALARIO**********\n\n");
    printf("Nombre: %s\n");
    printf("Sueldo: %d\n");

    printf("**********MENOR SALARIO**********\n\n");
    printf("Nombre: %s\n");
    printf("Sueldo: %d\n");

}
