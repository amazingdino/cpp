#include <iostream>
#include <stdio.h>

void print();

int main(void)
{   
    int x;
    std::cin >> x;
    printf("%d\n", x);
    std::cout << "The value of x is " << x << "\n";
    printf("next\n");
    print();

}

void print()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for(auto x : v)
    {
        std::cout << x << '\n';
    }
    for(auto x : {10,21,32,43,54,65})
    {
        std::cout << x << "\n";
    }
}