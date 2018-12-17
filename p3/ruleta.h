//ruleta.h

#include "crupier.h"
#include "../p2/jugador.h"
#include <iostream>
#include <string>
#include <list>
#include <ctime>
 

using namespace std;


#ifndef ruleta_h
#define ruleta_h

/*La clase ruleta esta compuesta por la bola que se jugara, los jugadores, un crupier y el dinero que dispone la banca
Se inicia con un crupier, 1000000 de dinero en la banca y un valor de -1 de la bola*/


class Ruleta{

private:

	int banca_;//dinero que mantiene la banca
	int bola_;//puede tomar valores entre 0 y 36
	list <Jugador> jugadores_; //jugadores que participaran en la ruleta
	Crupier crupier_;

public:
	//iniciador base con herencia, como en jugador y sin herencia, como es este caso. Se hace un constructor de copia
	Ruleta(Crupier const &c):crupier_(c){ //Iniciador de miembro es distinto a Iniciadores base. recibe como parámetro un objeto de tipo crupier
	//Ruleta(string a, string b):crupier(a,b) // es mejor enviar el objeto entero	

		banca_=1000000;
		bola_=-1;
		srand(time(NULL));//inicializamos la semilla para generar los numeros pseudoaletoarios que tomara la bola de la ruleta

	}

	//~ruleta();

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
	inline void giraRuleta() {bola_=rand()%37;};	
	void limpiarLista(list <Jugador> *j);// se crea para comprender el paso por referencia de listas
	inline void limpiarListaJugadores(){jugadores_.clear();};
	void getPremios();
	void crearApuestas(string DNI, int tipo, string valor, int cantidad);
	
};

#endif