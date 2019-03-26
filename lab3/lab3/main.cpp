#include <iostream>
#include "CCounter.h"
#include "MinimalTImeDifference.h"
#include "SmartTree.h"
#include "TinyUrl.h"

using namespace  std;



int main()
{

	string URL="https://random/homik";

	cout<< toShortURL(URL)<<endl;          //tworzenie krótkiego URL
	cout << toLongURL(toShortURL(URL)) << endl;


	cout << endl;
	cout << MinimalTimeDifference({"23:15","12:25","15:20"})<<"Time difference in minutes" << endl; //ró¿nica w czasie
	cout << endl;


	auto myptr = Init();
	Inc("hello", &myptr);
	Inc("hello", &myptr);    //Counter
	Inc("two", &myptr);
	Inc("second", &myptr);
	Inc("third", &myptr);
	cout << myptr.get()->values["hello"]<<endl;
	cout << myptr.get()->values["third"] << endl;
	cout << myptr.get()->values["two"] << endl;


	auto head = CreateLeaf(5);
	auto left = CreateLeaf(2);  //tworzenie drzew binarnych
	auto right = CreateLeaf(4);
	InsertLeftChild(head, left);
	InsertRightChild(head, right);
	PrintTreeInOrder(head, &cout);

	system("pause");
}