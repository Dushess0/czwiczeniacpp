#pragma once
#include <string>
#include <map>
std::map<char, std::string> encryption_map;
std::map<int, char> decryption_map;

std::string PolybiusCrypt(char* message)   //szyfruje linijkê textu
{
	std::string result = "";
	for (int i = 0; message[i] != '\0'; i++)
	{
		result.append(encryption_map[message[i]]);
	    result.append(" ");

	}
	return result;
}
std::string PolybiusDecrypt(char* message)  //deszyfruje 
{
	std::string result = "";
	for (int i = 0; message[i] != '\0'; i++)
	{
		if ((message[i] == ' ') && (message[i + 1] == ' ')) { result.append(" "); continue; }
		if ((message[i] != ' ') && (message[i + 1] != ' '))
		{
			
			
			result+=decryption_map[((int)message[i] - '0') * 10 + ((int)message[i + 1] - '0')];
			
		}

	}
	return result;
}

void Fill_Encryption_Map()  
{
	for (int i = 1; i < 6; i++)
		for (int j = 1; j < 6; j++)
		{
			char alpha = (char)(96 + (i - 1) * 5 + j);

			encryption_map.emplace(alpha, std::to_string(i * 10 + j));

			if (i == 2 && j == 4) { i = 7; break; };
		}

	for (int i = 3; i < 6; i++) {
		for (int j = 1; j < 6; j++)
		{

			char alpha = (char)(97 + (i - 1) * 5 + j);

			encryption_map.emplace(alpha, std::to_string(i * 10 + j));


		}

	}

	encryption_map.emplace('j', "24");
	encryption_map.emplace('k', "25");
}
void Fill_Decryption_Map()
{   
	for (std::map<char,std::string>::iterator it =encryption_map.begin(); it!=encryption_map.end();it++)
	{
	  decryption_map.emplace(atoi(it->second.c_str()),it->first);
	  
	}
	
}

