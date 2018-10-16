//ruleta.h

#include "crupier.h"
#include "persona.h"
#include "jugador.h"
#include <iostream>
#include <string>
#include <list>
#include <ctime>
#include <cstdlib>


using namespace std;


/*

6-7 test de funcionamiento
8. El método int deleteJugador() recibe el DNI de un jugador y borra de la
lista de jugadores el jugador con ese DNI. Debe devolver 1 si se ha
borrado al jugador, -1 si la lista está vacía y -2 si el DNI no se ha
encontrado en la lista de jugadores. No debe borrar el fichero con las
apuestas de ese jugador.
9. El método int deleteJugador() recibe un objeto de la clase Jugador y borra
de la lista de jugadores el jugador con mismo DNI que el recibido. Debe
devolver 1 si se ha borrado al jugador, -1 si la lista está vacía y -2 si el
DNI no se ha encontrado en la lista de jugadores. No debe borrar el
fichero con las apuestas de ese jugador.
10.
El método void escribeJugadores() escribe los datos de la lista de
jugadores en un fichero texto denominado jugadores.txt. Cada vez que se
escribe este fichero se borra todo su contenido anterior. El formato de
este archivo debe ser:
DNI,código,nombre,apellidos,dirección,localidad,provincia,país,dinero
DNI,código,nombre,apellidos,dirección,localidad,provincia,país,dinero
. . .
Si alguno de los campos está vacío el fichero quedaría de la forma:
DNI,código,nombre,apellidos,,,,,dinero
DNI,código,,,,,,,dinero

*/
#ifndef ruleta_h
#define ruleta_h

class Ruleta{



private:

	int banca_;//dinero que mantiene la banca
	int bola_;//puede tomar valores entre 0 y 36
	list <Jugador> jugadores_;
	Crupier crupier_;

public:

	Ruleta(Crupier const &c):crupier_(c){ //Iniciadores base. recibe como parámetro un objeto de tipo crupier
		banca_=1000000;
		bola_=-1;
		srand(time(NULL));//inicializamos la semilla

	}//~ruleta();

	inline int getBanca() const{return banca_;};
	inline bool setBanca(int banca){

		if (banca>0){

			banca_=banca;
			return 1;
		}
		else return 0;

	};


	inline int getBola() const{return bola_;};
	inline bool setBola(int bola){

		if (bola>=0&&bola<36){

			bola_=bola;
			return 1;
		}
		else return 0;

	};

	inline Crupier getCrupier() const{return crupier_;};
	inline void setCrupier(Crupier c){crupier_=c;};
	inline list<Jugador> getJugadores() const{return jugadores_;};

	bool addJugador(Jugador j);


	
};

#endif