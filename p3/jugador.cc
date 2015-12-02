//-- jugador.cc --
//Cuerpo de la clase jugador
#include "jugador.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void Jugador::setApuestas() {

	//Limpia la lista de apuestas	
	apuestas_.clear();
	Apuesta apuesta;
	string nombre_archivo = Jugador::getDNI() + ".txt";

	string cadena;
	ifstream archivo(nombre_archivo.c_str());
	if (archivo.is_open()) {
		while ( getline(archivo,cadena,',') ) {
			
			//Obtenemos los valores para los campos de la estructura Apuesta
			apuesta.tipo = atoi(cadena.c_str());
			getline(archivo,apuesta.valor,',');
			getline(archivo,cadena,'\n');
			apuesta.cantidad = atoi(cadena.c_str());

			//Introducimos la apuesta de la línea en la lista
			apuestas_.push_back(apuesta);
		} 
		archivo.close();
	
	} else {
		cout << "Error abriendo el archivo de apuestas\n";	
	}

}
