#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Definicion de clase
struct TAlumno
{
    string nombre;
    string apellido;
    int edad;
    string id;
    
    void hablar()
    {
        cout <<"Mi nombre es " << nombre << " " << apellido << endl;
    }
};

int main()
{
    //Declarar e Inicilizar
    int x = 0;
    int y; //Declarar e Inicializar
    y = 10;//Inicializar
    
    
    TAlumno luan = {"Luan", "Dañino", 19, "99999999"};
    TAlumno jaimito; //Declarar
    //Inicializar
    jaimito.nombre = "Jaimito";
    jaimito.apellido = "Quevedo";
    jaimito.edad = 70;
    jaimito.id = "1" ;
    
    luan.hablar();
    jaimito.hablar();
    
    
    return 0;
}