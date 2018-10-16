//jugador.h


#ifndef SYMBOL
#define SYMBOL value


#include "persona.h"


#include <string>
#include <list>
using namespace std;

struct Apuesta{
		int tipo;
		string valor;
		int cantidad;

	};


class Jugador:public Persona{

private:

	int dinero_;
	string codigo_;

	list <Apuesta> apuestas_;
	


public:

	Jugador(string DNI, string codigo, string nombre="", string apellidos="", int edad=0, string direccion="", string localidad="", string provincia="", string pais=""):Persona(DNI, nombre, apellidos, edad, direccion, localidad, provincia, pais){

		codigo_=codigo;
		dinero_=1000;
		

	}

	//Codigo

	inline string getCodigo() const{return codigo_;};
	inline void setCodigo(string codigo){codigo_=codigo;};

	//Dinero

	inline int getDinero() const{return dinero_;};
	inline void setDinero(int dinero){dinero_=dinero;};

	inline list <Apuesta> getApuestas() const{return apuestas_;};
	void setApuestas();



};




#endif


