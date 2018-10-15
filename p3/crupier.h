//crupier.h

/*hereda de la clase Persona y le añade un código
alfanumérico de empleado del casino. El constructor debe recibir forzosamente
DNI y código de empleado, y el resto de parámetros tienen un valor por defecto
igua a “”. Tener en cuenta que se le deben pasar los parámetros
correspondientes al constructor de la clase base (Persona) mediante
iniciadores de la clase base como se indica aquí:

Crupier(string DNI, string codigo, string nombre="", string
apellidos="" . . .) : Persona(DNI, nombre, apellidos, . . . ,
pais) {codigo_=codigo;};

Añadir también los métodos getCodigo() y setCodigo().
*/

#ifndef CRUPIER_H
#define CRUPIER_H

#include <string>
#include "persona.h"

using namespace std;


class Crupier:public Persona{

private:

	string codigo_;

public:

	Crupier(string DNI, string codigo, string nombre="",string apellidos="",int edad=0, string direccion="",string localidad="",string provincia="",string pais="") : Persona(DNI, nombre, apellidos, edad, direccion, localidad, provincia, pais){
		
		codigo_=codigo;

	};

	inline string getCodigo() const {return codigo_;};
	inline void setCodigo(string codigo){codigo_=codigo;};


};


#endif


