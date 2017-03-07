#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct competidor {
    char nombre[30];
    int edad;
    char sexo;
    char club[20]; };

int main(){

    competidor comp;

    cout<<"**********DATOS DE INSCRIPCION**********\n";
    cout<<"\nIngrese su nombre: "; cin.getline(comp.nombre,30);
    cout<<"\nIngrese su edad: "; cin>>comp.edad;
    cout<<"\nIngrese el sexo : "; cin>>comp.sexo; cin.ignore(256,'\n');
    cout<<"\nIngrese el nombre del Club: "; cin.getline(comp.club,20);

    system("cls");

    cout<<"**********DATOS DEL COMPETIDOR**********\n\n";
    cout<<"Nombre: "<<comp.nombre;
    cout<<"\nEdad: "<<comp.edad;
    cout<<"\nSexo: "<<comp.sexo;
    cout<<"\nClub: "<<comp.club;

    if(comp.edad<=15)
    { cout<<"\nCATEGORIA INFANTIL";
    }else{ if (comp.edad>15 && comp.edad<=30)
        { cout<<"\nCATEGORIA JOVEN";
        }else{ if (comp.edad>30)
            { cout<<"\nCATEGORIA ADULTO"; }
            }
        }

    return 0;
}
