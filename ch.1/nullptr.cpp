#include <iostream>

int count_x(const char *p, char x)
// to let it points to something
{
    if(p == nullptr)
    {
        return 0;
    }
    int count = 0;
    /* for(;*p!=0; ++p)
    {
        if(*p == x)
        {
            ++count;
        }
    }
    */ 
    while(*p)
    {
        if(*p == x)
        {
            ++count;
        }
        ++p;
    }
    return count;
}

int main(void)
{
    double *pd = nullptr;// we use nullptr for less confusion
    // as null in C was 0, but null pointer is no value
    // like literally NULL;
    Link<Record> *lst = nullptr;
    int x = nullptr; //error since nullptr has no value




    return 0;
}