//juego.cc
//Programa para probar la clase Dados

#include <iostream>
#include "dados.h"
#include "dados.cc"

int main () {
	Dados d;
	bool estado;
	int valor;
	
	d.lanzamiento();
	std::cout << "dado 1 = " << d.getDado1() << "\tdado2 = " << d.getDado2() << "\n";
	
	std::cout << "Introduce un valor para el primer dado: ";
	std::cin >> valor;
	if( !(d.setDado1(valor)) )
		std::cout << "valor fuera del rango\n";
		
	std::cout << "Introduce un valor para el segundo dado: ";
	std::cin >> valor;
	if( !(d.setDado2(valor)) )
		std::cout << "valor fuera del rango\n";
		
	std::cout << "Nuevos valores d1 = " << d.getDado1() << "\t d2 = " << d.getDado2() << "\n";
	std::cout << "Valor de la suma de dados: " << d.getSuma() << "\n";
	std::cout << "Valor de la diferencia de los dados: ";
	std::cout << d.getDiferencia() << "\n";
	
	return 0;
}






