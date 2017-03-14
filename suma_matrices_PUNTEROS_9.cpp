#include<stdio.h>
#include<stdlib.h>

void dato(int fila,int colum,int **matriz);
void imprimir(int fila,int colum,int **matriz);
void suma (int f,int c1,int **matri2,int **resul);

void dato(int fila,int colum,int **matriz){
    for(int i=0;i<fila;i++){
        for(int j=0;j<colum;j++){
            printf("(%d,%d): ",i,j);
            scanf("%d",&matriz[i][j]); }
    }
 }

void imprimir(int fila,int colum,int **matriz){
    for(int i=0;i<fila;i++){
        for(int j=0;j<colum;j++){
            printf(" %d  ",*(*(matriz+i)+j)); }
            printf("\n"); }
 }

void suma (int f, int c1, int **matri2,int **matriz,int **resul){
    for(int i=0;i<f;i++){
        for(int j=0;j<c1;j++){
                resul[i][j]=matri2[i][j]+matriz[i][j]; }
    }
}

int main(){

   int f, c, f1, c1;
   int *matriz, **matri2, **resul, **m;

    printf("***** SUMA DE MATRICES DINAMICAS *****\n\n");
    printf("Ingrese numero de filas de la matriz N- 1: "); scanf("%d",&f);
    printf("Ingrese numero de columnas de la matriz 1: "); scanf("%d",&c);
    printf("\n\n");
    printf("Ingrese numero de filas de la matriz N- 2: "); scanf("%d",&f1);
    printf("Ingrese numero de columnas de la matriz 2: "); scanf("%d",&c1);

    matri2=(int **)malloc(sizeof(int *)*f);
    resul=(int **)malloc(sizeof(int *)*f1);
    m=(int **)malloc(sizeof(int *)*f);

        for(int j=0;j<c;j++){
            matri2[j]=(int *)malloc(sizeof(int)*c); }

        for(int j=0;j<c1;j++){
            resul[j]=(int *)malloc(sizeof(int)*c1);
            m[j]=(int *)malloc(sizeof(int)*c1); }

        for(int i=0;i<f;i++){
            for(int j=0;j<c1;j++){
                m[i][j]=0; }
        }

    printf("\n***** MATRIZ 1 *****\n\n");
    dato(f,c,matri2);

    printf("\n***** MATRIZ 2 *****\n\n");
    dato(f1,c1,resul);

    suma (f,c1,matri2,resul,m);

    printf("\n***** LA SUMA ENTRE LAS DOS MATRICES ES: *****\n\n");
    imprimir(f,c1,m);

    free(matriz);
    free(matri2);
    free(resul);
    free(m);
}
