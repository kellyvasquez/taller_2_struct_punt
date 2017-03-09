#include <stdio.h>
#include <stdlib.h>

void llenar (int *,int *);
void ascender(int *, int *);
void imprimir(int *,int *);

int main() {

    int tam;
    int *p=&tam;
    printf("**********ARREGLO QUE IMPRIME EN FORMA ASCENDENTE**********\n\n");
    printf("\nIngrese el tamano del arreglo: "); scanf("%d",p);
    printf("\n");
    int arreglo[*p];
    int *pp=arreglo;

    llenar (p, pp);
    ascender (p, pp);
    imprimir (p, pp);
}

void llenar (int *p, int *pp){
    for(int i=0; i<*p; i++) {
        printf("Ingrese numero %d: ",i+1); scanf("%d",&(*(pp+i))); }
}

void ascender (int *p,int *pp){
    int aux, auxx, a;
    for(int i=0;i<*p;i++) {
        aux=*(pp+i);
        for(int k=i;k<*p;k++) {
            if(aux>=*(pp+k)) {
                aux=*(pp+k);
                a=k; }
        }
        auxx=*(pp+i);
        *(pp+i)=aux;
        *(pp+a)=auxx;
    }
}

void imprimir(int *p, int *pp) {
    printf("\nEl arreglo en forma ascendete queda asi:\n\n");
    for(int i=0;i<*p;i++) {
        printf("%d  \n",*(pp+i)); }
}
