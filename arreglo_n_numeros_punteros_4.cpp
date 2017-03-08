#include <stdlib.h>
#include <stdio.h>

void llenar (int *, int);
void menor(int *, int);

int main(){

    int arreglo[100], *p=arreglo, tam;
     printf("***LLENE EL ARREGLO CON n NUMEROS, SE IMPRIME EL MENOR Y LA POSICION DE MEMORIA***\n\n");
    printf("Ingrese el tamaño del arreglo: "); scanf("%d", &tam);
    printf("\n\n");
    llenar (p,tam);
    menor(p,tam);

return 0;
}

void llenar (int *p, int t){

    for(int i=0;i<t;i++){
        printf("Ingrese numero %d: ",i+1);
        scanf("%d" ,&(*(p+i))); }
}

void menor (int *p, int m){

    int aux, menor;
    aux=*p;

    for (int i=0; i<m; i++){
        if(aux>=*(p+i)){
           aux=*(p+i);
           menor=i; }
    }

    printf("\nEl numero menor del arreglo es %d en la posicion de memoria %d\n",*(p+menor),(p+menor));
}
