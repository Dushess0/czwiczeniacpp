#pragma once
#include <string>

namespace model {

	using ::std::string;
	using ::std::stringstream;
	

	class Name {
	public:
		explicit Name(const string &first_names_surname);

		string FirstName() const;
		string SecondName() const;
		string ThirdName() const;
		string Surname() const;
		string ToFullInitials() const;
		string ToFirstNamesInitials() const;
		string ToSurnameNames() const;
		string ToNamesSurname() const;
		bool IsBeforeBySurname(const Name &other) const;
		bool IsBeforeByFirstName(const Name &other) const;

	private:
		string first_name;
		string second_name;

		string third_name;
		string surname;
	};
}

