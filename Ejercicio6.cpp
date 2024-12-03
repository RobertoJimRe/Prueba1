/* ************************************************* CLASE 3 ACTIVIDADDD 6 *********************************************** */
/* ************************************************* PROGRAMA CALCULO DE PRECIOS *********************************************** */

#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    double PRECIO, DESCUENTO, PRECIOFINAL;                                                                         // INICIALIZAR VARIABLES
    cout << "Introduzca el precio del producto" << endl;                                                           // DAR INSTRUCCION
    cin >> PRECIO;                                                                                                 // SOLICITAR EL PRECIO AL USUARIO
    cout << "Introduzca el descuento del producto" << endl;                                                        // DAR INSTRUCCION
    cin >> DESCUENTO;                                                                                              // SOLICITAR EL DESCUENTO AL USUARIO
    PRECIOFINAL = (PRECIO - ((PRECIO * DESCUENTO) / 100));                                                         // CALCULAR EL PRECIO FINAL DEL PRODUCTO
    cout << "El precio del producto es de $" << PRECIO << " con un descuento de " << DESCUENTO << "%. El precio final es de $" << PRECIOFINAL << endl; // IMPRIMIR RESULTADO
}
