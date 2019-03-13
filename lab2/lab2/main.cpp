#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "Array2D.h"
#include "Polybius.h"
using namespace std;






int main()
{
	/*{   int rows, columns;
		cout << "Rows: " << endl;
		cin >> rows;
		cout << "Columns: " << endl;
		cin >> columns;

		int **myArray = Array2D(rows, columns);
		FillArray(myArray, rows, columns);
		ShowArray(myArray, rows, columns);
		cout << "Deleting an array" << endl;
		DeleteArray2D(myArray, rows, columns);

	}*/
	/*string filename1, filename2,word;
	
	cout << "Enter the name of input file" << endl;
	cin >> filename1;

	cout << "Enter the name of output file" << endl;
	cin >> filename2;

	int option;
	cout << "enter 1 for encrypting or 0 for decrypting" << endl;
	cin >> option;

	char line[256];
	ifstream fin(filename1 + ".txt");
	ofstream fout(filename2 + ".txt");
	Fill_Encryption_Map();
	Fill_Decryption_Map();
	if (option)
	{
		
		while (!fin.eof())
		{
			fin.getline(line, 256);
			fout << PolybiusCrypt(line);
		}
	}
	else
	{
		
		while (!fin.eof())
		{
			fin.getline(line, 256);
			fout << PolybiusDecrypt(line)<<endl;
		}
	}*/




	system("pause");
}