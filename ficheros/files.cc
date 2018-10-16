#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdio>
#include <iostream>


using namespace std;

int main(){
	
	string nameFile="fichero.txt";
	ifstream iFile;
	char cadenaAux[256];

	
	
	//comprobar existencia fichero
	iFile.open(nameFile);
	if (!iFile.is_open()){
		cout<<"el fichero: "<<nameFile<<" no se encuentra y se va a crear"<<endl;
		ofstream oFile(nameFile);//para crear un archivo con un nombre
		oFile<<"Hola amigo como estas\n";
		oFile.close();
		
	}

	else{
		cout<<"El fichero "<<nameFile<< " se encuentra y no se ha modificado nada"<<endl;
	}
	
	iFile.close();


	//leer fichero

	iFile.open(nameFile);

	 while(!iFile.eof()) {
		iFile.getline(cadenaAux, 128);
      
      	cout << cadenaAux<<endl;
   }

   iFile.close();

	return 0;
}