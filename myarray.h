#include "criminal.h"
class myarray
{
private:
    int size;
    int capacity;
    criminal* arr;

public:
    myarray();
    ~myarray();
    void insertrecord(criminal c);
    void bubblesort();
    int binarysearch(string name1);
    int crimebinarysearch(string crimetype1);
    void updatedata(string name1, criminal);
    void deleted(string name1);
    void deletedw(string name1);
    void printmurder();
    void printtheift();
    void printall();
    void ratio();
};