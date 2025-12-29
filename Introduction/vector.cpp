#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v = {1,2,3};

    for(auto x : v)
    {
        std::cout << x <<"\n";
    }

    v.push_back(4);

    for(auto &x : v) // 1,2,3,4 (address)
    {
        ++x;
        std::cout << x << "\n";
    }

}