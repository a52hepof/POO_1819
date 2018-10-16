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

	list <Jugador>::iterator i;
  	string nameFile=j.getDNI()+".txt";
  	ifstream iFile;

	for( auto i = jugadores_.begin(); i != jugadores_.end(); ++i ){
  		if (i->getDNI()==j.getDNI()){
  			jugadores_.push_back(j);
			iFile.open(nameFile.c_str());
			if(!iFile.is_open()){
				ofstream oFile (nameFile.c_str());
				iFile.close();
				return true;	
			}
  			
  		}
  		else {

  			return false;
  		}

	}

	return 0;

}