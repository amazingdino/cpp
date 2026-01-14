#include <iostream>

using namespace std;

int main()
{
    cout << "C++ Version: " << __cplusplus << endl;

    if (__cplusplus >= 202002L) {
        cout << "cpp >=20" << endl;
    } else {
        cout << "no" << endl;
    }
}