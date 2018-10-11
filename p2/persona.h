//persona.h

/*
dni, nombre, apellidos, edad, dirección,
localidad, provincia y país de una persona (todos datos de tipo string salvo
edad que es int).

1.Modificadores (set) y observadores (get) para cada dato (setDNI(),
getDNI(), setNombre(), getNombre(), setEdad(), etc.). La única
comprobación que se debe hacer es en setEdad() para que la edad sea
siempre un entero positivo o cero.
2. Un constructor que recibe como parámetro obligatorio el DNI y como
parámetro opcional el resto de datos en el orden indicado anteriormente
con un valor por defecto igual a “” (cadena vacía) y 0 en caso de la edad.
3. Un método getApellidosyNombre() que devuelve un string con el
formato: “apellidos, nombre” (observa que hay una coma y detrás un
espacio entre los apellidos y elnombre). Usar la concatenación (operador
+) de la clase string.
4. Un método denominado mayor() que devuelve si una persona es mayor
de edad.
*/

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;


class Persona
{

private:

	string DNI_, nombre_, apellidos_, direccion_, localidad_, provincia_, pais_;
	int edad_;


public:
	Persona(string DNI, string nombre="",string apellidos="",int edad=0, string direccion="",string localidad="",string provincia="",string pais=""){

		DNI_=DNI;
		nombre_=nombre;
		apellidos_=apellidos;
		edad_=edad;
		direccion_=direccion;
		localidad_=localidad;
		provincia_=provincia;
		pais_=pais;

	}
	//~Persona();

	//DNI
	inline void setDNI(string DNI){

		DNI_=DNI;
	};
	inline  string getDNI() const{return DNI_;};


	//Nombre
	inline void setNombre(string nombre){

		nombre_=nombre;
	};
	inline  string getNombre() const {return nombre_;};


	//Apellidos
	inline void setApellidos(string apellidos){apellidos_=apellidos;};
	inline  string getApellidos() const {return apellidos_;};

	//Concatenacion nombre y apellidos
	inline string getApellidosyNombre() const { //si es un get no se pasan parámetros
		
		return getApellidos() + ", " +  getNombre();
	};

	
	//Edad
	inline bool setEdad(int edad){
		if (edad>0){
			edad_=edad;
			return 1;
		}
		else{return 0;}
		
	};
	
	inline int getEdad() const{return edad_;};


	inline bool mayor() {
		if (getEdad()>18){
			return true;
		}
		else
			return false;

	}

	//Dirección
	inline void setDireccion(string direccion){
		direccion_=direccion;

	};
	inline string getDireccion() const{return direccion_;};
	

	//Localidad
	inline void setLocalidad(string localidad){
		localidad_=localidad;
	};
	inline string getLocalidad() const{return localidad_;};


	//Provincia
	inline void setProvincia(string provincia){
		provincia_=provincia;
	};
	inline string getProvincia() const{return provincia_;};
	

	//País
	inline void setPais(string pais){
		pais_=pais;
	};
	inline string getPais() const{return pais_;};

	
};










#endif