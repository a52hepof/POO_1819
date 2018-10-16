//ruleta.cc

#include "ruleta.h"
#include "jugador.h"
#include "persona.h"
#include "crupier.h"
#include <list>
#include <fstream>
#include <string>

using namespace std;

bool Ruleta::addJugador(Jugador j){

  	string nameFile=j.getDNI()+".txt";
  	ifstream iFile;
  	jugadores_.push_back(j);

  	if(!iFile.is_open()){
				ofstream oFile (nameFile.c_str());
				oFile.close();
				return true;	
	}
	else{
		return false;
	}
	iFile.close();

return 0;

}

int Ruleta::deleteJugador(string dni_jugador){

	if (jugadores_.empty()){
		return -1;
	}
	list <Jugador>::iterator i;

	for( i = jugadores_.begin(); i != jugadores_.end(); ++i ){

		if (i->getDNI()==dni_jugador){
			jugadores_.erase(i);
			return 1;
		}
		else{return -2;}
	}

	return 0;	
}

int Ruleta::deleteJugador(Jugador j){

	if (jugadores_.empty()){
		return -1;
	}
	list <Jugador>::iterator i;

	for( i = jugadores_.begin(); i != jugadores_.end(); ++i ){

		if (i->getDNI()==j.getDNI()){
			jugadores_.erase(i);
			return 1;
		}
		else{return -2;}
	}
	
	return 0;
  		
}




