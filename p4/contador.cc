//contador.cc

#include "contador.h"
#include <iostream>


Contador::Contador(int valor, int min, int max){//valores por defecto en el fichero de cabecera
	
	if (valor<min or valor>max){
		valor_=0;
		

	}
	else{
		valor_=valor;

	}


	max_=max;
	min_=min;




}


Contador Contador::operator = (int i){

	if (i<min_ ){
		valor_=0;
		valores_.push_back(valor_);

	}

		else{

			if (i>max_ ){
				valor_=max_;
				valores_.push_back(valor_);

			}

			else{
				valor_=i;
				valores_.push_back(valor_);

		
			}

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

	++valor_;

	if (valor_>max_){
		valor_=max_;

	}
	valores_.push_back(valor_);
	printf("%d\n",valor_ );
	
	return *this;
}


Contador Contador:: operator ++ (int){//cont++

	Contador aux=*this;
	++valor_;
	if (valor_>max_){
		valor_=max_;
	}
	valores_.push_back(valor_);
	printf("%d\n",valor_ );
	
	return aux;

	
}


Contador Contador:: operator -- (void){//--cont

	--valor_;
	/*
	if (valor_<min_&&valor_<0){// revisar esta condicion porque no esta en requisitos
		printf("%d\n",min_ );
		valor_=min_;
	}

	*/
	if (valor_<min_){// revisar esta condicion porque no esta en requisitos
		valor_=min_;
		
	}

	if (valor_<0){// revisar esta condicion porque no esta en requisitos
		valor_=0;
		
	}
	 
	valores_.push_back(valor_);
	return *this;
	

	
}




Contador Contador:: operator -- (int){//cont--

	Contador aux=*this;
	valor_=valor_-1;
	
	if (valor_<min_&&valor_<0){// revisar esta condicion porque no esta en requisitos
		printf("%d\n",min_ );
		valor_=0;
	}
	/*
	if (valor_<0){// revisar esta condicion porque no esta en requisitos
		printf("%d\n",min_ );
		valor_=0;
	}

	
	if (valor_<min_){
		valor_=min_;
	}
	
	*/
	valores_.push_back(valor_);
	printf("%d\n",valor_ );

	return aux;

	
}


Contador operator+(int i, Contador &c){
	c.valor_=c.valor_+i;
	if (c.valor_>c.getMax()){
		c.valor_=c.getMax();

	}
	c.valores_.push_back(c.valor_);
	return c;
}

Contador operator+(Contador &c, int i){
	c.valor_=c.valor_+i;
	if (c.valor_>c.getMax()){
		c.valor_=c.getMax();

	}
	c.valores_.push_back(c.valor_);

	return c;
}


Contador operator-(int i, Contador &c){
	c.valor_=c.valor_-i;
	if (c.valor_<c.getMin()){
		c.valor_=c.getMin();
		
	}
	c.valores_.push_back(c.valor_);
	return c;
}

Contador operator-(Contador &c, int i){
	c.valor_=c.valor_-i;
	if (c.valor_<c.getMin()){
		c.valor_=c.getMin();
		
	}
	c.valores_.push_back(c.valor_);
	return c;
}	




bool Contador::undo(int n){

	if (n<1){

		n=1;
	}

	int tamano=valores_.size();
	if(n>tamano){
		cout<<"tamaño contador: "<<tamano<<endl;

		return false;
		

	}

	else{
		tamano=valores_.size();
		cout<<"tamaño contador2222: "<<tamano<<endl;

		for (int i = 0; i < n; ++i){
			valores_.pop_back();
			
		}

		tamano=valores_.size();
		printf("%d\n",valor_ );
		cout<<"tamaño contador333: "<<tamano<<endl;

		if (tamano==0)
			valor_=0;
		return true;


	}

	//si el tamoño de la lista de contadores es 0 es que el contador vale 0


	
	

}






