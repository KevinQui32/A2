#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    float KECQ_x, KECQ_s = 0, KECQ_vb, KECQ_piva = 12, KECQ_viva, KECQ_pdesc = 10, KECQ_vdesc, KECQ_vn;  // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int KECQ_i = 0, KECQ_l; // determinamos las variables que vamos a utilizar en este caso números enteros 
    cout << "Ingrese l: "; // determinamos al usuario que inicialice la variable 
    cin >> KECQ_l; // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
    do // inicio del ciclo do.
    {
        cout << "Ingrese x: "; // determinamos al usuario que inicialice la variable 
        cin >> KECQ_x;  // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
        KECQ_i = KECQ_i + 1;  // Inicio de los cálculos dependiendo de la condicional del do.
        KECQ_s = KECQ_s + KECQ_x;
    } while (KECQ_i < KECQ_l); // Condición que hará que este bucle se repita la cantidad de veces que se haya establecido.
    KECQ_vb = KECQ_s; // Realizamos las  operaciones adicionales para obtener un resultado.
    KECQ_viva = KECQ_vb * KECQ_piva / 100;
    KECQ_vdesc = KECQ_vb * KECQ_pdesc / 100;
    KECQ_vn = KECQ_vb + KECQ_viva - KECQ_vdesc;
    // Imprimimos al usuario el resultado de las operaciones correspondientes.
    cout << "El valor a pagar es de: " << KECQ_vn << endl;
    return 0;
}