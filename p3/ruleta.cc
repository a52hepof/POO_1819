//ruleta.cc

#include "ruleta.h"
#include "jugador.h"
#include "crupier.h"
#include "bola.h"
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
	//oFile<<banca_;
	oFile.close();
}



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

void Ruleta::limpiarLista(list <Jugador> *j){

	j->clear();//

}


void Ruleta::crearApuestas(string DNI, int tipo, string valor, int cantidad){

	string nameFile=DNI+".txt";
	ifstream iFile;
	iFile.open(nameFile);

	if (!iFile){
		ofstream oFile(nameFile.c_str());

	}
	iFile.close();

	ofstream oFile(nameFile, ios::app);

	Jugador j("", "");
	list <Apuesta> apuestaAux;
	Apuesta aux;
	aux.tipo=tipo;
	aux.valor=valor;
	aux.cantidad=cantidad;
	apuestaAux.push_back(aux);
	

	list <Apuesta>::iterator i;
	
	for ( i=apuestaAux.begin() ; i !=apuestaAux.end();  ++i){
		oFile<< i->tipo<<","<<i->valor<<","<<i->cantidad<<endl;
	}
	oFile.close();

}

void Ruleta::getPremios(){

	list <Jugador>::iterator itJ;
	Jugador j("", "");

	list <Apuesta>::iterator itA;
	list <Apuesta> a;
	
	Bola b;
	
	//(j.getApuestas()).clear();
	//Apuesta a;

	for (itJ=jugadores_.begin(); itJ!=jugadores_.end(); itJ++){

		itJ->setApuestas();
		a=itJ->getApuestas();
		cout<<itJ->getDNI()<<"*********"<<endl;
		//int i=1;
		for (itA = a.begin(); itA!=a.end(); ++itA){
			//giraRuleta();

			switch (itA->tipo){

				case 1:{

					int valorA=atoi(itA->valor.c_str());// c_str para que haga la conversi´on bien a integer
					cout<<"bola ruleta: "<<bola_<<endl;
					cout<<"valor jugado: "<<valorA<<endl;
					if (atoi(itA->valor.c_str())==bola_){
						
						//habria que verificar que la cantidad apostada es siempre menor que el dinero que se tiene
						int dinero=itJ->getDinero();
						dinero=(itJ->getDinero()+(itA->cantidad)*35);
						itJ->setDinero(dinero);
						cout<<dinero<<"---"<<(itJ->getDinero())<<endl;
						//itJ->setDinero((itJ->getDinero()+(itA->cantidad)*35));
						banca_-=(itA->cantidad)*35;
					}

					else{
						itJ->setDinero((itJ->getDinero()-(itA->cantidad)));
						banca_+=(itA->cantidad);
					}
				}break;

				case 2:{
					string colorBola;
					if (b.Color(bola_)==true){

						colorBola="rojo";
					}
					else{colorBola="negro";}
					cout<<"bola ruleta: "<<bola_<<"--color bola ruleta: "<<colorBola<<endl;
					cout<<"color jugado: "<<itA->valor.c_str()<<endl;

					if(colorBola==itA->valor.c_str()&&bola_!=0){
						itJ->setDinero((itJ->getDinero()+(itA->cantidad)));
						banca_-=(itA->cantidad);
					}
					else{
						(*itJ).setDinero((itJ->getDinero()-(itA->cantidad)));
						banca_+=(itA->cantidad);

					}


				}break;

				case 3:{
					string paridadBola;
					if (b.esPar(bola_)==true){

						paridadBola="par";
					}
					else{paridadBola="impar";}
					cout<<"bola ruleta: "<<bola_<<"--paridad bola ruleta: "<<paridadBola<<endl;
					cout<<"paridad jugada: "<<itA->valor.c_str()<<endl;

					if(paridadBola==itA->valor.c_str()&&bola_!=0){
						itJ->setDinero((itJ->getDinero()+(itA->cantidad)));
						banca_-=(itA->cantidad);
					}
					else{
						itJ->setDinero((itJ->getDinero()-(itA->cantidad)));
						banca_+=(itA->cantidad);
					}

				}break;

				case 4:{
					string altoBajoBola;
					if (b.Alto(bola_)==true){
						altoBajoBola="alto";
					}
					else{altoBajoBola="bajo";}
					//cout<<"bola ruleta: "<<bola_<<"--altoBajo bola ruleta: "<<altoBajoBola<<endl;
					//cout<<"paridad jugada: "<<itA->valor.c_str()<<endl;

					if(altoBajoBola==itA->valor.c_str()&&bola_!=0){
						itJ->setDinero((itJ->getDinero()+(itA->cantidad)));
						banca_-=(itA->cantidad);
					}
					else{
						itJ->setDinero((itJ->getDinero()-(itA->cantidad)));
						banca_+=(itA->cantidad);

					}


				}break;
			}

		}
	cout<<"dinero jugador "<< itJ->getDNI()<<":"<<itJ->getDinero()<<endl;
	cout<<"dinero banca "<<banca_<<endl;	
	}	
	



		/*

		
			cout<<"Apuesta: "<<i<<endl;
			cout<<itA->tipo<<endl;
			cout<<itA->valor<<endl;
			cout<<itA->cantidad<<endl;
			i++;

			//giraRuleta();
			int valorA=atoi(itA->valor.c_str());// c_str para que haga la conversi´on bien a integer
			cout<<"bola ruleta: "<<bola_<<endl;
			cout<<"valor jugado: "<<valorA<<endl;

			//bola

			if(valorA==bola_){
				cout<<"Acierto";

			}

			//par

			if(b.esPar(bola_)==1){
				cout<<"par"<<endl;
			}
			else{
				cout<<"impar"<<endl;

			}

			//rojo

			if(b.Color(bola_)==1){
				cout<<"rojos"<<endl;
			}
			else{
				cout<<"negros"<<endl;

			}
			//alto


			if(b.Alto(bola_)==0){
				cout<<"Alto"<<endl;
			}
			else{
				cout<<"Bajo"<<endl;

			}
		*/

}		

		
	










