#pragma once
#include <map>
#include <string>
using std::unique_ptr;
using std::string;
using std::map;

struct Counter
{
	map<string, int> values;


};
unique_ptr<Counter> Init()
{
	unique_ptr<Counter> myptr(new Counter);
	return myptr;
}
void Inc(string key, unique_ptr<Counter>* counter)
{
	std::map<string, int>::iterator it;
	it = counter->get()->values.find(key);

	if (it != counter->get()->values.end())
		counter->get()->values[key]++;
	else
		counter->get()->values.emplace(key, 1);

}
int Counts(const unique_ptr<Counter>& counter, string key)
{
	std::map<string, int>::iterator it;
	it = counter->values.find(key);

	if (it != counter->values.end())
		return counter->values[key];
	else
		return 0;
}
void SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter)
{
	std::map<string, int>::iterator it;
	it = counter->get()->values.find(key);

	if (it != counter->get()->values.end())
		counter->get()->values[key] = value;
	else
		counter->get()->values.emplace(key, value);
}