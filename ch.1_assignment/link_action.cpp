#include <iostream>

using namespace std;

template <typename T>

struct Link //link list
{
    T value;
    Link *next;
};

struct Record // 받는 direction
{
    char direction;
    int count;
};

struct axis // print 
{
    int a = 0;
    int operator()(int x, int y)
    {
        
    }
}


int main(void)
{
    int i;
    char str[101] = "uuuxxxrrddduu";
    axis a;

    Link<Record> *First = new Link<Record>{1, nullptr};

    Link *new_node;

    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] == 'u')
        {
            new_node->value = str[i];
        }
    }

    new_node->next = First; 

    return 0;

}