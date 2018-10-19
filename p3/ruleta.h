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


#ifndef ruleta_h
#define ruleta_h

class Ruleta{


private:

	int banca_;//dinero que mantiene la banca
	int bola_;//puede tomar valores entre 0 y 36
	list <Jugador> jugadores_;
	Crupier crupier_;



public:
	//iniciador base con herencia, como en jugador y sin herencia, como es este caso. Se hace un constructor de copia
	Ruleta(Crupier const &c):crupier_(c){ //Iniciadores base. recibe como parámetro un objeto de tipo crupier
	//Ruleta(string a, string b):crupier(a,b) // es mejor enviar el objeto entero	

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

	int deleteJugador(string dni_jugador);
	int deleteJugador(Jugador j);
	void escribeJugadores();
	void leeJugadores();
	inline void giraRuleta() {bola_=1+rand()%36;};	
	void getPremios(list <Jugador> j);
	void crearApuestas(string DNI, int tipo, string valor, int cantidad);

	
};

#endif