#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa 
{
    float KECQ_x,KECQ_s=0.0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int KECQ_i=0, KECQ_l;  // determinamos las variables que vamos  a utilizar en este caso números enteros 
    cout<<"Ingrese el valor de KECQ_l: ";  // determinamos al usuario que inicialice la variable 
    cin>>KECQ_l;
    do{ // incio del bucle Do.
        cout<<"Ingrese el valor de KECQ_x: ";  // determinamos al usuario que inicialice la variable 
        cin>>KECQ_x;
        KECQ_i=KECQ_i+1; // Realizamos las respectivas operaciones para obtener nuestro resultado
        KECQ_s=KECQ_s+KECQ_x;
    }while(KECQ_i<KECQ_l); // Condicional que hará que el bucle Do se repita la cantidad de veces que sean necesarias.
    // Imprimimos por consola el resultado de nuestras operaciones 
    cout <<"La suma de los numeros fue: "<<KECQ_s<<endl;
    return 0;

}