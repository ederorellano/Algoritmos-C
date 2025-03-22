#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    system("cls");
    int p;
    cout<<"PRESUPUESTO ANUAL DE LA FACULTAD DE KELLY"<<endl;
    cout<<"--------------------------------"<<"\n\n";
    cout<<"-> 30% para la Escuela de Agronomia"<<endl;
    cout<<"-> 20% para la Escuela de Fisica"<<endl;
    cout<<"-> 35% para la Escuela de Computacion"<<endl;
    cout<<"-> 25% para la Escuela de Biologia"<<"\n\n\n";
    cout<<"\t\tIngrese su presupuesto anual: ";
    cin>>p;
    cout<<"\n\n";
    cout<<"-> Escuela de Quimica: "<<0.3 * p<<endl;
    cout<<"-> Escuela de Fisica: "<<0.2 * p<<endl;
    cout<<"-> Escuela de Computacion: "<<0.35 * p<<endl;
    cout<<"-> Escuela de Biologia: "<<0.25 * p;
    getch();
    return 0;
}