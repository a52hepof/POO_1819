//jugador.h

/*Hereda de la clase Persona, tiene un dinero en euros para
apostar (dinero_, de tipo int, no se admiten fracciones de euro en las apuestas)
y tiene un código alfanumérico. Además, cada jugador tiene una lista de
apuestas (apuestas_).
Cada elemento de la lista tiene tres campos: un int para el tipo de apuesta, un
string para el valor de la apuesta y un int para la cantidad apostada. Los tipos
de apuesta son según su código:
1. Apuesta sencilla. Se apuesta a un número entre 0 y 36, y si sale, se gana 35 a 1 (se puede apostar y ganar al 0).
2. Apuesta rojo o negro. Se apuesta a un color y se paga 1 a 1. Si sale elcero, se pierde.
3. Apuesta par o impar. Se apuesta par o impar y se paga 1 a 1. Si sale el cero, se pierde.
4. Apuesta alto o bajo. Bajo es entre 1 y 18; alto entre 19 y 36. Se paga 1 a1. Si sale el cero, se pierde

La clase Jugador debe cumplir los siguientes requisitos:
1. El constructor debe recibir forzosamente DNI y código de jugador, el
resto de parámetros tienen un valor por defecto igual a “ ”. El dinero NO
se recibe como parámetro y debe ser inicializado siempre a 1000.
2. Observadores y modificadores para código de jugador (get/setCodigo())y
dinero (get/setDinero()).
3. La lista de apuestas debe ser dinámica usando la clase list de la STL de
C++ (C++ STL list) donde cada elemento de la lista guarda los tres datos
antes mencionados: tipo, valor y cantidad.
4. Un método, getApuestas(), que devuelve la lista de apuestas (también
podría hacerse pasando como parámetro una referencia a una lista de
apuestas a la que se le asignan las apuestas del jugador, pero no es
necesario ya que un objeto list puede devolverse en una función y se
copia bien sin problemas en otro objeto de tipo list que reciba el valor
devuelto).
5. Un método, setApuestas(), que borra las apuestas actuales y lee del
fichero DNI.txt las nuevas apuestas, siendo DNI el DNI del jugador. El
fichero tiene formato texto y la siguiente estructura:
CÓDIGO-APUESTA,VALOR,CANTIDAD
CÓDIGO-APUESTA,VALOR,CANTIDAD
...
CÓDIGO-APUESTA,VALOR,CANTIDAD
Un ejemplo de este fichero en el formato indicado sería:
1,21,30
2,rojo,15
3,par,20
4,alto,12
6. Usar un editor de texto plano para crear un fichero de texto con algunas
apuestas siguiendo el formato descrito.

*/

#ifndef SYMBOL
#define SYMBOL value


#include "persona.h"


#include <string>
#include <list>
using namespace std;


class Jugador:public Persona{

private:

	int dinero_;
	string codigo_;

	struct apuesta{
		int tipo;
		string valor;
		int cantidad;

	};
	list <apuesta> apuestas_;


public:




};




#endif


