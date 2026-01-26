#include <iostream>

//make it work like link list

using namespace std;

template <typename T>

struct Link
{
    T value;
    Link *next;
};

struct Record
{
    double id;
};

int main(void)
{
    Link<Record> *next = nullptr;

    cout << "The pointer is: " << next <<'\n';


    return 0;
}