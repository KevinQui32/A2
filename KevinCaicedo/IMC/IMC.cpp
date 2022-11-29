#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float KECQ_imc,KECQ_peso,KECQ_altura; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	cout<<"Ingrese el peso (kg): ";cin>>KECQ_peso; // determinamos al usuario que inicialice la variable de peso.
	cout<<"Ingrese la altura (metros): ";cin>>KECQ_altura; // determinamos al usuario que inicialice la variable de altura.
	KECQ_imc=KECQ_peso/(KECQ_altura*KECQ_altura); // Realizamos el respectivo cálculo para obtener IMC.
	// a continuacion, depende del resultado que obtengamos en el IMC
	// repartimos diferentes resultados según las siguientes condiciones	
	if(KECQ_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(KECQ_imc>=18.5 && KECQ_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(KECQ_imc>=25 && KECQ_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(KECQ_imc>=27 && KECQ_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(KECQ_imc>=30 && KECQ_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(KECQ_imc>=35 && KECQ_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(KECQ_imc>=40 && KECQ_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(KECQ_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}