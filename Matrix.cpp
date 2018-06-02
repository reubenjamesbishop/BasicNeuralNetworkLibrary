#include "Matrix.h"

int dotProduct(vector<double> a, vector<double> b)
{
	double dotProduct_ = 0;

	if(int(a.size()) != int(size()))
	{
		std::cout << "ERROR: Matrix dimensions won't dot..." << std::endl;
		return 0;
	}

	for(int i=0; i<int(a.size()); i++)
	{
		dotProduct_ += (a[i] * b[i]);
	}

	return dotProduct_;
}

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

void Matrix::Empty()
{
	for(int i=0; i<int(data_.size()); i++)
	{
			data_[i] = 0;
	}

}

bool Matrix::isEmpty()
{
	for(int i=0; i<int(data_.size()); i++)
	{
		if(data_[i] != 0)
		{
			return false;
		}
	}

	return true;

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
	int rows_ = get_rows();
	int columns_ = get_columns();
	int i=0;

	//Error check
	if( rows_ * data_ != int(data_.size()) )
	{
		std::cout << "Error! Matrix dimensions dont work..." << std::endl;
		return;
	}

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

//Get values
int rowsA_ = this->rows_;
int rowsB_ = M.get_rows();
int columnsA_ = this->columns_;
int columnsB_ = M.get_columns();

//Error check dimensions
if(columnsA_ != rowsB_)
{
	std::cout << "ERROR: Matrix dimensions incompatible for multiplication..." << std::endl;
	return NULL;
}

//Create a new blank matrix of correct size
Matrix newM(rowsA_, columnsB_, 0);

//Populate it with values
int i=0;

/* Easiest way is to be able to access rows and columns
of each matrix as individual vectors, and then just use the
dot product function i have written at the start... */



}
