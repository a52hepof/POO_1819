//contador.h



#ifndef CONTADOR_H
#define CONTADOR_H

#include <list>
using namespace std;


	class Contador{

	private:
		int valor_;
		int max_;
		int min_;
		//list <int> valores_;


	public:

		list <int> valores_;
		Contador(int valor=0, int min=0, int max=1000);//valores por defecto en fichero de cabecera. En .cc no se indican
		//~contador();

		inline int getValor() const{return valor_;};
		inline int getMax()const{return max_;};
		inline int getMin()const{return min_;};
		inline list<int> getLista()const{return valores_;};
		inline int get(){return valor_;};



		Contador operator = (const int i);
		Contador operator = (const Contador &c);

		Contador operator ++ (void);
		Contador operator ++ (int);
		Contador operator -- (void);
		Contador operator -- (int);


		friend Contador operator+( int i,  Contador &c);
		friend Contador operator+(Contador &c, int i);
		friend Contador operator-( int i,  Contador &c);
		friend Contador operator-(Contador &c, int i);

		bool undo(int n=1);//se pone valor por defecto, asi se puede usar sin pasarle un entero

	
	};

#endif