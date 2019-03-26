#pragma once
#include <string>
#include <regex>
#include <iostream>
using std::string; using std::regex; using std::smatch;
const string ALPHABET = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/";
const int  SIZE = ALPHABET.size();
string cut(string URL, int mode = 1)
{
	
	smatch result;
	regex pattern{ R"((\w*://\w*/)(.*))" };
	if (regex_match(URL, result, pattern)) {
		if (mode == 1)
		{
			return result[2];
		}
		else return result[1];
	};
	return "";
}
string toShortURL(string longURL)
{
	string right = cut(longURL); 
	string left = cut(longURL, 2);
	long int number = 0;
	
	for (int i = 0; i < right.size(); i++)
	{
		
		number = number * SIZE + (ALPHABET.find(right[i]) +1);
	}
	
	
	string result;
	if (number < SIZE) return string(1, ALPHABET[number]);
	
	while (number != 0) {
		result += ALPHABET[number % SIZE];
		number /= SIZE;
	}
	
	reverse(result.begin(), result.end());
	
	return left + result;


}

string toLongURL(string shortURL)
{
	string left = cut(shortURL, 2);
	string right = cut(shortURL);
	long int number = 0;

	for (int i = 0; i < right.size(); i++)
	{

		number += (ALPHABET.find(right[i]))*pow(SIZE,right.size()-i-1);
		
	}
	
	string result;
	
	while (number != 0)
	{
		result += ALPHABET[number % SIZE-1];
		number = number - number % SIZE;
		number /= SIZE;
	}
	reverse(result.begin(), result.end());

	
	

	
	
	return left+result;
}
