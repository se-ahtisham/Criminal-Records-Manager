#include "myarray.h"
myarray::myarray()
{
    size = 0;
    capacity = 3;
    arr = new criminal[capacity];
}

myarray::~myarray()
{
    delete[] arr;
}

void myarray::insertrecord(criminal c)
{
    if (size < capacity)
    {
        if (size == 0)
        {

            arr[size] = c;
            size++;
            cout << endl;
            cout << "Record Stored Successfully :)";
            cout << endl;
        }
        else if (size > 0)
        {
            for (int i = size; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = c;
            size++;
            cout << "Record Stored Successfully :)";
            cout << endl;
        }
    }

    else
    {
        cout << endl;
        cout << "Capacity Full" << endl;
    }
}

void myarray::bubblesort()
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j].getname() > arr[j + 1].getname())
                swap(arr[j], arr[j + 1]);
        }
    }
}

void myarray::updatedata(string name1, criminal obj)
{
    int index = binarysearch(name1);
    if (index >= 0)
    {
        arr[index] = obj;
        cout << "Successfull Updated " << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}

void myarray::printmurder()
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i].getcrimetype()[0] == 'm' || arr[i].getcrimetype()[0] == 'M')

            cout << endl;
        cout << " >> Personal Details << " << endl;
        cout << endl;
        cout << " The " << i + 1 << " Murder Criminals Name is: " << arr[i].getname() << endl;
        cout << " The " << i + 1 << " Murder Criminals Age is: " << arr[i].getage() << endl;
        cout << " The " << i + 1 << " Murder Criminals Cnic is: " << arr[i].getcnic() << endl;
        cout << " The " << i + 1 << " Murder Criminals Gender is: " << arr[i].getgender() << endl;
        cout << " The " << i + 1 << " Murder Criminals Address is: " << arr[i].getaddress() << endl;
        cout << " The " << i + 1 << " Murder Criminals City is: " << arr[i].getcity() << endl;
        cout << " The " << i + 1 << " Murder Criminals State is: " << arr[i].getstate() << endl;
        cout << " The " << i + 1 << " Murder Criminals Pastal Code is: " << arr[i].getpastalcode() << endl;
        cout << " The " << i + 1 << " Murder Date of Birth is: " << arr[i].dob.getDay() << endl;
        cout << " The " << i + 1 << " Murder Month of Birth  is: " << arr[i].dob.getMonth() << endl;
        cout << " The " << i + 1 << " Murder Year of Birth  is: " << arr[i].dob.getYear() << endl;

        cout << endl;
        cout << " >> Criminal Details << " << endl;
        cout << endl;
        cout << " The " << i + 1 << " Murder Crime Type is: " << arr[i].getcrimetype() << endl;
        cout << " The " << i + 1 << " Murder Criminal Cell is: " << arr[i].getcell() << endl;
        cout << " The " << i + 1 << " Murder  Date of Crime is: " << arr[i].crimeDate.getDay() << endl;
        cout << " The " << i + 1 << " Murder  Month of Crime  is: " << arr[i].crimeDate.getMonth() << endl;
        cout << " The " << i + 1 << " Murder  Year of Crime  is: " << arr[i].crimeDate.getYear() << endl;
        cout << " The " << i + 1 << " Murder Officer name is: " << arr[i].getofficer() << endl;
        cout << " The " << i + 1 << " Murder Complainer name is: " << arr[i].getcomplainer() << endl;
    }
}

