#include <stdio.h>

void primo (int *);
void pedirnum (int *);

int main (){
    int num, *pnum=&num;

    pedirnum(pnum);
    primo(pnum);

    return 0;
}

void pedirnum (int *numero){
    printf("*****NUMEROS PRIMOS Y POSICION DE MEMORIA*****\n\n");
    printf("Ingrese un numero: "); scanf("%d", &(*numero));
    printf("\n\nEl numero %d, esta almacenado en la posicion de memoria %p y ",*numero,numero);
}

void primo(int *n){
    int contador=0;
    for(int i=1; i<(*(n+1)); i++){
        if(*n % i == 0){
            contador +=1; }
    }
    if (contador==2){
        printf ("ES PRIMO\n");
    }else{
        printf("NO ES PRIMO\n"); }
}
