#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    int KECQ_aa, KECQ_ma, KECQ_da, KECQ_an, KECQ_mn, KECQ_dn, KECQ_a, KECQ_m, KECQ_d; // declaramos las variables que vamos a utilizar.. en este caso números enteros
    cout << "Ingrese la fecha actual Año-Mes-Dia :"; // enviamos un texto de salida que indique al usuario un formato a enviarnos
    cin >> KECQ_aa >> KECQ_ma >> KECQ_da; // enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : "; // enviamos texto de salida indicando al usuario formato a enviarnos.
    cin >> KECQ_an >> KECQ_mn >> KECQ_dn;// enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario

    if (KECQ_da > KECQ_dn) // Condiciónal, verificamos si el día de la fecha de nacimiento es iguala al día actual
    {

        KECQ_d = KECQ_da - KECQ_dn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
        // realizamos la respectiva operación para el cálculo
        KECQ_da = KECQ_da + 30;
        KECQ_ma = KECQ_ma - 1;
        KECQ_d = KECQ_da - KECQ_dn;
    }
    // Condicional. verificamos si el Mes actual es mayor que el mes de nacimiento.
    if (KECQ_ma > KECQ_mn)
    {

        KECQ_m = KECQ_ma - KECQ_mn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
         // realizamos la respectiva operación para el cálculo 
        KECQ_ma = KECQ_ma + 12;
        KECQ_aa = KECQ_aa - 1;
        KECQ_m = KECQ_ma - KECQ_mn;
    }
    // Finalizamos con el cálculo usando la operación entre el año actual y el de nacimiento
    KECQ_a = KECQ_aa - KECQ_an;
    // arrojamos el resultado de nuestra operación.
    cout << "Usted tiene " << KECQ_a << " años, " << KECQ_m << " meses," << KECQ_d << " dias" << endl;
    return 0;
}