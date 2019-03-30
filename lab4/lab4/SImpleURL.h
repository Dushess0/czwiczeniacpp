#pragma once
#include <string>
using namespace std;

class SImpleURL
{
public:
	string fullURL;

	SImpleURL();
	SImpleURL(string  fullURL);
	~SImpleURL();

	std::string Login() const;
	std::string Host() const;
	std::string Path() const;
	std::uint16_t Port() const;
	std::string Scheme() const;
	std::string Query() const;
	std::string Fragment() const;
	
};

