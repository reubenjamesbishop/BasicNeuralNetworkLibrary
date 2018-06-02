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


bool Matrix::isEmpty()
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

void Matrix::print()
{
	rows_ = get_rows();
	columns_ = get_columns();

	int i=0;

	//To print linear data in pretty matrix form
	for(int j=0; j<rows_; j++)
	{
		for(int k=0; k<columns_; k++)
		{
			std::cout << data_[i] << "\t";
			i++;
		}
		std::cout << std::endl;
	}

}

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
