//matrices.h
namespace matrices{
	
	struct matrix{
		int nfilas;
		int ncolumnas;

	};
	
}







#ifndef MATRICES_H
#define MATRICES_H


class Matrixes{

private:
	int nrows_;
	int ncolumns_;


public:
	Matrixes(int nrows=1, int ncolumns=1){
		nrows_=nrows;
		ncolumns_=ncolumns_;

	};
	//~Matrixes();
	void matrixMemory(Matrixes &matrix, int nrows, int ncolumns);
	Matrixes matrixMemory(int nrows, int ncolumns);



	
};









#endif