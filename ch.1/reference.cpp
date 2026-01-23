#include <iostream>

using namespace std;

int main(void)
{
    /*
    int x =2;
    int y =3;
    x = y;
    */
    // x == y; 3
    int x = 2;
    int y = 3;
    int *p = &x;
    int *q = &y;
    p = q; // now both pointers are pointing towards  y;

    cout << "the outcomes is now *p: "<< *p << "and *q: "<< *q << '\n';

    int &r = x; //r has x's address
    int &r2 = y; // r2 has y's address
    r = r2; // now r gets r2's address which was y's value
    // so x becomes 3 but without changing its address

    return 0;
}