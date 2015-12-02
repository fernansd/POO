// -- persona.h --
//Cabecera de la clase Persona
#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

class Persona {
	private:
		string dni_;
		string nombre_;
		string apellidos_;
		string direccion_;
		string localidad_;
		string provincia_;
		string pais_;
	public:
		Persona(string dni, string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="", string pais="") {
			dni_ = dni;
			nombre_ = nombre;
			apellidos_ = apellidos;
			direccion_ = direccion;
			localidad_ = localidad;
			provincia_ = provincia;
			pais_ = pais;
		}
		inline string getDNI() { return dni_; }
		inline string getNombre() { return nombre_; }
		inline string getApellidos() { return apellidos_; }
		inline string getDireccion() { return direccion_; }
		inline string getLocalidad() { return localidad_; }
		inline string getProvincia() { return provincia_; }
		inline string getPais() { return pais_; }
		inline string getApellidosyNombre() { return apellidos_ + ", " + nombre_; }
		inline void setDNI(string &dni) { dni_ = dni; }
		void setNombre(string &nombre) { nombre_ = nombre; }
		void setApellidos(string &apellidos) { apellidos_ = apellidos; }
		void setDireccion(string &direccion) { direccion_ = direccion; }
		void setLocalidad(string &localidad) { localidad_ = localidad; }
		void setProvincia(string &provincia) { provincia_ = provincia; }
		void setPais(string &pais) { pais_ = pais; }
};
#endif
