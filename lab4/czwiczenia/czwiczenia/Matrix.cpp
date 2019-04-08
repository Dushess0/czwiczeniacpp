#pragma once

#include "Matrix.h"
#include <iostream>
Matrix::Matrix(int rows,int columns)
{
	begin = new std::complex<double>[columns*rows];
	this->rows = rows;
	this->columns = columns;

}
Matrix::Matrix(const char* arr)
{
	std::string buff;
	int counter = 1;
	std::vector<std::complex<double>> tmp;
	for (int i = 0; arr[i]; i++)
	{
		if ((arr[i] != '[') && (arr[i] != ']'))
		{
			
			if (arr[i] == ';') counter++;
			else if ((arr[i] == ' ') && (buff.length() != 0))
			{
				
				tmp.push_back(string_to_Complex(buff));
			}
			else buff.append(1,arr[i]);
		}
	}
	tmp.push_back(string_to_Complex(buff));

	this->begin = new std::complex<double>[tmp.size()];
	this->rows = counter;
	this->columns = tmp.size() / this->rows;
	for (int i = 0; i < this->rows; i++)
	
		for (int j = 0; j < this->columns; j++)
			setElement(j, i, tmp[i*this->columns+j]);
	        
	


}


Matrix::Matrix(std::string arr)
{
	std::string buff;
	int counter = 1;
	std::vector<std::complex<double>> tmp;
	for (int i = 0; arr[i]; i++)
	{
		if ((arr[i] != '[') && (arr[i] != ']'))
		{

			if (arr[i] == ';') counter++;
			else if ((arr[i] == ' ') && (buff.length() != 0))
			{

				tmp.push_back(string_to_Complex(buff));
			}
			else buff.append(1, arr[i]);
		}
	}
	tmp.push_back(string_to_Complex(buff));

	this->begin = new std::complex<double>[tmp.size()];
	this->rows = counter;
	this->columns = tmp.size() / this->rows;
	for (int i = 0; i < this->rows; i++)

		for (int j = 0; j < this->columns; j++)
			setElement(j, i, tmp[i*this->columns + j]);
}
std::complex<double> Matrix::string_to_Complex(std::string& buff)
{
	int real, imaq;
	auto i_pos = find(buff.begin(), buff.end(), 'i');
	if (i_pos == buff.end())
	{
		imaq = 0;
		real = std::stoi(buff);
	}
	else
	{
		real = std::stoi(buff.substr(0, i_pos - buff.begin()));
		imaq = std::stoi(buff.substr(i_pos - buff.begin() + 1, buff.length() - 1));
	}
	buff = "";
	return std::complex<double>(real, imaq);
}

std::complex<double> Matrix::getElement(int x, int y)
{ 
	if ((x < this->columns) && (y < this->rows))
		return *(this->begin + y * this->columns + x);
	else
		return 0;

}
void Matrix::setElement(int x, int y,std::complex<double> value)
{
	if ((x<this->columns)&&(y<this->rows))
	*(this->begin + y * this->columns + x)=value;

	
	
}
Matrix Matrix::add(const Matrix &another)
{
	if ((rows == another.rows) && (columns == another.columns))
	{
		Matrix result= Matrix(rows,columns);

		for (int i = 0; i < rows; i++)
			for (int j = 0; j < columns; j++)
				result.setElement(j, i, *(begin + i * columns + j)+ *(another.begin + i * another.columns + j));
		return result;

	}
	else throw "Matricies have different dimensions";

}
Matrix Matrix::sub(const Matrix &another)
{
	if ((rows == another.rows) && (columns == another.columns))
	{
		Matrix result = Matrix(rows, columns);

		for (int i = 0; i < rows; i++)
			for (int j = 0; j < columns; j++)
				result.setElement(j, i, *(begin + i * columns + j) - *(another.begin + i * another.columns + j));
		return result;

	}
	else throw "Matricies have different dimensions";

}
void Matrix::print()
{
	std::string matlab="[";

	for (int i=0;i<rows;i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::string number;
			number.append(std::to_string(getElement(j, i).real()));
			if (getElement(j, i).imag() != 0)
			{
				number.append("i");
				number.append(std::to_string(getElement(j,i).imag()));
			}
			matlab.append(number);
			matlab.append(" ");
		}
	}
	matlab.append("]");
	std::cout << matlab<<std::endl;
}
Matrix::Matrix(const Matrix& first)
{
	this->columns = first.columns;
	this->rows = first.rows;
	this->begin = new std::complex<double>[columns*rows];
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			setElement( j,i,*(first.begin+ i * this->columns + j));

}
Matrix::~Matrix()
{
	delete begin;
}
