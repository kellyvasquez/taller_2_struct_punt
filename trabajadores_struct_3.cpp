#include <stdio.h>
#include <stdlib.h>

struct trabajadores{
    char nombre[30];
    int salario; };

int main()
{
    trabajadores trabajador[100];
    int cant, sal_may, sal_men, mayor=0, menor=0;
    printf("**********REGISTRO DE TRABAJADORES**********\n\n");
    printf("\nIngrese la cantidad de trabajadores que desea registrar: "); scanf("%d",&cant);
    system("cls");

    printf("**********DATOS DEL TRABAJADOR**********\n\n");

    for(int i=0;i<cant;i++)
    {   printf("Ingrese el nombre del trabajador %d: ",i+1); scanf("%s",trabajador[i].nombre);
        printf("Ingrese el salario: "); scanf("%d",&trabajador[i].salario);
        printf("-------------------------------------------\n"); }
    system("cls");

    sal_may=trabajador[0].salario;
    sal_men=trabajador[0].salario;

    for(int i=0;i<cant;i++)
    { if(sal_may<=trabajador[i].salario);
        { sal_may=trabajador[i].salario;
            mayor=i; }
    }
    for(int i=0;i<cant;i++)
    { if(sal_men>=trabajador[i].salario)
        { sal_men=trabajador[i].salario;
            menor=i; }
    }

    printf("**********TRABAJADOR CON MEJOR SALARIO**********\n\n");
    printf("Nombre del trabajador: %s", trabajador[mayor].nombre);
    printf("\nSalario: %d", trabajador[mayor].salario);

    printf("\n\n**********TRABAJADOR CON MENOR SALARIO**********\n\n");
    printf("Nombre del trabajador: %s", trabajador[menor].nombre);
    printf("\nSalario: %d", trabajador[menor].salario);
    printf("\n\n");

    return 0;
}
