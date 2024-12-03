/* ************************************************* CLASE 3 ACTIVIDADDD 5 *********************************************** */
/* ************************************************* CONVERSOR CELSIUS A FARENHEIT *********************************************** */

#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    double CENTIGRADOS, FARENHEIT;                                                                                         // INICIALIZAR VARIABLES
    cout << "Ingresa la temperatura en grados centigrados" << endl;                                                        // DAR INSTRUCCION AL USUARIO
    cin >> CENTIGRADOS;                                                                                                    // SOLICITAR TEMPERATURA EN GRADOS CELCIUS
    FARENHEIT = ((CENTIGRADOS * 9 / 5) + 32);                                                                              // REALIZAR LA CONVERSION
    cout << "La temperatura en grados centigrados " << CENTIGRADOS << " es igual a " << FARENHEIT << " farenheit" << endl; // MOSTRAR EL RESULTADO
}
