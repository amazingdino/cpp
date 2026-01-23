#include <iostream>

int main(void)
{
    int x = 7;
    int &r = x; //binded
    r = 7;
    int &r2; //cant have uninitialized reference
    // we could r2 = 99 behind it;
    r2 = 99;

    return 0;
}