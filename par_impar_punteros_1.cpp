#include <stdio.h>
#include <stdlib.h>

void par_impar(int *);
void pedirnumero(int *);

int main() {

    int n, *pn=&n;
    pedirnumero(pn);
    par_impar(pn);

    return 0;
}

void pedirnumero (int *numero){
	printf("*****NUMERO PAR O IMPAR Y POSICION DE MEMORIA*****\n\n");
    printf("Ingrese un numero: "); scanf("%d",&(*numero));

    printf("\nValor %d almacenado en la pocision de memoria %p\n",*numero,numero);
}

void par_impar (int *pn) {
    if (*pn%2!=0){
        printf("ES IMPAR");
    }else{
        printf("ES PAR"); }
}
