/* ************************************************* CLASE 3 ACTIVIDADDD 2 *********************************************** */
/* ************************************************* CALCULO DE LA MEDIA DEL PRECIO DE UN PRODUCTO ACORDE EL PRECIO DE 3 SUCURSALES ***************** */

#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
    double PRECIO1, PRECIO2, PRECIO3, MEDIA;
    cout << "Introduzca el precio en establecimiento 1, en euros: ";
    cin >> PRECIO1;
    cout << "Introduzca el precio en establecimiento 2, en euros: ";
    cin >> PRECIO2;
    cout << "Introduzca el precio en establecimiento 3, en euros: ";
    cin >> PRECIO3;
    MEDIA = (PRECIO1 + PRECIO2 + PRECIO3) / 3;
    cout << "El precio medio del producto es de " << MEDIA << " euros." << endl;
}
