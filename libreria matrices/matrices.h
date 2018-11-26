//matrices.h
namespace matrices{
	

	
}




#ifndef MATRICES_H
#define MATRICES_H


template <class Mat>

class Matrixes{

private:
	int nrows_;
	int ncolumns_;
	Mat **matrix_;


public:
	
	Matrixes();
	Matrixes(const Matrixes &m);
	Matrixes(int nrows,int ncolumns);
	~Matrixes();
	void randomFillMatrix();
	void printMatrix();
	void deleteMatrix();
	void fillByUser();
	Matrixes<Mat> transposeMatrix();

	Matrixes<Mat> operator+ (const Matrixes &m);
	Matrixes<Mat> operator- (const Matrixes &m);
	Matrixes<Mat> operator* (const Matrixes &m);
	//Matrixes<Mat> operator/ (*void);








	
};









#endif