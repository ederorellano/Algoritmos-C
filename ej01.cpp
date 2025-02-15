#include <iostream>
using namespace std;

int main() {
    system("cls");
    int tp, ext, exp, cf;
    cout<<"Ingrese el promedio de sus 3 trabajos practicos: ";
    cin>>tp;
    cout<<"Ingrese su Calificacion del Examen Teorico: ";
    cin>>ext;
    cout<<"Ingrese su Calificacion del Examen Practico: ";
    cin>>exp;
    cf = 0.4 * tp + 2.5 * ext + 3.5 * exp;
    cout<<"\n\nSu calificacion final es: "<<cf;
    return 0;
}

