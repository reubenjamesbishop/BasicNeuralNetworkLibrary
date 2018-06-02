#include "Matrix.h"


Matrix::Matrix(int rows, int cols, int init_num) {

	data_.resize(rows * cols, init_num);;

	rows_ = rows;
}

void Matrix::Fill(int value)
{

}

void Matrix::isEmpty()
{

}

int Matrix::get_rows()
{
  return rows;
}

int Matrix::get_columns()
{
  return data_.size()/rows_;
}
