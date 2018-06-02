// Class to perform matrix manipulation calculations
// for the Neural Network library.

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix {
public:

  //Default Matrix
  Matrix();

  //Matrix constructor given size
  Matrix(int rows, int columns);

  //Populate a matrix with values
  void Fill(/* I don't know how we will fill it yet */);

  //Set all values to 0
  void Empty();

  //Get rows
  int get_rows();

  //Get columns
  int get_columns();

private:

  int rows;
  int columns;

};

#endif //MATRIX_H
