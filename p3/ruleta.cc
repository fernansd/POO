// -- ruleta.cc --
// Cuerpo de la clase Ruleta
#include "persona.h"
#include "ruleta.h"
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;


bool Ruleta::setBanca(int valor) {
	if(valor > 0){
		banca_ = valor;	
		return true;
	} else {
		return false;	
	}

}

bool Ruleta::setBola(int valor) {
	if(valor >= 0 && valor <=36) {
		bola_ = valor;
		return true;
	} else {
		return false;	
	}
}

//Inserta jugador en la lista y le asocia un fichero de apuestas
bool Ruleta::addJugador(Jugador &jugador) {
	//Comprueba si hay un jugador con ese DNI
	for(list<Jugador>::iterator cont=jugadores_.begin(); cont!=jugadores_.end();++cont) {
		if(cont->getDNI() == jugador.getDNI())
			return false;
	}

	//Comprueba si el jugador ya tiene fichero
	ifstream comprueba_archivo((jugador.getDNI()+".txt").c_str());	
	if(comprueba_archivo.is_open()) {
		comprueba_archivo.close();
	} else {
	//Si el jugador no tiene fichero se crea
		ofstream archivo((jugador.getDNI()+".txt").c_str());
		if(!archivo.is_open()){
			cout << "Error creando archivo de jugador" << endl;	
			return false;
		}
		archivo.close();
	}

	//Mete al jugador al final de la lista
	jugadores_.push_back(jugador);
	return true;

}

int Ruleta::deleteJugador(const string dni) {
	for (list<Jugador>::iterator cont=jugadores_.begin(); cont!=jugadores_.end(); cont++) {
		if(cont->getDNI() == dni) {
			jugadores_.erase(cont);
			return 1;
		}	
	}

	if (jugadores_.empty()) return -1;

	return -2;
}

int Ruleta::deleteJugador(const Jugador& jugador) {
	for (list<Jugador>::iterator cont=jugadores_.begin(); cont!=jugadores_.end(); cont++) {
		if(cont->getDNI() == jugador.getDNI()) {
			jugadores_.erase(cont);
			return;
		}	
	}

}

void Ruleta::giraRuleta() {
	bola_ = rand()%37;		

return;
}

void Ruleta::getPremios() {
	//Hacer funcion
return;	
}
