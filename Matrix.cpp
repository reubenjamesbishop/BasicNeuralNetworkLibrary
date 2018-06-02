#include "Matrix.h"


Matrix::Matrix(int rows, int cols, int init_num) {

	data_.resize(rows * cols, init_num);;

	rows_ = rows;
	cols_ = cols;
}

Matrix::Matrix(const Matrix &M) {

	data_ = M.data_;
}

void Matrix::Fill(double value)
{

	data_.assign(rows_ * cols_, value);

}

<<<<<<< HEAD
void Matrix::isEmpty()
=======
bool Matrix::isEmpty()
>>>>>>> d98b7db4b099212327e84dfb0bf7e18980369670
{

}

int Matrix::get_rows()
{
  return rows_;
}

int Matrix::get_columns()
{
  return data_.size()/rows_;
}
<<<<<<< HEAD
=======

Matrix Matrix::operator+(const Matrix& M) {

	//create a new matrix based off M
	Matrix newM (M);

	//check to see if dimensions are compatible

	if (!(M.rows_ == this->rows_) || !(M.cols_ == this->cols_)) {
		//wrong dimensions
		return newM;
	}

	for (int i = 0; i < newM.data_.size(); ++i) {
		newM.data_[i] += data_[i];
	}

	return newM;

}


Matrix Matrix::operator-(const Matrix& M) {

	//create a new matrix based off M
	Matrix newM (M);

	//check to see if dimensions are compatible

	if (!(M.rows_ == this->rows_) || !(M.cols_ == this->cols_)) {
		//wrong dimensions
		return newM;
	}

	for (int i = 0; i < newM.data_.size(); ++i) {
		newM.data_[i] -= data_[i];
	}

	return newM;

}

//Matrix multiplication operator
Matrix Matrix::operator*(const Matrix& M) {





}
>>>>>>> d98b7db4b099212327e84dfb0bf7e18980369670
