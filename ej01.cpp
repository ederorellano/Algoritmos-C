#include <iostream>
using namespace std;

int main() {
    system("cls");
    int tp, ext, exp;
    float cf;
    cout<<"Curso Introduccion a la Computacion\n";
    cout<<"-----------------------------------\n\n";
    cout<<"Ingrese el promedio de sus 3 trabajos practicos: ";
    cin>>tp;
    cout<<"Ingrese su Calificacion del Examen Teorico: ";
    cin>>ext;
    cout<<"Ingrese su Calificacion del Examen Practico: ";
    cin>>exp;
    cf = 0.4 * tp + 0.25 * ext + 0.35 * exp;
    cout<<"\n\nSu calificacion final es: "<<cf;
    return 0;
}

