#include "myarray.h"
void menu()
{

    cout << " \t\t***************************************************************" << endl;
    cout << " \t\t>>>                Police Management Syetem                 <<<" << endl;
    cout << " \t\t***************************************************************" << endl;
    cout << endl;
}

int main()
{

    cout << endl;
    int capacity;

    myarray* a = new myarray(); // call default contructor other wise size will be garbage vale
    criminal c;

    cout << endl;
    menu();
    int main_choice = 1;
    while (main_choice != 0)
    {
        int choice;

        int age1;
        int cell1;
        int pastalcode1;
        long long cnic1;
        string name1;
        string crimetype1;
        string gender1;
        string state1;
        string city1;
        string address1;
        string officer1;
        string complainer1;

        int dateofbirth1;
        int monthofbirth1;
        int yearofbirth1;

        int crimedate1;
        int crimemonth1;
        int crimeyear1;

        cout << endl;
        cout << " Press 1. to Insert Criminal Record" << endl;
        cout << " Press 2. to Search Criminal Record By name (Binary Search)" << endl;
        cout << " Press 3. to Search Criminal Record By Crime Type" << endl;
        cout << " Press 4. to Update Criminal Record " << endl;
        cout << " Press 5. to Show all Murder " << endl;
        cout << " Press 6. to Show all Theft " << endl;
        cout << " Press 7. to Show Crime raised in last Month " << endl;
        cout << " Press 8. to Delete Criminal Record " << endl;
        cout << " Press 9. to Show all Criminal Record " << endl;
        cout << " Press 10. Deleted by name " << endl;
        cout << endl;
        cout << " >>>>>>  PLease Enter Your choice  >>>>>>  ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
        {
            cout << endl;
            cout << " >> Personal Details << " << endl;
            cout << endl;
            cout << "Please Enter Name:  ";
            cin >> name1;
            c.setname(name1);
            c.getname();

            cout << "Please Enter Criminal Age: ";
            cin >> age1;
            c.setage(age1);
            c.getage();

            cout << "Please Enter Criminal Cnic: ";
            cin >> cnic1;
            c.setcnic(cnic1);
            c.getcnic();

            cout << "Please Enter Criminal Gander: ";
            cin >> gender1;
            c.setgender(gender1);
            c.getgender();

            cout << "Please Enter Criminal Date of Birth: ";
            cin >> dateofbirth1;
            c.dob.setDay(dateofbirth1);
            c.dob.getDay();

            cout << "Please Enter Criminal Month of Birth: ";
            cin >> monthofbirth1;
            c.dob.setMonth(monthofbirth1);
            c.dob.getMonth();

            cout << "Please Enter Criminal Year of Birth: ";
            cin >> yearofbirth1;
            c.dob.setYear(yearofbirth1);
            c.dob.getYear();

            cout << "Please Enter Criminal Address: ";
            cin >> address1;
            c.setaddress(address1);
            c.getaddress();

            cout << "Please Enter Criminal State: ";
            cin >> address1;
            c.setstate(state1);
            c.getstate();

            cout << "Please Enter Criminal City: ";
            cin >> city1;
            c.setcity(city1);
            c.getcity();

            cout << "Please Enter Pastal Code: ";
            cin >> pastalcode1;
            c.setpastalcode(pastalcode1);
            c.getpastalcode();

            cout << endl;
            cout << " >> Criminal Details << " << endl;
            cout << endl;

            cout << "Please Enter Crime Type : ";
            cin >> crimetype1;
            c.setcrimetype(crimetype1);
            c.getcrimetype();

            cout << "Please Enter Crime Date : ";
            cin >> crimedate1;
            c.dob.setDay(crimedate1);
            c.dob.getDay();

            cout << "Please Enter Crime Month : ";
            cin >> crimemonth1;
            c.dob.setMonth(crimemonth1);
            c.dob.getMonth();

            cout << "Please Enter Crime Year : ";
            cin >> crimeyear1;
            c.dob.setYear(crimeyear1);
            c.dob.getYear();

            cout << "Please Enter Criminal Cell Number: ";
            cin >> cell1;
            c.setcell(cell1);
            c.getcell();

            cout << "Please Enter Investigation Officer Name: ";
            cin >> officer1;
            c.setofficer(officer1);
            c.getofficer();

            cout << "Please Enter Complainer Name: ";
            cin >> complainer1;
            c.setcomplainer(complainer1);
            c.getcomplainer();

            a->insertrecord(c);
            break;
        }

        case 2:
        {
            cout << " >> Please Enter Name: ";
            cin >> name1;
            a->bubblesort();
            a->binarysearch(name1);
            break;
        }

        case 3:
        {
            cout << " >> Please Crime Tpye : ";
            cin >> crimetype1;
            a->crimebinarysearch(crimetype1);
            break;
        }

        case 4:
        {
            cout << " >> Please Enter Name: ";
            cin >> name1;
            a->bubblesort();
            a->updatedata(name1, c);

            break;
        }

        case 5:
        {
            cout << endl;
            a->printmurder();
            break;
        }

        case 6:
        {
            cout << endl;
            a->printtheift();
            break;
        }

        case 7:
        {

            a->ratio();

            break;
        }

        case 8:
        {
            cout << " >> Please Enter Name: ";
            cin >> name1;
            a->deleted(name1);
            break;
        }

        case 9:
        {
            cout << endl;
            a->printall();
            break;
        }

        case 10:
        {
            cout << " >> Please Enter Name: ";
            cin >> name1;
            a->deletedw(name1);
            break;
        }







        default:
        {
            cout << endl;
            cout << "Error! Wrong Input." << endl;
            break;
        }
        }

        cout << endl;
        cout << "Press 0 to Exit and Any key to Continous: ";
        cin >> main_choice;
    }

    return 0;
}
