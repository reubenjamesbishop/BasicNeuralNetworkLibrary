#include "Matrix.h"


<<<<<<< HEAD
Matrix::Matrix(int rows, int cols, int init_num) {

	data_.resize(rows * cols, init_num);;

	rows_ = rows;
}

=======
Matrix::Matrix()
{
  //
}
>>>>>>> 0bd8334951e45cb8c888cc5b60d90f90d666796c

Matrix::Matrix(int rows, int columns)
{
  rows = rows;
  columns = columns;
}

void Matrix::Fill(/* ? */)
{

}

void Matrix::Empty()
{

}

int Matrix::get_rows()
{
  return rows;
}

int Matrix::get_columns()
{
  return columns;
}
