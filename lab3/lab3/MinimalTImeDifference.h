#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;

int toMinutes(int time_n)
{
	int result;
	string temp;

	if (time_n < 999)
	{
		return ((time_n - time_n % 10) / 10) * 6 + time_n % 100;

	}
	return (time_n - time_n % 10) / 10 * 6 + time_n % 100;


}
int getTime(string line)
{

	int result = 0;
	int j = 0;
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] != ':') {
			result += ((int)line[i] - '0')*pow(10, line.size() - j - 2); j++;
		}
	}
	return result;
}
int MinimalTimeDifference(std::vector<std::string> times)
{
	int min_1 = 999999;
	int min_2 = 999999;
	for (string i : times)
	{
		int minutes = toMinutes(getTime(i));
		if (minutes < min_1) { min_2 = min_1; min_1 = minutes; }

	}
	return  min_2 - min_1;
}

