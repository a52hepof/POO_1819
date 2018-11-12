/***** ARCHIVO ejemplo-reserva-memoria-matriz.cpp *****/
#include <iostream>

// Se incluye time.h para poder usar la funcion time
#include <time.h>

// Se inclue cstdlib para poder utilizar las funciones srand y rand
#include <cstdlib>

using namespace std;

// Prototipos delas funciones
void reservarMatriz(int** &m, int f, int c);
void rellenarMatriz(int **m, int f, int c);
void verMatriz(int **m, int f, int c);
void liberarMatriz(int** &m, int f);

// Programa principal
int main()
{

  // Declaraciones locales
  int **matriz = NULL, filas, columnas;

  // Se usa la hora para generar la semilla de los números aleatorios
  srand(time(0));

  // Se piden las dimensiones de la matriz 
  cout << "Numero de filas: ";
  cin >> filas;
  cout << "Numero de columnas: ";
  cin >> columnas;

  // Se reserva memoria para la matriz
  reservarMatriz(matriz, filas, columnas);

  // Se asignan valores a las componentes de la matriz 
  rellenarMatriz(matriz, filas, columnas);

  // Se visualizan las componentes de la matriz
  verMatriz(matriz, filas, columnas);

  // Se libera la memoria asignada a la matriz
  liberarMatriz(matriz, filas);


 // Salida normal del programa
  return 0;
}

///////////////////////////////////////////////////////////////////////////
// Funcion: reservarMatriz
// Objetivo: reservar memoria para las componentes de la matriz                  
// Descripcion: 
//     Se utiliza "new" para hacer la reserva de memoria    
// Entrada:                                                            
//   - m: matriz de numeros enteros
//        Es "referencia" a un puntero doble que va a ser modificado                                        
//   - filas: numero de filas de la matriz
//   - columnas: numero de columnas de la matriz                                    
// Devuelve: no devuelve nada
// Dependencias: new                        
///////////////////////////////////////////////////////////////////////////

void reservarMatriz(int** &m, int filas, int columnas)
{

  m = new int * [filas];

  for(int i = 0; i < filas; i++)
    m[i] = new int [columnas];
}


///////////////////////////////////////////////////////////////////////////
// Funcion: rellenarMatriz
// Objetivo: 
//     Rellena las componentes de una matriz con números aleatorios   
//     comprendidos entre 1 y 100            
// Descripcion: 
//     Se utiliza la funcion "rand" para generar números aleatorios
// Entrada:                                                            
//   - m: matriz de números enteros 
//        Es un puntero doble a entero
//   - filas: numero de filas de la matriz
//   - columnas: numero de columnas de la matriz                                   
// Devuelve: no devuelve nada
// Dependencias: rand                        
///////////////////////////////////////////////////////////////////////////

void rellenarMatriz(int **m, int filas, int columnas)
{
  //Rellenamos la matriz con numeros aleatorios comprendidos entre 1 y 100 */
 
  // Las variables de iteracion se declaran en el propio bucle
 
  for(int i = 0; i < filas; i++)
    for(int j = 0; j < columnas; j++)
      m[i][j] = rand() % 100 + 1;
}


///////////////////////////////////////////////////////////////////////////
// Funcion: verMatriz
// Objetivo: visualiza las componentes de una matriz                  
// Descripcion: 
//     Muestra por pantalla las complentes de un matriz 
//     ordenadas por filas y columnas
// Entrada:                                                            
//   - m: matriz de números enteros 
//        Es un puntero doble a entero
//   - filas: numero de filas de la matriz
//   - columnas: numero de columnas de la matriz                                     
// Devuelve: no devuelve nada
// Dependencias: ninguna                        
///////////////////////////////////////////////////////////////////////////

void verMatriz(int **m, int filas, int columnas)
{
  for(int i = 0; i < filas; i++)
  {
    for(int j = 0; j < columnas; j++)    
      cout << m[i][j] <<" ";

    cout << endl; 
  }
}


///////////////////////////////////////////////////////////////////////////
// Funcion: liberarMatriz
// Objetivo: libera la memoria ocupada por un vector                  
// Descripcion: 
//     Se utiliza "delete" para liberar la memoria    
// Entrada:                                                            
//   - m: matriz de números enteros 
//        Es una "referencia" a puntero doble que va a ser modificado
//   - filas: numero de filas de la matriz                                  
// Devuelve: no devuelve nada
// Dependencias: delete                        
///////////////////////////////////////////////////////////////////////////

void liberarMatriz(int** &m, int filas)
{
  for(int i = 0; i < filas; i++)
    delete [] m[i];

  delete [] m;

  m = NULL;
}
