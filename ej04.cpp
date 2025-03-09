#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    system("cls");
    int s_ant,s_post;
    cout<<"Ingrese su salario: ";
    cin>>s_ant;
    s_post = s_ant + (s_ant * 0.25);
    cout<<"El incremento del 25% de su salario es: "<<s_ant * 0.25<<endl;
    cout<<"Su nuevo salario es: "<<s_post; 
    getch();
    return 0;
}