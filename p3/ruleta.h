// -- ruleta.h --
// Cabecera de la clase Ruleta
#ifndef RULETA_H
#define RULETA_H
#include "jugador.h"
#include "crupier.h"
#include <list>
#include <cstdlib>
using namespace std;

class Ruleta {

	private:
		int banca_;
		int bola_;
		list <Jugador> jugadores_;
		Crupier crupier_;
		Jugador &encuentraJugador(const string dni);//Busca a un jugador por su dni

	public:
		Ruleta(const Crupier &crupier) {
			crupier_ = crupier;
			banca_ = 1000000;//Un millón de euros iniciales
			bola_ = -1;//Un valor no válido para la ruleta
			srand(time(NULL));//Inicializa la semilla para generar ruleta
		}
		int getBanca() { return banca_; }
		int getBola() { return bola_; }
		bool setBanca(int banca);
		bool setBola(int bola);
		Crupier getCrupier() { return crupier_; }
		void setCrupier(const Crupier &crupier) { crupier_ = crupier; }
		list <Jugador> getJugadores() { return jugadores_; }
		bool addJugador(Jugador &jugador);
		int deleteJugador(const Jugador &jugador);
		int deleteJugador(const string dni);
		void escribeJugadores();
		void leeJugadores();
		void giraRuleta();
		void getPremios();



};
#endif
