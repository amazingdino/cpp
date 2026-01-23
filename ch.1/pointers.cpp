#include <iostream>

using namespace std;

void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10]; // this is to copy v1?
    //its like making additional space to copy in like malloc

    for(auto i=0; i!=10; ++i) //copy elements
    // set i =0; repeat until i is not 10 and increment i
    {
        v2[i]= v1[i];
    }
}

void print()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for(auto x : v) //for each x in v
    {
        cout << x << '\n';
    }

    for(auto x : {10,21,32,43,54,65})
    {
        cout << x << '\n';
    }
}

void increment()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for(auto &x : v)
    {
        ++x; //adds 1 into each x in v so which means
        // before it was copy
        //now we access to the values we copy
        // and we add 1 to it.
    }
}

void sort(vector<double>&v);
//we call it reference now in cpp?
// sort v = a vector of doubles
// if we do sort(my_vec)
// we dont copy it, we get my_vec
//so if we dont want to modify we use const in front of vector

/*
Type a[n]; // a = array of ns
Type *p; // pointer to Type
Type &r; // reference of Type
Type f(A); // calling function of that type with A argument
*/



int main(void)
{
    char v[6]; //array of 6 char
    // char *p; // pointing to character types
    char *p = &v[3]; // pointing to fourth one
    char x = *p; // has the value of *p





    return 0;
}