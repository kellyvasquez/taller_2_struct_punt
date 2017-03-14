#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palabra(char *);
void vocal(int *,char *);

int main(){
    char pal[30], *p=pal;
    int num, *pp=&num;

    palabra(p);
    num=strlen(pal);
    vocal(pp,p); }

void palabra (char *pv){
    printf("*****INGRESAE UNA PALABRA E IMPRIMIR EL NUMERO DE VOCALES*****\n\n");
    printf("Ingrese una palabra: "); scanf("%s",pv);
    printf("\n\n");
    printf("%s ",pv);
    printf("\n\n");
}

void vocal(int *pn, char *pv){
    int v_a=0, v_e=0, v_i=0, v_o=0, v_u=0;
    for(int i=0;i<*pn;i++){
        if (*(pv+i)=='a'){
            v_a++; }
        if (*(pv+i)=='e'){
            v_e++; }
        if (*(pv+i)=='i'){
            v_i++; }
        if (*(pv+i)=='o'){
            v_o++; }
        if (*(pv+i)=='u'){
            v_u++;} }
    printf("La vocal A se repite %i veces. \n", v_a);
    printf("La vocal E se repite %i veces. \n", v_e);
    printf("La vocal I se repite %i veces. \n", v_i);
    printf("La vocal O se repite %i veces. \n", v_o);
    printf("La vocal U se repite %i veces. \n", v_u);
}
