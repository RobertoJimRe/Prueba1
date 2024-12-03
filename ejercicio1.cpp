#include <iostream>
using namespace std;

/* ******************************************************CLASE 3 ACTIVIDAD 1******************************* */

// INCISO 1 ********************************************************

// int main(int argc, char const *argv[])
// {
//     int edad = 21;
//     long distancia = 488321;
//     string letra = "k";
//     cout << "edad: " << edad << " distancia: " << distancia << " letra: " << letra << endl;
//     edad = 22;
//     distancia = 666543;
//     letra = "t";
//     cout << "Nuevos valores de edad, distancia y letra";
//     cout << "edad: " << edad << " distancia: " << distancia << " letra: " << letra << endl;
// }

// INCISO 2 ********************************************************
int main(int argc, char const *argv[])
{
    /* code */
    char nombre[100];
    char ciudad[80];
    puts("Ingresa tu nombre");
    gets(nombre);
    puts("Ingresa tu ciudad de nacimiento");
    gets(ciudad);

    // cout << "Bienvenido " << nombre << ", encantado de hablar con alguien de " << ciudad << "." << endl;

    puts("Bienvenido");
    puts(nombre);
    puts("Encantado de hablar con alguien de ");
    puts(ciudad);
}
