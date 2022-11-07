#include <iostream>

/* E23. Hacer un programa en C++que solicite al usuario que ingrese una fecha y calcule
 el día correspondiente del año. Ejemplo, si se ingresa la fecha 31 12 1998, el número
  que se visualizará será 365. */

using namespace std;
int main(int argc, char** argv) {
	int dia, mes, anio, dia_anio;
		
	cout<<"PROGRAMA QUE CALCULA EL DIA DEL ANIO INFRESANDO UNA FECHA"<<endl;
	cout<<"*********************************************************"<<endl<<endl;
	
	cout<<"Ingresa un dia: ";
	cin>>dia;
	cout<<"Ingresa mes: ";
	cin>>mes;
	cout<<"Ingresa anio: ";
	cin>>anio;
	
	switch(mes){
		case 1:
			dia_anio = dia;
			break;
		case 2:
			dia_anio = dia + 31;
			break;
		case 3:
			dia_anio = dia + 59;
			break;
		case 4:
			dia_anio = dia + 90;
			break;
		case 5:
			dia_anio = dia + 120;
			break;
		case 6:
			dia_anio = dia + 151;
			break;
		case 7:
			dia_anio = dia + 181;
			break;
		case 8:
			dia_anio = dia + 212;
			break;
		case 9:
			dia_anio = dia + 243;
			break;
		case 10:
			dia_anio = dia + 274;
			break;
		case 11:
			dia_anio = dia + 304;
			break;
		case 12:
			dia_anio = dia + 334;
			break;
		default:
			cout<<"La opcion no existe"<<endl;
	}
	
	cout<<"El dia del anio es "<<dia_anio<<endl;
	return 0;
}