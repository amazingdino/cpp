#include <iostream>
#include <stdio.h>
#include <stdbool.h>

using namespace std;
// namespace = 
// eg) std,
// Ahn Tony, Ahn Andy, Kim Andy

bool accept()
{
    cout << "Do you want to proceed (y or n)?"<<endl; // write question
    char answer = 0; // initialize to a value that will not appear on input
    cin >> answer; // read answer
    if (answer == 'y')
        return true;
    return false;
}

int main(void)
{
    accept();
    return 0;
}