#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float KECQ_x,KECQ_s=0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	int KECQ_i=0,KECQ_l; // determinamos las variables que vamos  a utilizar en este caso números enteros 
	cout<<"Ingrese cantidad de egresos  ";cin>>KECQ_l; // determinamos al usuario que inicialice la variable 
	cout<<"Ingrese saldo inicial : ";cin>>KECQ_s; // determinamos al usuario que inicialice la variable 
	
	do{ // inicio del ciclo Do.
	cout<<"Ingrese egreso(x): ";cin>>KECQ_x; // determinamos al usuario que inicialice la variable 
	KECQ_i=KECQ_i+1; //  Realizamos las respectivas operaciones..
	KECQ_s=KECQ_s-KECQ_x;

	}while(KECQ_i<KECQ_l); // Condicional que hará que el do se repita en bucle la cantidad de veces que sea necesaria.
	// Imprimimos en consola al usuario el resultado de las operaciones respectivas.
	cout<<"El saldo final es: "<<KECQ_s<<endl;
	return 0;
}