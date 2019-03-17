#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "Array2D.h"
#include "Polybius.h"
#include "GreatestProduct.h"
#include "SimpleForwardList.h"
using namespace std;



int* generate_key(int lenght)
{
	int *key = new int[lenght];
	for (int i = 0; i < lenght; i++)
	{
		key[i] = 96 + rand() % 29;
	}
	
	return key;
}

int main()
{

	//tablica wielowymiarowa
	cout << "Tablica wielowymiarowa"<<endl;
	srand(NULL);
	{   int rows, columns;
		cout << "Rows: " << endl;
		cin >> rows;
		cout << "Columns: " << endl;
		cin >> columns;

		int **myArray = Array2D(rows, columns);
		FillArray(myArray, rows, columns);
		ShowArray(myArray, rows, columns);
		cout << "Deleting an array" << endl;
		DeleteArray2D(myArray, rows, columns);

	}
	cout << endl;
	cout << "Szyfrowanie Polibiusza" << endl;
	//szyfrowanie Polibiusza
	string filename1, filename2,word;
	
	cout << "Enter the name of input file (Dont forget about .txt at the end of the file)" << endl;
	cin >> filename1;

	cout << "Enter the name of output file" << endl;
	cin >> filename2;

	int option;
	cout << "1 for encrypting or 0 for decrypting" << endl;
	cin >> option;

	char line[256];
	ifstream fin(filename1);   
	ofstream fout(filename2);
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
	}


	cout << endl;
	cout << "lista jednokierunkowa" << endl;
	//lista jednokierunkowa

	Node* head=nullptr;
	
	PushFront(&head, 2);   // dodawanie na pocz¹tek listy
	PushFront(&head, 3);
	print_list(head);

	Append(head, 12);   // dodawanie na koniec listy
	Append(head, 0);
	print_list(head);

	PushFront(&head, 5);
	print_list(head);

	DestroyList(&head);   //usuwanie listy
	print_list(head);



	// najwiêkszy iloczyn k liczb z podanych n liczb
	
	cout << endl;
	cout << " Najwiekszy iloczyn k liczb z podanych n liczb" << endl;

	vector<int> myvec = { 6,2,7,1,6,2,3,5 };
	cout << GreatestProduct(myvec, 3) << endl;


	system("pause");
}