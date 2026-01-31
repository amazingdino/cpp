#include <iostream>

using namespace std;

constexpr int square(int x)
{
    return x * x;
}

int main(void)
{
    int var = 17;
    constexpr int a = square(17);
    //constexpr int b = square(var);
    // as you see we need to input the number before running //compile time
    // when it comes to constant expression
    // but const we could input after running //run time
    // because it just means constant
    // so once we input a number it will stay constant.
    const int c = square(var);

    if(a == square(17))
    {
        cout<< "a works. a = "<< a << '\n'; 
    }
    else
    {
        cout<<"a does not work." << '\n';
    }

    // if(b == square(var))
    // {
    //     cout<<"b works. b = " << b << '\n';
    // }
    // else
    // {
    //     cout<<"b does not work."<<'\n';
    // }

    if(c == square(var))
    {
        cout<<"c works. c = " << c << '\n';
    }
    else
    {
        cout<<"c does not work."<< '\n';
    }

    return 0;
}