//ruleta.cc

#include "ruleta.h"
#include "jugador.h"
#include "persona.h"
#include "crupier.h"
#include <list>
#include <fstream>
#include <iostream>
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


void Ruleta::escribeJugadores(){

	string nameFile="jugadores.txt";
	ofstream oFile(nameFile.c_str());

	list <Jugador>::iterator i;
	
	for ( i=jugadores_.begin() ; i !=jugadores_.end();  ++i){
		oFile<< i->getDNI()<<","<<i->getCodigo()<<","<<i->getNombre()<<","<<i->getApellidos()<<","<<i->getEdad()<<","<<i->getDireccion()<<","<<i->getLocalidad()<<","<<i->getProvincia()<<","<<i->getPais()<<","<<i->getDinero()<<endl;
	}
	oFile.close();
}

/*void leeJugadores() 
lee los datos de los jugadores del fichero jugadores.txt y los mete en la lista de jugadores.
La lista de jugadores se borra antes de añadir los jugadores del fichero jugadores.txt
*/

void Ruleta::leeJugadores(){

	jugadores_.clear();

	Jugador j("xxx", "1");
	string nameFile="jugadores.txt";
	ifstream iFile(nameFile);

	char edad[10], dinero[10], DNI[10], codigo[10], nombre[100], apellidos[100], localidad[75], provincia[75], pais[50];

	if (iFile.is_open()){
		
		while (iFile.getline(DNI,10, ',')){
			
			iFile.getline(codigo,10, ',');
			iFile.getline(nombre,100, ',');
			iFile.getline(apellidos, 100, ',');
			iFile.getline(edad, 10, ',');
			iFile.getline(localidad, 75, ',');
			iFile.getline(provincia, 75, ',');
			iFile.getline(pais, 50, ',');
			iFile.getline(dinero,10, '\n');
			j.setDNI(DNI);
			j.setCodigo(codigo);
			j.setNombre(nombre);
			j.setApellidos(apellidos);
			j.setEdad(atoi(edad));
			j.setLocalidad(localidad);
			j.setProvincia(provincia);
			j.setPais(pais);
			j.setDinero(atoi(dinero));

			jugadores_.push_back(j);
		}
	}

	else{cout<<"no se ha posido abrir el fichero"<<endl;}

	iFile.close();
}

/*El método void getPremios() recorre la lista de jugadores y carga
sus apuestas de los ficheros correspondientes. Actualiza el dinero de
cada jugador con lo que ha ganado o ha perdido en cada apuesta, y
actualiza el dinero de la banca con lo que ha ganado o ha perdido en
cada apuesta.
*/
void Ruleta::getPremios(list <Jugador> j){

	//(j).clear();// lo hago para hacer un test pero no funciona. Habria que pasarlo 
					//por referencia
	Jugador gamer("11112", "2");

	list <Jugador>::iterator i;
	//crear fichero apuestas de un jugador
	gamer.setApuestas();

}



void Ruleta::crearApuestas(string DNI, int tipo, string valor, int cantidad){





}



