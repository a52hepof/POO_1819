

#ifndef MATRIX_H
#define MATRIX_H
 
#include <iostream>
#include <time.h>
#include <stdlib.h>
 
using namespace std;
 
template <class T>
class Matrix {
    public:
        Matrix();
        Matrix(int, int);
        Matrix(const Matrix &m);
        ~Matrix();
 
        Matrix<T> operator+ (const Matrix &matrix_2);
        Matrix<T> operator- (const Matrix &matrix_2);
        Matrix<T> operator* (const Matrix &matrix_2);
 
        bool isSymmetric();
        bool isIdentity();
 
        T get_max();
        T get_min();
        T get_mode();
 
        void delete_matrix();
        void fill_by_user();
        void fill_random();
        void get_transpose();
        void multiply_by_scalar(T);
        void print_matrix();
        void swap_cols(int, int);
        void swap_rows(int, int);
 
    private:
        T m_ele;
        T m_max;
        T m_min;
        T m_mode;
        T **m_matrix;
 
        int m_dim_matrix;
        int m_cols;
        int m_rows;
};
 
#endif // MATRIX_H