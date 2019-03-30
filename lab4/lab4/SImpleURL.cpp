#include "SImpleURL.h"
#include <regex>
#include <string>
#include <iostream>

using namespace std;




SImpleURL::SImpleURL()
{
}
SImpleURL::SImpleURL(string fullname)
{
	fullURL = fullname;
}


SImpleURL::~SImpleURL()
{
}

string SImpleURL::Scheme() const
{
	smatch result;

	
	regex pattern{ R"((^\w+):(\/?\/?)(.*))" };
	if (regex_match(fullURL, result, pattern)) {
	
		 return result[1];
	};
	
	return "";
}
string SImpleURL::Host() const
{
	int i = fullURL.find("/");

	int j;
	for (j = 1; j < 2 && i != string::npos; ++j)
		i = fullURL.find("/", i + 1);
	int last = fullURL.rfind("/");
	return fullURL.substr(i + 1, last - 1 - i);
}
	
uint16_t SImpleURL::Port() const
{
	smatch result;


	regex pattern{ R"((^\w+):(\/?\/?)([a-zA-z\.]+:)([0-9]+))" };
	if (regex_match(fullURL, result, pattern)) {

		
		string res = result[4];
		return (uint16_t)stoi(res);
	};
	
	return 0;
}
string SImpleURL::Login() const
{
	smatch result;
	

	regex pattern{ R"(\w+@\w+\.\w+)" };
	if (regex_match(fullURL, result, pattern)) {

		return result[2];
	};

	return "";
}
string SImpleURL::Path() const
{
	
	int i = fullURL.find("/");

	int j;
	for (j = 1; j < 3 && i != string::npos; ++j)
		i = fullURL.find("/", i + 1); 
	unsigned last = fullURL.find_last_of("?");
	return fullURL.substr(i, last - i);

}
string SImpleURL::Query() const
{
	unsigned first = fullURL.find_last_of("?")+1;
	unsigned last = fullURL.find_last_of("#") ;
	return fullURL.substr(first, last - first);

}
string SImpleURL::Fragment() const
{
	int first = fullURL.find_last_of("#")+1;
	if (first == 0) return "";
	unsigned last = fullURL.size();
	return fullURL.substr(first, last - first);

}





