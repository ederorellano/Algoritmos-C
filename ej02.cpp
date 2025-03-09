#include <iostream>
#include <iomanip> // Para usar las funciones de Fixed y setprecision
#include <conio.h>

using namespace std;

int main() {
    
    float nummujeres, numhombres, totalHM;
    float porcenH, porcenM;
    system("cls");
    cout<<"ESCUELA DE COMPUTACION MATEMATICA\n";
    cout<<"---------------------------------\n\n";
    cout<<"Ingrese el numero de Hombres: ";
    cin>>numhombres;
    cout<<"Ingrese el numero de Mujeres: ";
    cin>>nummujeres;
    totalHM = numhombres + nummujeres;
    porcenH = (numhombres * 100)/totalHM;
    porcenM = (nummujeres * 100)/totalHM;
    cout<<"\n\nEl % de Hombres del  1er Anio es: ";
    cout<<fixed<<setprecision(2)<<porcenH<<" %";
    cout<<"\nEl % de Mujeres del  1er Anio es: ";
    cout<<fixed<<setprecision(2)<<porcenM<<" %";
    getch();
    return 0;
}