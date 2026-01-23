#include <iostream>

using namespace std;

int main(void)
{
    int x = 0b0101;
    int y = 0b1010;

    int z = x&&y;
    cout << "x && y is " << z << "\n";
    // since is int, the 0 infront colides so it prints 1;
    z = x || y; // either
    cout << "x || y is " << z << "\n";
    // 1
    



    return 0;
}