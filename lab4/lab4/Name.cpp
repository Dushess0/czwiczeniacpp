#include "Name.h"
#include <regex>
#include <iostream>
#include <algorithm>
using namespace std;



	model::Name::Name(const string &first_names_surname)
	{
		regex pattern{ "(([A-Z][a-z]+)([A-Z][a-z]+)([A-Z][a-z]+)?([A-Z][a-z]+)?)" };
		smatch result;
		if (regex_match(first_names_surname, result, pattern)) {

			string result1 = result[2].str();
			string result2 = result[3].str();
			string result3 = result[4].str();
			string result4 = result[5].str();
			/*	this->first_name = result1;
				this->second_name = result2;	
		     	this->second_name = result3;
				if (result3 == "")
					this->surname = result2;
				this->third_name = result4;*/
			this->first_name = result1;
			if ((result3==""))		
				this->surname = result2;
			else if ((result3 != "") && (result4 == ""))
			{
				this->second_name = result2;
				this->surname =result3;

			}
			else
			{
				this->second_name = result2;
				this->third_name = result3;
				this->surname = result4;
			}
		

		}

	}
	string model::Name::FirstName() const
	{
		return this->first_name;

	}
	string model::Name::SecondName() const
	{
		return this->second_name;

	}

	string model::Name::ThirdName() const
	{
		return this->third_name;

	}
	string model::Name::Surname() const
	{
		return this->surname;
	}

	string model::Name::ToFullInitials() const
	{
		string result;
		result += FirstName()[0];
		result.append(".");
		if (SecondName() != "")
		{
			result += SecondName()[0];
			result.append(".");
			if (ThirdName() != "")
			{
				result += ThirdName()[0];
				result.append(".");
			}
		}
		result += Surname()[0];
		result.append(".");
		
		return result;
	}
	string model::Name::ToFirstNamesInitials() const
	{
		string result = ToFullInitials();
		result.pop_back();
		result.pop_back();
		result += this->Surname();

		return result;
	}
	string model::Name::ToSurnameNames() const
	{
		

		return Surname() +" "+ FirstName() +" "+ SecondName() +" "+ ThirdName();
	}
	string model::Name::ToNamesSurname() const
	{
		string result = FirstName() + " ";
		if (SecondName() != "")
			result += SecondName() + " ";
		if (ThirdName() != "")
			result += ThirdName() + " ";
		return result + Surname();
	}
	bool model::Name::IsBeforeByFirstName(const Name &other) const
	{
		if (this->FirstName().compare(other.FirstName()) > 0) return true;
			
		else return false;

	}

	bool model::Name::IsBeforeBySurname(const Name &other) const
	{
		if (this->Surname().compare(other.Surname()) > 0) return true;

		else return false;

	}