void myarray::printtheift()
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i].getcrimetype()[0] == 't' || arr[i].getcrimetype()[0] == 'T')

            cout << endl;
        cout << " >> Personal Details << " << endl;
        cout << endl;
        cout << " The " << i + 1 << " Theft Criminals Name is: " << arr[i].getname() << endl;
        cout << " The " << i + 1 << " Theft Criminals Age is: " << arr[i].getage() << endl;
        cout << " The " << i + 1 << " Theft Criminals Cnic is: " << arr[i].getcnic() << endl;
        cout << " The " << i + 1 << " Theft Criminals Gender is: " << arr[i].getgender() << endl;
        cout << " The " << i + 1 << " Theft Criminals Address is: " << arr[i].getaddress() << endl;
        cout << " The " << i + 1 << " Theft Criminals City is: " << arr[i].getcity() << endl;
        cout << " The " << i + 1 << " Theft Criminals State is: " << arr[i].getstate() << endl;
        cout << " The " << i + 1 << " Theft Criminals Pastal Code is: " << arr[i].getpastalcode() << endl;
        cout << " The " << i + 1 << " Theft Date of Birth is: " << arr[i].dob.getDay() << endl;
        cout << " The " << i + 1 << " Theft Month of Birth  is: " << arr[i].dob.getMonth() << endl;
        cout << " The " << i + 1 << " Theft Year of Birth  is: " << arr[i].dob.getYear() << endl;
        cout << " The " << i + 1 << " Theft Punish date  is: " << arr[i].dob.getYear() << endl;


        cout << endl;
        cout << " >> Criminal Details << " << endl;
        cout << endl;
        cout << " The " << i + 1 << " Theft Crime Type is: " << arr[i].getcrimetype() << endl;
        cout << " The " << i + 1 << " Theft Criminal Cell is: " << arr[i].getcell() << endl;
        cout << " The " << i + 1 << " Theft Date of Crime is: " << arr[i].crimeDate.getDay() << endl;
        cout << " The " << i + 1 << " Theft Month of Crime  is: " << arr[i].crimeDate.getMonth() << endl;
        cout << " The " << i + 1 << " Theft Year of Crime  is: " << arr[i].crimeDate.getYear() << endl;
        cout << " The " << i + 1 << " Theft Officer name is: " << arr[i].getofficer() << endl;
        cout << " The " << i + 1 << " Theft Complainer name is: " << arr[i].getcomplainer() << endl;
    }
}

void myarray::printall()
{
    for (int i = 0; i < size; i++)
    {

        cout << endl;
        cout << " >> Personal Details << " << endl;
        cout << endl;
        cout << " The " << i + 1 << " Criminal Name is: " << arr[i].getname() << endl;
        cout << " The " << i + 1 << " Criminal Age is: " << arr[i].getage() << endl;
        cout << " The " << i + 1 << " Criminal Cnic is: " << arr[i].getcnic() << endl;
        cout << " The " << i + 1 << " Criminal Gender is: " << arr[i].getgender() << endl;
        cout << " The " << i + 1 << " Criminal Address is: " << arr[i].getaddress() << endl;
        cout << " The " << i + 1 << " Criminal City is: " << arr[i].getcity() << endl;
        cout << " The " << i + 1 << " Criminal State is: " << arr[i].getstate() << endl;
        cout << " The " << i + 1 << " Criminal Pastal Code is: " << arr[i].getpastalcode() << endl;
        cout << " The " << i + 1 << " Criminal Date of Birth is: " << arr[i].dob.getDay() << endl;
        cout << " The " << i + 1 << " Criminal Month of Birth  is: " << arr[i].dob.getMonth() << endl;
        cout << " The " << i + 1 << " Criminal Year of Birth  is: " << arr[i].dob.getYear() << endl;

        cout << endl;
        cout << " >> Criminal Details << " << endl;
        cout << endl;
        cout << " The " << i + 1 << " Crime Type is: " << arr[i].getcrimetype() << endl;
        cout << " The " << i + 1 << " Criminal Cell is: " << arr[i].getcell() << endl;
        cout << " The " << i + 1 << " Criminal Date of Crime is: " << arr[i].crimeDate.getDay() << endl;
        cout << " The " << i + 1 << " Criminal Month of Crime  is: " << arr[i].crimeDate.getMonth() << endl;
        cout << " The " << i + 1 << " Criminal Year of Crime  is: " << arr[i].crimeDate.getYear() << endl;
        cout << " The " << i + 1 << " Officer name is: " << arr[i].getofficer() << endl;
        cout << " The " << i + 1 << " Complainer name is: " << arr[i].getcomplainer() << endl;
    }
}

