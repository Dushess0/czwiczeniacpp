#pragma once
#include <iostream>

int **Array2D(int n_rows, int n_columns)
{
	int **myArray = new int*[n_rows];
	for (int i = 0; i < n_rows; i++)
	{
		myArray[i] = new int[n_columns];
	}
	return myArray;

}
void FillArray(int** pointer, int rows, int columns)
{
	srand(NULL);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			pointer[i][j] = rand() % 30;

		}

	}

}
void ShowArray(int **pointer, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << pointer[i][j] << "\t";

		}
		std::cout << std::endl;
	}

}
void DeleteArray2D(int **array, int n_rows, int n_columns)
{

	for (int i = 0; i < n_rows; i++)
	{
		delete[n_columns]array[i];
	}

	delete[n_rows]array;
}
