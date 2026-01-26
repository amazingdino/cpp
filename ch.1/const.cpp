#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//we know const is number we cant change, but we can assign before read
// but
// constexpr, we have to assign a number before going through reading phase
// the difference is one is 
// const = runtime
// constexpr = compile time

constexpr double square(double x)
{
    return x*x;
}

constexpr double nth(double x, int n)
{
    double res = 1;
    int i = 0;
    while(i<n) //repeat til n
    {
        res*=x; // res = res * x;
        ++i; // pre add 1 to i
    }
    return res; //return result
}

int main(void)
{
    constexpr int dmv = 17;
    int var = 17;
    const double sqv = sqrt(var);

    double sum(const vector<double>&);

    vector<double>v{1,2,3,4,5}; //casual
    const double s1 = sum(v);// sum in runtime CORRECT
    // constexpr double s2 = sum(v); //Error in runtime must assign

    constexpr double max1 = 1.4*square(17); //ok since we gave 17
    constexpr double max2 = 1.4*square(dmv); // error since var not const expression
    const double max3 = 1.4*square(var); // ok, but need more
    

    return 0;
}