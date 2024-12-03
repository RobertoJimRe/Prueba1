/* ************************************************* CLASE 3 ACTIVIDADDD 4 *********************************************** */
/* ************************************************* CONVERSOR DE PESOS MEXICANOS A DOLARES *********************************************** */

#include <iostream>
#include <typeinfo>
using namespace std;

/* NOTA: A DIA DE HOY 26/08/24, LA TASA DE CAMBIO ES 1 DOLAR = 19.36 PESOS MEXICANOS CONFORME A BANXICO*/
int main(int argc, char const *argv[])
{
    /* code */
    float PESOS_MEXICANOS, DOLARES = 19.36, CONVERSION;                                              // INICIALIZAR VARIABLES
    cout << "Ingresa la cantidad de pesos mexicanos que desea cambiar a dolares\n";                  // DICTAR INSTRUCCION
    cin >> PESOS_MEXICANOS;                                                                          // SOLICITAR A USUARIO CANTIDAD DE PESOS MEXICANOS
    CONVERSION = PESOS_MEXICANOS / DOLARES;                                                          // REALIZAR LA CONVERSION DE PESOS A DOLARES
    cout << "La cantidad de $" << PESOS_MEXICANOS << " pesos es igual a $" << DOLARES << "dolares."; // IMPRIMIR LA CONVERSION
}
