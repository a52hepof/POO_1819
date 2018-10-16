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


	//Para recorrera la lista y buscar elementos en ella
	/*
	list <Jugador>::iterator i;

	for( i = jugadores_.begin(); i != jugadores_.end(); ++i ){
  		if (i->getDNI()==j.getDNI()){
			iFile.open(nameFile.c_str());
		
  	}
  	else {

  		return false;
  	}

	}
	*/
return 0;

}