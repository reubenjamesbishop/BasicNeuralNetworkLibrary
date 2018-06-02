#include "Matrix.h"


Matrix::Matrix(int rows, int cols, int init_num) {

	data_.resize(rows * cols, init_num);;

	rows_ = rows;
	cols_ = cols;
}

Matrix::Matrix(const Matrix &M) {

	data_ = M.data_;

	rows_ = M.rows_;

	cols_ = M.cols_;
}

void Matrix::Fill(double value)
{

	data_.assign(rows_ * cols_, value);

}

void Matrix::Randomize()
{

	for (int i = 0; i < data_.size(); ++i)
	{
		data_[i] = 1.0f * rand()/RAND_MAX;
	}

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
  return cols_;
}

void Matrix::Print()
{

	//Error check
	if( rows_ * cols_ != data_.size())
	{
		std::cout << "Error! Matrix dimensions dont work..." << std::endl;
		return;
	}

	//To print linear data in pretty matrix form
	for(int i = 0; i < rows_; i++)
	{
		for(int j = 0; j < cols_; j++)
		{
			std::cout << data_[i * cols_ + j] << "\t";
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
