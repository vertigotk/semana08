#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // <---
using namespace std;
struct TEmpleado
{
string nombre;
string apellido;
float sueldoPorHora;
float sueldoTotal(int horas)
{
return horas * sueldoPorHora;
}
};
int menu()
{
int opcion = 0;
do
{
system ("clear");
cout << "MENU" << endl;
cout << string(4, '~') << endl << endl;
cout << "1. Ingresar Empleado" << endl;
cout << "2. Listar Empleados" << endl;
cout << "0. Para salir" << endl << endl;
cout << "Opcion :";
cin >> opcion;
}
while (opcion < 0 || opcion > 2);
return opcion;
}
int main()
{
vector<TEmpleado> listaEmpleados;
string nombre;
string apellido;
float sueldoPorHora;
TEmpleado empleado;
int opcion = 0;
do
{
opcion = menu();
switch (opcion)
{
case 1: // Añadir un empleado
system("clear");
cout << "Ingrese el nombre :"; cin >> nombre;
cout << "Ingrese el Apellido :"; cin >> apellido;
cout << "Ingrese el Sueldo por Hora :"; cin >> sueldoPorHora;
empleado = {nombre, apellido, sueldoPorHora};
listaEmpleados.push_back(empleado);
break;
case 2: // Listar los empleados
system("clear");
for(auto i: listaEmpleados)
{
cout << i.nombre << " " << i.apellido << endl;
}
break;
}
}
while (opcion != 0);
return 0;
}