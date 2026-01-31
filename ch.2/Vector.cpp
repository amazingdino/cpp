#include <iostream>

using namespace std;

class Vector
{
    public:
        Vector(int s):elem{new double[s]}, sz{s}{}
        double &operator[](int i){return elem[i];}
        int size(){return sz;}
    private:
        int sz;
        double *elem;
};

void vector_init(Vector &v, int s)
{
    v = s; // size 
}

void f(Vector v, Vector &rv, Vector *pv)
{
    int i1 = v.sz;  // Vector itself with new variable name
    int i2 = rv.sz; // Vector's reference
    int i3 = pv->sz; //pointer of Vector
}

double read_and_sum(int s)
{
    int i;
    double sum = 0;
    Vector v(s); // make a vector with (s) elements
    vector_init(v,s); //malloc and made 

    for(i=0; i!=s; ++i)
    {
        cin>>v[i]; //scanf each elements
    }
    for(i=0; i!=s; ++i)
    {
        sum +=v[i]; //add all elements to sum
    }
    return sum;
}


int main(void)
{
    Vector v(6); //made sz only cuz its an integer

    return 0;
}