#include "Matrix.h"

int dotProduct(Matrix a, Matrix b)
{

	//Initialise DP at 0
	double dot_product = 0;

	//Check that dimensions play nice
	if ((a.size() != b.size()) || (a.getRows() != b.getRows()))
	{
		std::cout << "ERROR: Matrix dimensions won't dot..." << std::endl;
		return 0;
	}

	//Run the DP process
	for (int i = 0; i < a.size(); i++)
	{
		dot_product += (a.data_[i] * b.data_[i]);
	}

	return dot_product;
}

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

	for (int i = 0; i < int(data_.size()); ++i)
	{
		data_[i] = 1.0f * rand()/RAND_MAX;
	}

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

double Matrix::At(int i, int j) const
{
	return data_[j*cols_ + i];
}

void Matrix::Set(int i, int j, double val)
{

	data_[j*cols_ + i] = val;
}


int Matrix::getRows()
{
  return rows_;
}

int Matrix::getCols()
{
  return cols_;
}

int Matrix::size() {
	return data_.size();
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

	//Get values
	int rowsA_ = this->rows_;
	int rowsB_ = M.rows_;

	int columnsA_ = this->cols_;
	int columnsB_ = M.cols_;

	//Create a new blank matrix of correct size
	Matrix newM(rowsA_, columnsB_, 0);

	//Error check dimensions
	if(columnsA_ != rowsB_)
	{
		std::cout << "ERROR: Matrix dimensions incompatible for multiplication..." << std::endl;
		return newM;
	}

	//Populate it with values
	int i = 0;

	/* Easiest way is to be able to access rows and columns
	of each matrix as individual vectors, and then just use the
	dot product function i have written at the start... */

	for (int i = 0; i < columnsB_; ++i)
	{
		/* code */
		
		for (int j = 0; j < rowsA_; ++j)
		{

			//newM set (i, j, sum)
			int sum = 0;
			for (int k = 0; k < columnsA_; ++k)
			{
				sum += At(k,j) * M.At(j,k);

			}

			newM.Set(i, j, sum);

		}
	}



}
