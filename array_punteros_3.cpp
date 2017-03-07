#include <stdio.h>
#include <stdlib.h>

void llenar_array(int *);
void par(int *);

int main()
{
    int arreg[10],*parreg=arreg;

    llenar_array(parreg);
    par(parreg);

    return 0;
}

void llenar_array(int*p){

    printf("***LLENE EL ARREGLO CON 10 NUMERO, SE IMPRIMEN LOS PARES Y LA POSICION DE MEMORIA***\n\n");
    for(int i=0;i<10;i++)
    {   printf("Ingrese numero %d: ",i+1); scanf("%d",&(*(p+i))); }
}

void par(int *p){

    printf("\nLos numeros pares y su posicion de memoria son: \n\n");
    for (int i=0;i<10;i++){
        if (*(p+i)%2==0){
            printf(" %d es par y su posicion de memoria es %p\n",*(p+i),(p+i));*(p+i); }
    }
}
