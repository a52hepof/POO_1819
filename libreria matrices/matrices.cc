//matrices.cc


/*incluir:
	-Invertible
	-Inversa matriz
	-Diagonal superior/inferior
	-Gauss-Jordan
	-Sistemas de ecuaciones
	-Maximo, minimo, media, mediana fila/columna/matriz
	-Diagonal
	-Mediana Matriz
	-Factorizacion LU
	-Factorizacion QR
	-Potencia de matrices

Incluido

	-Suma matrices
	-Resta matrices
	-Producto matrices
	-Traspuesta

*/



#include "matrices.h"
#include <iostream>
#include <stdlib.h> 
#include <time.h>



#define randomize 10


using namespace matrices;
using namespace std;


template<typename Mat>


//default constructor
Matrixes<Mat>::Matrixes(){
	srand(time(NULL));
	 
	nrows_=30;
	ncolumns_=5;
	matrix_ = new Mat * [nrows_];
 
   	for (int i = 0; i < nrows_; i++) {
        matrix_[i] = new Mat [ncolumns_];
    }
   
}


//parameter constructor
template<typename Mat>
Matrixes<Mat>::Matrixes(int nrows, int ncolumns) {
	
	srand(time(0)+2);
	nrows_=nrows;
	ncolumns_=ncolumns;

	if (nrows_ <= 0 || ncolumns_ <= 0) {
        throw runtime_error("Number of rows and columns must be greater than zero.");
    }

	matrix_ = new Mat * [nrows_];
	 
	for (int i = 0; i < nrows_; i++) {
	    matrix_[i] = new Mat [ncolumns_];
	}

	
}


//copy constructor
template<typename Mat>
Matrixes<Mat>::Matrixes(const Matrixes &m){
	
	//matrixes must be of the same typename
	srand(time(0)+10);

	*this=m;
}

//When this function is added to the code, its produces segmentation fault
//Deconstructor
template<typename Mat>
Matrixes<Mat>::~Matrixes(){
  //for (int i = 0; i < nrows_; i++) {
  //  delete [] matrix_[i];
  //}
  //delete [] matrix_;
  //matrix_=NULL;
  //nrows_=0;
  //ncolumns_=0;
}


//Delete Matrix
template<typename Mat>
void Matrixes<Mat>::deleteMatrix(){
  for (int i = 0; i < nrows_; i++) {
    delete [] matrix_[i];
  }
  delete [] matrix_;

}

//Random Fill Matrix
template<typename Mat> 
void Matrixes<Mat>::randomFillMatrix(){
	
 	for (int i = 0; i < nrows_; i++) {
    	for (int j = 0; j < ncolumns_; j++) {
       		matrix_[i][j] = rand() % randomize+1;
    	}
 	}

}

//Fill by user
template<typename Mat>
void Matrixes<Mat>::fillByUser()
{
	Mat mElement;
	 cout << "\t";
    for (int i = 0; i < nrows_; i++) {
       
        cout << "Row " << i + 1 << endl;
        for (int j = 0; j < ncolumns_; j++) {
            cout << "Insert the element " << j + 1 << "\t";
            cin >> mElement;
            matrix_[i][j] = mElement;
        }
        cout << "\t";
    }
    
}





// print Matrix
template<typename Mat>
void Matrixes<Mat>::printMatrix()
{
    for (int i = 0; i < nrows_; i++) {
        for (int j = 0; j < ncolumns_; j++) {
            cout << matrix_[i][j] << "\t";
        }
        cout << endl << endl;
    }
    //cout << endl << endl;
}


// transpose Matrix
template<typename Mat>
Matrixes<Mat> Matrixes<Mat>::transposeMatrix(){
	cout<<"filas: "<<nrows_<<"\t"<<"columnas: "<<ncolumns_<<endl;
	int columns=nrows_;
	int rows=ncolumns_;
	cout<<"filas t: "<<rows<<"\t"<<"columnas t: "<<columns<<endl;

   Matrixes matrix_result(rows, columns);

   for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix_result.matrix_[i][j] = matrix_[j][i];
        }
    }

    return matrix_result;


}


/* transpose Matrix operator
template<typename Mat>
Matrixes<Mat> Matrixes<Mat>::operator/(*void){
	

	cout<<"filas: "<<nrows_<<"\t"<<"columnas: "<<ncolumns_<<endl;
	int columns=nrows_;
	int rows=ncolumns_;
	cout<<"filas t: "<<rows<<"\t"<<"columnas t: "<<columns<<endl;

   Matrixes matrix_result(rows, columns);
   matrix_result=*this;
   for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix_result.matrix_[i][j] = matrix_[j][i];
        }
    }

    return matrix_result;


}
*/
 
// Matrix sum
template<typename Mat>
Matrixes<Mat> Matrixes<Mat>::operator+ (const Matrixes &m){
    //matrix dimension must be the same for both matrixes
    Matrixes matrix_result(nrows_, ncolumns_);
    for (int i = 0; i < nrows_; i++) {
        for (int j = 0; j < ncolumns_; j++) {
            matrix_result.matrix_[i][j] = matrix_[i][j] + m.matrix_[i][j];
        }
    }
    return matrix_result;
}


 
// Matrix minus
template<typename Mat>
Matrixes<Mat> Matrixes<Mat>::operator- (const Matrixes &m){
    //matrix dimension must be the same for both matrixes

    Matrixes matrix_result(nrows_, ncolumns_);
    for (int i = 0; i < nrows_; i++) {
        for (int j = 0; j < ncolumns_; j++) {
            matrix_result.matrix_[i][j] = matrix_[i][j] - m.matrix_[i][j];
        }
    }
    return matrix_result;
}


// Matrix product
template<typename Mat>
Matrixes<Mat> Matrixes<Mat>::operator* (const Matrixes &m){

	//Its necessary to control m1.ncolumns=m2.nrows

	if (ncolumns_!=m.nrows_){

		cout<<"columns and rows incompatible for product"<<endl;
		//system.pause();
		exit(-1);
	}




    Matrixes matrix_result(nrows_, m.ncolumns_);
    for (int i = 0; i < nrows_; i++) {
        for (int j = 0; j < m.ncolumns_; j++) {
            for (int k = 0; k < ncolumns_; k++) {
                matrix_result.matrix_[i][j] += (matrix_[i][k] * m.matrix_[k][j]);
            }
            
        }
    }
    return matrix_result;
}





