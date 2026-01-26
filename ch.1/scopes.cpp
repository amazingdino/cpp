#include <iostream>
#include <vector>
#include <complex>

using namespace std;

//local scopes are ones initialized within the blocks
// class copes are ones initialized within the class/ struct/ union
// namespace scopes are ones in the namespace block
// but this one i dont get it I need a general explanation

vector<int>vec; // vec = global variable

struct Record
{
    string name; // name is a string mem
    // ?
}

void fct(int arg)
{
    string motto {"Who dares wins"}; //local
    auto p = new Record{"Hume"}; // p -> new(malloc) record
    
}

int main(void)
{



    return 0;
}