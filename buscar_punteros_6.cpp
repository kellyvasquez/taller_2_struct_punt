#include <stdio.h>
#include <stdlib.h>

void llenar (int *, int *);
void buscar (int *, int *);

int main() {

    int tam, *p=&tam;
    printf("**********BUSCAR NUMEROS EN UN ARREGLO**********\n\n");
    printf("Ingrese el tamano del arreglo: "); scanf("%d",&(*p));

    int arreglo[*p];
    int *pp=arreglo;

    llenar (p, pp);;
    buscar (p, pp);

    return 0;
}

void llenar (int *p,int *pp){
    for(int i=0; i<*p; i++) {
        printf("Ingrese numero %d: ",i+1); scanf("%d",&(*(pp+i))); }
}

void buscar (int *p, int *pp){
    int aux, a=0;
    do{
    printf("\nQue numero desea buscar en el arreglo? : "); scanf("%d",&aux);
    for(int i=0; i<*p; i++){
        if(*(pp+i)==aux){
            printf("\nEl numero %d se encuentra en el arreglo y esta en la posicion: %p\n",*(pp+i),(pp+i));
            a++; }
    }
    if(a==0){
        printf("\nEl numero ingresado no se encuentra en el arreglo\n");
    }else{
        a=1; }
    }while(a!=1);
}
