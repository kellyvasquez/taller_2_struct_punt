#include <stdlib.h>
#include <stdio.h>

struct personas {
    char nombre[30];
    bool discapacidad; };

int main(){

    personas pers[100];
    int cant, info;

    printf("**********REGISTRO DE PERSONAS**********\n\n");
    printf("\nIngrese la cantidad de personas que desea registrar: "); scanf("%d",&cant);
    system("cls");

    printf("**********DATOS PERSONALES**********\n\n");

    for(int i=0;i<cant;i++) {
        printf("Ingrese el nombre: "); scanf("%s",pers[i].nombre);
        printf("Tiene alguna discapacidad? (1=SI o 2=NO) : "); scanf("%d",&info);
        if(info==1){
            pers[i].discapacidad=true;
        }else{
            pers[i].discapacidad=false; }
        printf("\n-------------------------------------------\n\n");
    } system("cls");

    int cond[30], sind[30], con=0, sin=0;
    for(int i=0;i<cant;i++){
        if(pers[i].discapacidad==true)
        {   cond[con]=i;
            con++;
        }else{
            sind[sin]=i;
            sin++; }
    }

    printf("**********PERSONAS CON DISCAPACIDAD**********\n\n");
    for(int i=0;i<con;i++) {
        printf("Nombre: %s", pers[cond[i]].nombre);
        printf("\n"); }

    printf("\n**********PERSONAS SIN DISCAPACIDAD**********\n");
    for(int i=0;i<sin;i++){
        printf("Nombre: %s",pers[sind[i]].nombre);
        printf("\n"); }

    return 0;
}
