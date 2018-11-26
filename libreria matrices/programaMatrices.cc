//programaMatrices.cc

#include "matrices.h"
#include "matrices.cc"

int main()
{


	Matrixes <int> m(3,3);

	m.randomFillMatrix();
	m.printMatrix();

	Matrixes <int> m2;
	Matrixes <int> m1(m2);
	Matrixes <int> suma(m1);
	Matrixes <int> resta;
	Matrixes <int> producto;
	//try catch when you want to operate with matrixes whith diferent type


	m1.printMatrix();
	m2.fillByUser();
	m2.printMatrix();
	
	suma=m1+m2;
	resta=m-m1;
	resta.printMatrix();
	//is not necessary to define equal operator
	m=resta;
	cout<<"Matriz a: "<<"\n";
	m.printMatrix();
	cout<<"Matriz b: "<<"\n";
	suma.printMatrix();

	cout<<"Matriz a*b: "<<"\n";

	producto=m*(m1+m2);
	producto.printMatrix();
	producto.deleteMatrix();

	Matrixes <int> mt(3,4);
	Matrixes <int> mz(4,5);//it works perfectly
	
	mz.randomFillMatrix();
	mt.randomFillMatrix();

	cout<<"Matriz mt: "<<"\n";
	mt.printMatrix();

	//mz=mt;
	cout<<"Matriz Mz: "<<"\n";
	
	mz.printMatrix();
	producto=mt*mz;
	producto.printMatrix();
	producto=producto.transposeMatrix();
	producto.printMatrix();
	producto=producto.transposeMatrix();
	producto.printMatrix();


	
	mt.printMatrix();
	




	
	return 0;
}