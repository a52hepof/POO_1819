//jugador.cc

#include "jugador.h"
#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;


void Jugador::setApuestas(){

	Jugador j("33XX", "1");


	char tipo[10], valor[10], cantidad[10];
	Apuesta a;
	j.apuestas_.clear();// para borrar elementos de la lista

	string nombreFichero=getDNI() + ".txt";
	ifstream entrada (nombreFichero.c_str());
	if (entrada.is_open()){
		while (entrada.getline(tipo,256,',')){

			entrada.getline (valor,256,',');
			entrada.getline(cantidad,256,'\n');
			a.tipo= atoi (tipo);
			a.valor=valor;
			a.cantidad=atoi(cantidad);
			j.apuestas_.push_back(a);
		}

	entrada.close();
	}

	else{
		cout<< "Fichero no esta abierto";
		exit(-1);
	}







}