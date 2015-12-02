/**
	-- dados.h --
Definición de los métodos de la clase Dados

**/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dados.h"

//Constructor que inicia la semilla e inicializa los dados a 1
//Los métodos de acceso a variables están en el fichero cabezera 
Dados::Dados() {
	d1_ = 1;
	d2_ = 1;
	lanzamientos1_ = 0;
	lanzamientos2_ = 0;
	media1_ = 0;
	media2_ = 0;
	
	srand(time(NULL));
}

//Incorpora el nuevo valor a la media y guarda el valor en el vector
void Dados::updateValue1() {
	media1_ = (media1_ + getDado1()) / 2.;
	for(int i = 1; i<5; i++) {
		ultimos1_[i-1] = ultimos1_[i];
	}
	ultimos1_[4] = getDado1();
	return;
}

//Incorpora el nuevo valor a la media y guarda el valor en el vector
void Dados::updateValue2() {
	media2_ = (media2_ + getDado2()) / 2.;
	for(int i = 1; i<5; i++) {
		ultimos2_[i-1] = ultimos2_[i];
	}
	ultimos2_[4] = getDado2();
	return;
}

//Establece una valor para el dado 2 y devuelve verdadero en caso de tener exito
bool Dados::setDado1(int num) {
	if (num <= 6 && num >= 1) {
		d1_ = num;
		updateValue1();
		lanzamientos1_++;
		return true;
	} else {
		return false;
	}
}

//Establece una valor para el dado 2 y devuelve verdadero en caso de tener exito
bool Dados::setDado2(int num) {
	if (num <= 6 && num >= 1) {
		d2_ = num;
		updateValue2();
		lanzamientos2_++;
		return true;
	} else {
		return false;
	}
}

//Halla la diferencia entre el valor de los dados
int Dados::getDiferencia() {
	if(d1_ > d2_)
		return getDado1() - getDado2();
	else
		return getDado2() - getDado1();
}

//Asigna un valor aleatorio a los dos dados
void Dados::lanzamiento() {
	d1_ = (rand()%6) + 1;
	d2_ = (rand()%6) + 1;
	updateValue1();
	updateValue2();
	lanzamientos1_++;
	lanzamientos2_++;
}

void Dados::getUltimos1(int * v){
	for(int i = 0; i<6; i++) {
		v[i] = ultimos1_[i];
	}
}

void Dados::getUltimos2(int * v){
	for(int i = 0; i<6; i++) {
		v[i] = ultimos2_[i];
	}
}









