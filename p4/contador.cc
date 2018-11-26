//contador.cc

#include "contador.h"
#include <iostream>


Contador::Contador(int valor, int min, int max){//valores por defecto en el fichero de cabecera
	
	

	if ((valor>=min && valor <= max) && (max>=min)){
		valor_=valor;
		max_=max;
		min_=min;
		

	}
	else{
		valor_=0;
		max_=1000;
		min_=0;


	}
	valores_.push_back(valor_);
	cout<<valor_<<","<<min_<<","<<max_<<endl;




}


Contador Contador::operator = (int i){

	if (i<min_ ){
		valor_=min_;
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

	if (valor_>=max_){
		valor_=max_;

	}
	valores_.push_back(valor_);
	printf("%d\n",valor_ );
	
	return *this;
}


Contador Contador:: operator ++ (int){//cont++

	Contador aux=*this;
	++valor_;
	if (valor_>=max_){
		valor_=max_;
	}
	valores_.push_back(valor_);
	printf("%d\n",valor_ );

	
	return aux;

	
}


Contador Contador:: operator -- (void){//--cont

	--valor_;
	
	if (valor_<=min_){// revisar esta condicion porque no esta en requisitos
		valor_=min_;
		
	}

	valores_.push_back(valor_);
	return *this;
	

	
}




Contador Contador:: operator -- (int){//cont--

	Contador aux=*this;
	valor_=valor_-1;
	
	if (valor_<=min_){
		printf("%d\n",min_ );
		valor_=min_;
	}
	
	valores_.push_back(valor_);


	return aux;

	
}


Contador operator+(int i, Contador &c){
	c.valor_=c.valor_+i;
	if (c.valor_>=c.getMax()){
		c.valor_=c.getMax();

	}
	c.valores_.push_back(c.valor_);
	return c;
}

Contador operator+(Contador &c, int i){
	c.valor_=c.valor_+i;
	if (c.valor_>=c.getMax()){
		c.valor_=c.getMax();

	}
	c.valores_.push_back(c.valor_);

	return c;
}


Contador operator-(int i, Contador &c){
	cout<<"valor minimo= "<<c.min_<<endl;
	cout<<"valor = "<<c.valor_<<endl;
	
	if ((i-c.valor_)<c.min_){

		c.valor_=c.min_;
		
	}
	else{
		c.valor_=i-c.valor_;

	}
	c.valores_.push_back(c.valor_);
	cout<<c.valor_<<endl;

	return c;
}

Contador operator-(Contador &c, int i){
	cout<<"valor minimo= "<<c.min_<<endl;
	cout<<"valor = "<<c.valor_<<endl;

	if ((c.valor_-i)<c.min_){
		
		c.valor_=c.min_;
		
	}

	else{
		c.valor_=c.valor_-i;

	}
	cout<<c.valor_<<endl;

	c.valores_.push_back(c.valor_);
	return c;
}	




bool Contador::undo(int n){

	int tamano=valores_.size();


	if (!(n>1)){

		n=1;
	}


	if(n<tamano){
		for (int i = 0; i < n; ++i){

			valores_.pop_back();
			cout<<valores_.back()<<endl;


			
		}
		valor_=valores_.back();
		return true;;
	}

	else{
		


		return false;


	}


	
	

}






