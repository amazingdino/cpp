#include <iostream>

using namespace std;

template <typename T>

struct Link
{
    T value;
    Link *next;
};

struct Record
{
    int number;
};


int main(void)
{
    int i;
    char str[101];

    cin >> str;
    for(i=0; str[i] = '\0'; i++)
    {
        if(str[i] == 'u'||'d'||'l'||'r')
        {
            str[i];
        }
        else
        {
            return 0;
        }
    }

    Link<Record> ;

    return 0;
}