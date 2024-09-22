#include<iostream>
#include <string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();

	void setDay(int dateofbirth1);
	int getDay();

	void setYear(int yearofbirth1);
	int getYear();

	void setMonth(int monthofbirth1);
	int getMonth();
};
