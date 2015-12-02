// -- persona.h --
// Contiene la cabecera de la clase Persona
#ifndef PERSONA_H
#define PERSONA_H
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
		bool setDni(string &dni);
		void setNombre(string &nombre);
		void setApellidos(string &apellidos);
		void setDireccion(string &direccion);
		void setLocalidad(string &localidad);
		void setProvincia(string &provincia);
		void setPais(string &pais);		
		string getNombre() { return nombre_; }
		string getDni() { return dni_; }
		string getApellidos() { return apellidos_; }
		string getDireccion() { return direccion_; }
		string getLocalidad() { return localidad_; }
		string getProvincia() { return provincia_; }
		string getPais() { return pais_; }
		string getApellidosyNombre() { return apellidos_ + ", " + nombre_}
		

}
#endif
