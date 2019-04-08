#pragma once
#include <string>
#include <complex>
#include <vector>
#include <string>
class Matrix
{
public:


	Matrix(const char* arr);
	Matrix(std::string arr);
	Matrix(int rows, int columns);
	Matrix(const Matrix& );
	
	void setElement(int x, int y, std::complex<double> value);
	std::complex<double> getElement(int y, int j);
	std::complex<double> string_to_Complex(std::string& buff);
	Matrix add(const Matrix &first);
	Matrix sub(const Matrix &first);
	void print();

	~Matrix();
private:
	int rows;
	int columns;
	std::complex<double>* begin;

};

