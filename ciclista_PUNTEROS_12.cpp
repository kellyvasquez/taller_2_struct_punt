#include <stdio.h>
#include <stdlib.h>

void datos();
void cont();

struct etapa{
    int hora;
    int minuto;
    int seg;
}et[100];

int main (){
    datos();
    cont ();
}

void datos(){
    printf("***** TIEMPO TOTAL EMPLEADOS EN 3 ETAPAS DE UN CICLISTA *****\n\n");
    for (int i=0; i<3; i++){
        printf("\nIngrese datos para la etapa # %i:", i+1);
        printf("\n\nHoras: "); scanf("%d", &et[i].hora);
        printf("Minutos: "); scanf("%d", &et[i].minuto);
        printf("Segundos: "); scanf("%d", &et[i].seg);
    }
}

void cont(){

   int h=0, m=0, s=0;

    for (int i=0; i<3; i++){
        h=h+et[i].hora;
        m=m+et[i].minuto;
        if(m>=60){
            m=m-60;
            h++; }
        s=s+et[i].seg;
        if(s>=60){
            s=s-60;
            m++;
        }
        printf("\n");
    }
    printf("El tiempo total en todas las etapas fue: \n\n");
    printf("Horas: %d", h);
    printf("\nMinutos: %d", m);
    printf("\nSegundos: %d\n", s);
}
