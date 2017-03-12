#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nombre(char *);
void vocal(int *,char *);

int main(){
    char nom[30], *p=nom;
    int num, *pp=&num;

    nombre(p);
    num=strlen(nom);
    vocal(pp,p); }

void nombre(char *pv){
    printf("*****NUMERO DE VOCALES QUE HAY EN SU NOMBRE*****\n\n");
    printf("Ingrese nombre: "); scanf("%s",pv);
    printf("\n\n");
    printf("%s ",pv);
}

void vocal(int *pn, char *pv){
    int v=0;
    for(int i=0;i<*pn;i++){
        if(*(pv+i)=='a' || *(pv+i)=='e' || *(pv+i)=='i' || *(pv+i)=='o' || *(pv+i)=='u'){
            v++;}
    }
    printf("tiene %i vocal(es). \n", v);
}
