//-- jugador.h --
//Cabecera de la clase Jugador
#ifndef JUGAODR_H
#define JUGADOR_H
#include <string>
#include <list>
#include "persona.h"
using namespace std;

struct Apuesta {
	int tipo;
	string valor;
	int cantidad;
};

class Jugador : public Persona {
	private:
		int dinero_;
		string codigo_;
		list <Apuesta> apuestas_;


	public:
		Jugador(const string &DNI, const string &codigo, string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="", string pais="") : Persona(DNI,nombre, apellidos, direccion, localidad, provincia, pais) {
			dinero_ = 1000;	
			codigo_ = codigo;
		}
		string getCodigo() { return codigo_; }
		void setCodigo(string codigo) { codigo_ = codigo; }
		int getDinero() { return dinero_; }
		void setDinero(int dinero) { dinero_ = dinero; }
		list <Apuesta> getApuestas() { return apuestas_; }
		void setApuestas(); //Detallada en jugador.cc


};

#endif
