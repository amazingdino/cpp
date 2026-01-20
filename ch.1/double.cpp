#include <iostream>

using namespace std; // able to use cout and cin without typing std

double square(double x);

double square(double x) //function
{
    return x*x;
}

void print_square(double x)
{
    cout<< "the square of x is : " << square(x) << endl;
}

int main(void)
{
    double x;
    cin >> x;
    print_square(x);
    return 0;
}



