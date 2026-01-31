#include <iostream>

using namespace std;

struct Square
{
    int sum = 0;
    int operator()(int x)
    {
        return sum += x*x;
    }
};

int main(void)
{   

    Square a;
    cout<<a(3)<<endl;
    cout<<a(4)<<endl;

    return 0;

}