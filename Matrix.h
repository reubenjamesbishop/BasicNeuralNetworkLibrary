#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix {

public: 

	Matrix(int rows, int cols, int init_num = 0);

	void Randomize(); // could replace this with special case of fill

	void Fill(int value);

	bool Empty();

	void Print();

	void Invert();


	//Matrix Addition and subtraction operators

	Matrix operator+(const Matrix& M);

	Matrix operator-(const Matrix& M);


	//Matrix multiplication operator

	Matrix operator*(const Matrix& M);


	//using a vector to store a 'flattened' matrix;
	std::vector<double> data_;

	int rows_;

private:


};


#endif