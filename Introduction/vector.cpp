#include <iostream>
#include <vector>
// similar to #include <stdlib.h> for malloc

int main(void)
{
    std::vector<int> v = {1,2,3}; //created a space for v with 1,2,3

    for(auto x : v) //copy the v into x and prints it
    {
        std::cout << x <<"\n";
    }

    v.push_back(4);

    for(auto &x : v) // takes the address of v(which was 1,2,3) then adds 1 on each when repeating
    {
        ++x;
        std::cout << x << "\n";
    }

}