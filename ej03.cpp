#include <iostream>
#include <conio.h>

using namespace std;
int main() {

    system("cls");
    int e,aa,an;
    cout<<"Ingrese su Edad : ";
    cin>>e;
    cout<<"Ingrese el anio actual : ";
    cin>>aa;
    an = aa - e;
    cout<<"El anio de nacimiento del estudiante es : "<<an;
    return 0;
    getch();
}