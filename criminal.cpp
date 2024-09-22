
#include "criminal.h"

criminal::criminal()
{

	age = 0;
	cell = 0;
	pastalcode = 0;
	cnic = 0;

	name = "";
	crimetype = "";
	state = "";
	city = "";
	address = "";
	officer = "";
	complainer = "";
}

void criminal::setname(string name1)
{
	name = name1;
}
string criminal::getname()
{
	return name;
}

void criminal::setcrimetype(string crimetype1)
{
	crimetype = crimetype1;
}
string criminal::getcrimetype()
{
	return crimetype;
}

void criminal::setage(int age1)
{
	age = age1;
}
int criminal::getage()
{
	return age;
}

void criminal::setcell(int cell1)
{
	cell = cell1;
}
int criminal::getcell()
{
	return cell;
}

void criminal::setpastalcode(int pastalcode1)
{
	pastalcode = pastalcode1;
}
int criminal::getpastalcode()
{
	return pastalcode;
}

void criminal::setcnic(long long cnic1)
{
	cnic = cnic1;
}
long long criminal::getcnic()
{
	return cnic;
}

void criminal::setgender(string gender1)
{
	gender = gender1;
}
string criminal::getgender()
{
	return gender;
}

void criminal::setcity(string city1)
{
	city = city1;
}
string criminal::getcity()
{
	return city;
}

void criminal::setstate(string state1)
{
	state = state1;
}
string criminal::getstate()
{
	return state;
}

void criminal::setaddress(string address1)
{
	address = address1;
}
string criminal::getaddress()
{
	return address;
}

void criminal::setofficer(string officer1)
{
	officer = officer1;
}
string criminal::getofficer()
{
	return officer;
}

void criminal::setcomplainer(string complainer1)
{
	complainer = complainer1;
}
string criminal::getcomplainer()
{
	return complainer;
}



