#include <iostream>

using namespace std;

int main(void)
{
    int x = 0b0101;
    int y = 0b1010;
    
    int z = x&y;
    cout << "x & y is "<< z << "\n"; // 0000
    z = x|y;
    cout << "x | y is "<< z << "\n"; // 1111
    z = x^y;
    cout << "x ^ y is "<< z << "\n"; // 1111
    // when they overlap = 0; dont = 1;
    z = ~x;
    cout << "~ x is " << ~x << "\n"; // 111111111111010
    // -1 - 1 - 4 => -6
    
    






    return 0;
}