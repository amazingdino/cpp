#include <iostream>
#include <stdio.h>
#include <stdbool.h>

using namespace std;

bool accept()
{
    cout << "Do you want to proceed (y or n)?"<<endl; // write question
    char answer = 0; // initialize to a value that will not appear on input
    cin >> answer; // read answer like scanf
    if (answer == 'y')
        return true;
    return false;
}

bool accept2()
{
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0; 
    cin >> answer;

    switch (answer)  //now we made specific 
    {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no.\n";
            return false;
    }
}

void action()
{
    while (true) 
    {
        cout << "enter action:\n";
        string act;
        cin >> act; 
        Point delta {0,0}; // Point holds an {x,y} pair
        
        for (char ch : act) 
        {
            switch (ch) 
            {
                case 'u': // up
                case 'n': // north
                    ++delta.y;
                    break;
                case 'r': // right
                case 'e': // east
                    ++delta.x;
                    break;
                //we could add down and left
                default:
                    cout << "I freeze!\n";
            }
                move(current+delta∗scale);
                update_display();
        }
    }
}

void do_smt(vector<int>&v)
{
    if(auto n = v.size(); n!= 0)
    {
        // now when we n is no 0 it proceeds
    }
}


int main(void)
{
    accept2();
    return 0;
}