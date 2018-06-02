#ifndef MATRIXOPERATIONS_H
#define MATRIXOPERATIONS_H

#include "Matrix.h"
#include <iostream>
#include <vector>

class MatrixOperations
{
public:

  //Add two matrices
  Add(Matrix A, Matrix B);

  //Multiply two matrices
  Multiply(Matrix A, Matrix B);

  //Invert a matrix
  Invert(Matrix A);

  //Print a matrix
  Print(Matrix A);

};

#endif //MATRIXOPERATIONS_H
