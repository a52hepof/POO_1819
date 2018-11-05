//contador_unittest.cc


#include "contador.h"
#include <list>
#include <iostream>
#include "gtest/gtest.h"

using namespace std;


TEST(Contador, constructorParametrosDefecto){

	Contador c(-1);

	EXPECT_EQ(0, c.getValor());
	EXPECT_EQ(0, c.getMin());
	EXPECT_EQ(1000, c.getMax());
	
	Contador c2(0,10,2000);

	EXPECT_EQ(0, c2.getValor());
	EXPECT_EQ(10, c2.getMin());
	EXPECT_EQ(2000, c2.getMax());

	Contador c3(-1000,-999,2000);

	EXPECT_EQ(0, c3.getValor());
	EXPECT_EQ(-999, c3.getMin());
	EXPECT_EQ(2000, c3.getMax());

	Contador c4(-2,-999,1501);

	EXPECT_EQ(-2, c4.getValor());
	EXPECT_EQ(-999, c4.getMin());
	EXPECT_EQ(1501, c4.getMax());
}

TEST (Contador, operadorEQ){

	Contador c(0,1000,2000);
	c=2;

	EXPECT_EQ(0, c.getValor());

	Contador c1(0,1000,2000);
	c1=1001;
	EXPECT_EQ(1001, c1.getValor());

	Contador c3(1000, 999, 2000);
	Contador c4(0,1,1000);

	c3=c4;

	EXPECT_EQ(0, c3.getValor());
	EXPECT_EQ(1, c3.getMin());
	EXPECT_EQ(1000, c3.getMax());

	Contador c5(1000, 999, 2000);
	Contador c6(0,1,1000);

	c6=c5;

	EXPECT_EQ(1000, c6.getValor());
	EXPECT_EQ(999, c6.getMin());
	EXPECT_EQ(2000, c6.getMax());

}

TEST (Contador, operadorPlusPlus){

	Contador c(1,1000,2000); //el valor del contador, como minimo sera 1
	c++;
	EXPECT_EQ(1, c.getValor());


	Contador c1(1001,1000,2000); //el valor del contador, como minimo sera 1
	c1++;
	c1++;
	EXPECT_EQ(1003, c1.getValor());

	Contador c2(1001,1000,2000); //el valor del contador, como minimo sera 1
	++c2;
	++c2;
	EXPECT_EQ(1003, c1.getValor());

	Contador c3(1001,1000,2000); //el valor del contador, como minimo sera 1
	c3++;
	c3--;
	--c3;
	EXPECT_EQ(1000, c3.getValor());

	
	Contador c4(1000, 1000, 2000); //se comprueba si supera el limite superior del rango
	for (int i=0;i<1005; i++){
		++c4;

	}
	EXPECT_EQ(2000, c4.getValor());

	
	Contador c5(1000, 1000, 3000);
	for (int i=0;i<1005; i++){
		c5++;
	}
	for (int i=0;i<2000; i++){//se comprueba si va por debajo del rango
		c5--;
	}
	EXPECT_EQ(1000, c5.getValor());
}

TEST(Contador, OperadorPlus){

	Contador c(0);
	10+c;
	c+30;
	EXPECT_EQ(40, c.getValor());

	Contador c1(100, 50,220);
	102+c1;
	c1+3;
	EXPECT_EQ(205, c1.getValor());
	102+c1;
	c1+1000;
	EXPECT_EQ(220, c1.getValor());//no debe superar la suma


	Contador c2(0, -20, 200);
	10-c2;
	EXPECT_EQ(-10, c2.getValor());
	10-c2;
	EXPECT_EQ(-20, c2.getValor());
	10-c2;
	c2-10;
	EXPECT_EQ(-20, c2.getValor());
	c2+30;
	10+c2;
	EXPECT_EQ(20, c2.getValor());
	c2+200;
	EXPECT_EQ(200, c2.getValor());
}

TEST (Contador, listaValores){

	Contador c(0);
	c=5;
	c.getLista();
	int tam=c.getLista().size();
	EXPECT_EQ(1, tam);
	Contador c2(7);
	c=c2;
	tam=c.getLista().size();
	EXPECT_EQ(2, tam);

	c++;
	++c;
	c--;
	c+10;
	10-c;
	tam=c.getLista().size();
	EXPECT_EQ(7, tam);

	list <int> Aux=c.getLista();

	list<int>::iterator i;

	
	i=Aux.begin();


	for (i = Aux.begin(); i !=Aux.end(); ++i){
		cout<<*i<<endl;
	}

	c.undo(8);
	EXPECT_EQ(7, c.getLista().size());


	c.undo(0);//deshacer ultimas operaciones. Valor por defecto n=1
	EXPECT_EQ(6, c.getLista().size());

	c.undo(4);
	EXPECT_EQ(2, c.getLista().size());

	list <int> Aux2=c.getLista();
	cout<<"**********"<<endl;
	for (i = Aux2.begin(); i !=Aux2.end(); ++i){
		cout<<*i<<endl;
	}




	




}