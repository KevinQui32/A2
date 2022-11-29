#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float KECQ_x,KECQ_s=0,KECQ_s1=0,KECQ_s5=0; // declaramos las variables que vamos a utilizar con decimales
	int KECQ_i=0,KECQ_l,KECQ_i1=0,KECQ_i5=0; // declaramos las variables que vamos a utilizar únicamente enteras.
	cout<<"Ingrese l: ";cin>>KECQ_l; // declaramos la variable que en este caso será determinada por el usuario
	do{ // ingresamos a un ciclo do

	cout<<"Ingrese x: ";cin>>KECQ_x; // determinamos al usuario que ingrese la variable de x
	KECQ_i=KECQ_i+1; // hacemos los respectivos cálculos
	KECQ_s=KECQ_s+KECQ_x;
	if(KECQ_x==1){ // Condicional dependiente del cálculo anterior
		KECQ_i1=KECQ_i1+1;
		KECQ_s1=KECQ_s1+KECQ_x;
	}else{ // si la condición anterior no se cumple a partir del cálculo anterior, se hará un cálculo alternativo.

		KECQ_i5=KECQ_i5+1;
		KECQ_s5=KECQ_s5+KECQ_x;
	}

	}while(KECQ_i<KECQ_l); // Ciclo Do, se repetirá siempre y cuando i sea mayor a l
	// a continuación arrojamos al usuario los resultados de nuestras operaciones.
	cout<<"La cantidad de monedas es: "<<KECQ_i<<endl;
	cout<<"El valor es: "<<KECQ_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<KECQ_i1<<endl;
	cout<<"El valor es: "<<KECQ_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<KECQ_i5<<endl;
	cout<<"La cantidad de moneda es: "<<KECQ_s5<<endl;
	return 0;
}