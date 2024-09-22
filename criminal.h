#include"Date.h"
class criminal
{

private:
	int age;
	int cell;
	int pastalcode;
	long long cnic;
	string name;
	string crimetype;
	string gender;
	string state;
	string city;
	string address;
	string officer;
	string complainer;

public:
	Date dob;
	Date crimeDate;
	Date punish;
	criminal();

	void setage(int age1);
	int getage();

	void setcell(int cell1);
	int getcell();

	void setpastalcode(int pastalcode1);
	int getpastalcode();

	void setcnic(long long cnic1);
	long long getcnic();

	void setgender(string gender1);
	string getgender();

	void setcity(string city1);
	string getcity();

	void setstate(string state1);
	string getstate();

	void setaddress(string address1);
	string getaddress();

	void setofficer(string officer1);
	string getofficer();

	void setcomplainer(string complainer1);
	string getcomplainer();

	void setname(string name1);
	string getname();

	void setcrimetype(string crimetype1);
	string getcrimetype();

};