int myarray::binarysearch(string name1)
{

    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (name1 == arr[m].getname())
        {
            cout << " >>>>> Successfull Found  <<<<<" << endl;
            cout << endl;
            cout << " >> Personal Details << " << endl;
            cout << endl;
            cout << " Criminal Name is: " << arr[m].getname() << endl;
            cout << " Criminal Age is: " << arr[m].getage() << endl;
            cout << " Criminal Cnic is: " << arr[m].getcnic() << endl;
            cout << " Criminal Gender is: " << arr[m].getgender() << endl;
            cout << " Criminal Address is: " << arr[m].getaddress() << endl;
            cout << " Criminal City is: " << arr[m].getcity() << endl;
            cout << " Criminal State is: " << arr[m].getstate() << endl;
            cout << " Criminal Pastal Code is: " << arr[m].getpastalcode() << endl;
            cout << endl;
            cout << " >> Criminal Details << " << endl;
            cout << endl;
            cout << " Crime Type is: " << arr[m].getcrimetype() << endl;
            cout << " Criminal Cell is: " << arr[m].getcell() << endl;
            cout << " Officer name is: " << arr[m].getofficer() << endl;
            cout << " Complainer name is: " << arr[m].getcomplainer() << endl;
            return m;
        }
        else if (name1 > arr[m].getname())
        {
            s = m + 1;
        }
        else if (name1 < arr[m].getname())
        {
            s = m - 1;
        }
        else
        {
            cout << " >>> Record Not Found :(" << endl;
            return -1;
        }
    }
}

int myarray::crimebinarysearch(string crimetype1)
{

    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (crimetype1[0] == arr[m].getcrimetype()[0])
        {
            cout << " >>>>> Successfull Found  <<<<<" << endl;
            cout << endl;
            cout << " >> Personal Details << " << endl;
            cout << endl;
            cout << " Criminal Name is: " << arr[m].getname() << endl;
            cout << " Criminal Age is: " << arr[m].getage() << endl;
            cout << " Criminal Cnic is: " << arr[m].getcnic() << endl;
            cout << " Criminal Gender is: " << arr[m].getgender() << endl;
            cout << " Criminal Address is: " << arr[m].getaddress() << endl;
            cout << " Criminal City is: " << arr[m].getcity() << endl;
            cout << " Criminal State is: " << arr[m].getstate() << endl;
            cout << " Criminal Pastal Code is: " << arr[m].getpastalcode() << endl;
            cout << endl;
            cout << " >> Criminal Details << " << endl;
            cout << endl;
            cout << " Crime Type is: " << arr[m].getcrimetype() << endl;
            cout << " Criminal Cell is: " << arr[m].getcell() << endl;
            cout << " Officer name is: " << arr[m].getofficer() << endl;
            cout << " Complainer name is: " << arr[m].getcomplainer() << endl;
            return m;
        }
        else if (crimetype1[0] > arr[m].getcrimetype()[0])
        {
            s = m + 1;
        }
        else if (crimetype1[0] < arr[m].getcrimetype()[0])
        {
            s = m - 1;
        }
        else
        {
            cout << "Not Found" << endl;
            return -1;
        }
    }
}

void myarray::deleted(string name1)
{

    int index = binarysearch(name1);
    criminal* ptr = new criminal[capacity];
    if (index >= 0)
    {
        for (int i = 0; i < size - 1; i++)
        {
            ptr[i] = (i == index) ? arr[i + 1] : arr[i];
        }
        size--;
        delete[] arr;
        arr = ptr;
        ptr = NULL;
        cout << "Success Full Deleted" << endl;
    }

    else
    {
        cout << "Not found" << endl;
    }
}




void myarray::deletedw(string name1)
{

    criminal* ptr = new criminal[capacity];
   
        for (int i = 0; i < size - 1; i++)
        {
            ptr[i] = (name1==arr[i].getname()) ? arr[i + 1] : arr[i];
        }
        size--;
        delete[] arr;
        arr = ptr;
        ptr = NULL;
        cout << "Success Full Deleted" << endl;
    
}







void myarray::ratio()
{
    int theift = 0;
    int murder = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i].getcrimetype()[0] == 't' || arr[i].getcrimetype()[0] == 'T')
        {
            theift++;
        }
        else if (arr[i].getcrimetype()[0] == 'm' || arr[i].getcrimetype()[0] == 'M')
        {
            murder++;
        }
    }

    if (theift > murder)
    {
        cout << " Theift Ratio Incereased" << endl;
        cout << " Total Murder is: " << murder << endl;
        cout << " Total Thefit is: " << theift << endl;
    }

    else if (murder > theift)
    {
        cout << "Murder Ratio Incereased" << endl;
        cout << " Total Murder is: " << murder << endl;
        cout << " Total Thefit is: " << theift << endl;
    }
    else if (murder == theift)
    {

        cout << " Both are Same" << endl;
        cout << " Total Murder is: " << murder << endl;
        cout << " Total Thefit is: " << theift << endl;
    }
    else
    {

        cout << " Both are Zero" << endl;
        cout << " Total Murder is: " << murder << endl;
        cout << " Total Thefit is: " << theift << endl;
    }
}