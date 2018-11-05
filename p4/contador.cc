//contador.cc

#include "contador.h"
#include <iostream>


Contador::Contador(int valor, int min, int max){//valores por defecto en el fichero de cabecera
	
	if(valor<max){
		min_=min;
		max_=max;
		if(min<=valor && valor<=max){

			valor_=valor;
		}
		else{
			valor_=0;
		}


	}
	else{
		valor_=0;
		min_=0;
		max_=1000;
	}




}


Contador Contador::operator = (int i){

	if (i<min_ || i>max_){
		valor_=0;
		valores_.push_back(valor_);

	}

	else{
		valor_=i;
		valores_.push_back(valor_);

	}

	return *this;
		
}

Contador Contador::operator = (const Contador &c){

	valor_=c.getValor();
	max_=c.getMax();
	min_=c.getMin();
	valores_.push_back(valor_);

	return *this;
}

Contador Contador:: operator ++ (void){//++cont

	valor_=valor_+1;
	if (valor_>=max_){
		valor_=max_;
		valores_.push_back(valor_);

		return *this;
	}
	else{
		valores_.push_back(valor_);
		return *this;

	}
}


Contador Contador:: operator ++ (int){//cont++

	Contador aux=*this;
	valor_=valor_+1;
	if (valor_>=max_){
		valor_=max_;
		valores_.push_back(valor_);

		return aux;
	}
	else{ 
		valores_.push_back(valor_);
		return aux;

	}
}


Contador Contador:: operator -- (void){//--cont

	valor_=valor_-1;
	if (valor_<=min_){
		valor_=max_;
		valores_.push_back(valor_);
		
		return *this;
	}
	else{ 
		valores_.push_back(valor_);
		return *this;
	}
}


Contador Contador:: operator -- (int){//cont--

	Contador aux=*this;
	valor_=valor_-1;
	if (valor_<=min_){
		valor_=0;
		valores_.push_back(valor_);
		return aux;
	}
	else{ 
		valores_.push_back(valor_);
		return aux;

	}
}


Contador operator+(int i, Contador &c){
	c.valor_=c.valor_+i;
	if (c.valor_>c.getMax()){
		c.valor_=c.getMax();
		c.valores_.push_back(c.valor_);
		return c;
	}
	c.valores_.push_back(c.valor_);
	return c;
}

Contador operator+(Contador &c, int i){
	c.valor_=c.valor_+i;
	if (c.valor_>c.getMax()){
		c.valor_=c.getMax();
		c.valores_.push_back(c.valor_);
		return c;
	}
	c.valores_.push_back(c.valor_);

	return c;
}


Contador operator-(int i, Contador &c){
	c.valor_=c.valor_-i;
	if (c.valor_<c.getMin()){
		c.valor_=c.getMin();
		c.valores_.push_back(c.valor_);
		return c;
	}
	c.valores_.push_back(c.valor_);
	return c;
}

Contador operator-(Contador &c, int i){
	c.valor_=c.valor_-i;
	if (c.valor_<c.getMin()){
		c.valor_=c.getMin();
		c.valores_.push_back(c.valor_);
		return c;
	}
	c.valores_.push_back(c.valor_);
	return c;
}	




bool Contador::undo(int n){

	if (n<1){

		n=1;
	}

	int tamano=valores_.size();
	cout<<"tamaño contador: "<<tamano<<endl;
	if(n<tamano){

		for (int i = 0; i < n; ++i){
			valores_.pop_back();
			
		}

	}

	else{
		
		return false;

	}

	return true;

	
	

}






