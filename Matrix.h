<<<<<<< HEAD
#ifndef MATRIX_H
#define MATRIX_H

=======
// Class to perform matrix manipulation calculations
// for the Neural Network library.

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
>>>>>>> 0bd8334951e45cb8c888cc5b60d90f90d666796c
#include <vector>

class Matrix {
public:

  //Default Matrix
  Matrix();

  //Matrix constructor given size
  Matrix(int rows, int columns);

<<<<<<< HEAD
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
=======
  //Populate a matrix with values
  void Fill(/* I don't know how we will fill it yet */);

  //Set all values to 0
  void Empty();

  //Get rows
  int get_rows();
>>>>>>> 0bd8334951e45cb8c888cc5b60d90f90d666796c

  //Get columns
  int get_columns();

private:

  int rows;
  int columns;

};

<<<<<<< HEAD

#endif
=======
#endif //MATRIX_H
>>>>>>> 0bd8334951e45cb8c888cc5b60d90f90d666796c
