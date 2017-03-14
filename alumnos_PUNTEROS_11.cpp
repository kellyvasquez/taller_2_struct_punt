#include <stdio.h>
#include <stdlib.h>

void datos ();
void mejor ();

struct alumno {
    char nombre[20];
    int edad;
    float promedio; };

alumno alum[3], *p=alum;

int main(){
    datos ();
    mejor ();
}

void datos(){
    printf("***** REGISTRO DE ALUMNOS *****\n\n");
    for(int i=0;i<3;i++){
        printf("\nIngresar los datos del estudiante N-%i:\n\n",i+1);
        printf("Ingrese el nombre: "); scanf("%s",(*(p+i)).nombre);
        printf("Ingrese la edad: "); scanf("%d",&(*(p+i)).edad);
        printf("Ingrese el promedio: "); scanf("%f",&(*(p+i)).promedio);
    }
}

void mejor (){
    float m_p=(*(p+0)).promedio;
    int a;

    for(int i=0;i<3;i++){
        if(m_p<=(*(p+i)).promedio){
            m_p=(*(p+i)).promedio;
            a=i;}
    }
    printf("\n\n***** EL MEJOR PROMEDIO ES: *****\n\n");
    printf("Nombre: %s",(*(p+a)).nombre);
    printf("\nEdad: %d",(*(p+a)).edad);
    printf("\nPromedio: %1.1f\n",(*(p+a)).promedio);
}
