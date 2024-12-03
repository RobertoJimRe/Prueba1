/* ***************************************** CLASE 3 ACTIVIDAD 3 ************************************************* */
/* ************************************************* SUMA DE TRES NUMEROS SOLICITADOS AL USUARIO *********************************************** */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int NUMBER1, NUMBER2, NUMBER3, SUM;                                                               // DECLARAR LAS VARIABLES DE LOS TRES NUMEROS Y LA SUMA
    printf("BIENVENIDO AL PROGRAMA QUE SUMA TRES NUMEROS\n");                                         // IMPRIME UNA INTRODUCCION AL PROGRAMA
    cout << "INGRESA TU PRIMER NUMERO: ";                                                             // DA LA INSTRUCCION PARA INGRESAR EL PRIMER VALOR
    cin >> NUMBER1;                                                                                   // SE SOOLICITA EL PRIMER VALOR AL USUARIO
    cout << "INGRESA TU SEGUNDO NUMERO: ";                                                            // DA LA INSTRUCCION PARA INGRESAR EL SEGUNDO VALOR
    cin >> NUMBER2;                                                                                   // SE SOLICIRA EL SEGUNDO VALOR AL USUARIO
    cout << "INGRESA TU TERCER NUMERO: ";                                                             // DA LA INSTRUCCION PARA INGRESAR EL TERCER VALOR
    cin >> NUMBER3;                                                                                   // SE SOLICITA EL TERCER VALOR
    SUM = NUMBER1 + NUMBER2 + NUMBER3;                                                                // SE REALIZA LA SUMA DE LOS TRES VALORES SOLICITADOS
    cout << "LA SUMA DE " << NUMBER1 << " + " << NUMBER2 << " + " << NUMBER3 << " = " << SUM << endl; // SE IMPRIME EL RESULTADO Y LA SUMA
}
